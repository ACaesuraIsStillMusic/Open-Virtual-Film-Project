bl_info = {
    "name": "Open Virtual Film Project Blender To Unreal Bridge",
    "author": "Fae Corrigan",
    "version": (0,1,1,0),
    "category": "Object",
    "blender": (2,80,0),
    "location": "View3D > Sidebar > Tools Tab",
    "description": "A set of cleanup, import and export tools made to transfer files between blender and UE4 using the open virtual film project's standards",
    "warning": "",
}

import bpy
import re
import math
import sys
import os
import csv
import ntpath
import textwrap 
import platform

from mathutils import Color
from bpy.types import Operator, AddonPreferences
from datetime import datetime
from bpy.props import (StringProperty,
                       BoolProperty,
                       IntProperty,
                       FloatProperty,
                       FloatVectorProperty,
                       EnumProperty,
                       PointerProperty,
                       )
from bpy.types import (Panel,
                       Menu,
                       Operator,
                       PropertyGroup,
                       )

#get install directory for UE4 and setup remote execution
if platform.system()=='Windows':
    import winreg
    supportedVersions = ["4.21","4.25","4.26"]
    for ver in supportedVersions:
        key = 'SOFTWARE\\EpicGames\\Unreal Engine\\' + ver
        root = winreg.HKEY_LOCAL_MACHINE
        value = 'InstalledDirectory'
        try:
            hkey = winreg.OpenKey(root, key)
            
        except:
            pass
        try:
            (val, typ) = winreg.QueryValueEx(hkey, value)
        except:
            winreg.CloseKey(hkey)
            pass
        winreg.CloseKey(hkey)
        
    
    sys.path.append(val + '/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python')
    msg = val + '/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python'
    print(msg)
    
    try:
        #bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = msg)
        import remote_execution as remote
        print("found remote execution")
        
    except:
        print("Failed to find remote execution in a UE installation. Check your UE install")
else: #working with a mac computer
    print("You are using an unsupported OS, this plugin might not work")
    sys.path.append('/Users/Shared/Epic Games/UE_4.25/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python')
    import remote_execution as remote

#test blender version
if (2 , 90 , 0 ) <= bpy.app.version:
    print("Version is 2.90 or above")
else: 
    print("Version below 2.90")



                  
               
 #######################################################################################################                      
 #######################################################################################################
def updateuedirectory(self, context):
    print('update')
    dir = os.path.dirname(context.preferences.addons[__name__].preferences.UnrealPath)
    print(dir)
    sys.path.append(dir )
    if not dir in sys.path:
        sys.path.append(dir )
        #print(sys.path)

    import remote_execution as remote 

    # this next part forces a reload in case you edit the source after you first start the blender session
    import imp
    imp.reload(remote)
    
    return

def setupassettypes(self, context): #function for updating the asset types field in the UI

    assetString = context.preferences.addons[__name__].preferences.AssetTypes
    assetString = re.sub(' ', '', assetString)
    assetString = assetString.split(',')
    outstring = []
    for a in assetString:
        outstring.append((a,a,''))
    
    #outstring = str(outstring)
    return outstring
    
def importFunction(self, context):
    scene = context.scene
    mytool = scene.my_tool
    
    mytool.OVFPB2U_artistInitials = OVFPB2U_OT_QuickCleanGeo.fixstring(mytool.OVFPB2U_artistInitials)
    mytool.OVFPB2U_objectName = OVFPB2U_OT_QuickCleanGeo.fixstring(mytool.OVFPB2U_objectName)
    mytool.OVFPB2U_objectSource = OVFPB2U_OT_QuickCleanGeo.fixstring(mytool.OVFPB2U_objectSource)
    
    OVFPB2U_OT_createImportPath.execute(self, context)
    OVFPB2U_OT_createExportPath.execute(self, context)
    OVFPB2U_OT_createunrealcommand.execute(self, context)

def updateimportFunction(self,context):
    scene = context.scene
    mytool = scene.my_tool
    print(mytool.OVFPB2U_importpathprotect)
    if not mytool.OVFPB2U_importpathprotect: #protects the update function from an infinite loop
        mytool.OVFPB2U_importpathprotect = True
        importFunction(self,context)
        mytool.OVFPB2U_importpathprotect = False


# ------------------------------------------------------------------------
#    Addon Preferences
# ------------------------------------------------------------------------
 
class OVFPB2U_AddonPreferences(AddonPreferences):
    # this must match the addon name, use '__package__'
    # when defining this in a submodule of a python package.
    bl_idname = __name__

    FBXExportFilepath: StringProperty(
        name= "File Export Path",
        description = "Export directory filepath where you fbx files and textures will be saved. Commonly found on a shared server or in the imports folder of your UE project",
        subtype='FILE_PATH',
        default = './imports/'
        )
    AssetTypes: StringProperty(
        name="Asset Categories",
        description = "Names of folders in the assets directory in the form name1 , name2, name3. Feel free to add/remove as necesasary for your project",
        #subtype='FILE_PATH',
        default = 'arch/bridge,arch/buildings,arch/ceilings,arch/doors,arch/floors,arch/supports,arch/details,arch/walls,backdrops,cameras,characters/common,characters, dressing/containers,dressing/debris,dressing/fabric,dressing/fence,dressing/furniture,dressing/misc,dressing/papers,dressing/practicals,dressing/ropeChain,dressing/signs,dressing/tools, gaffGrip/applebox,gaffGrip/crane,gaffGrip/cstand,gaffGrip/fabric,gaffGrip/power,gaffGrip/scaffold,gaffGrip/telehandler,gaffGrip/tripod,gaffGrip/truss,greens/flowers,greens/grass,greens/ivy,greens/plants,greens/rocks,greens/trees,lights/moving,lights/practical,lights/spot,lights/wash,misc,props,stages,terrain/cliff,terrain/mountain,terrain/water,vehicles'        )
    UnrealPath: StringProperty(
        name="Unreal Python Path",
        description = "WIP. Right now you need to change a line of code in the .py file. Path to the Unreal 4.25 Project of the format: C:/Program Files/Epic Games/UE_4.25/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python",
        subtype='FILE_PATH',
        default = 'C:/Program Files/Epic Games/UE_4.25/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python',
        update = updateuedirectory
        )
    
    AllowDuplicateAssetFolderTextures: BoolProperty(
            name="Allow duplicating textures in output folder? If False, the export textures tool will check if the referenced textures exist in the file export path before saving new copies. Mostly useful for having a surface directory in the exports folder or versions of the same object",
            default=False,
            )
    
    UnrealSceneGeoFolderName: StringProperty(
        name="Scene Geo Folder Name",
        description = "",
        default = 'incomingGeo',
        update = updateuedirectory
        )
        
    UnrealSceneMatFolderName: StringProperty(
        name="Scene Mat Folder Name",
        description = "",
        default = 'materials',
        update = updateuedirectory
        )
        
    UnrealSceneImportDirectory: StringProperty(
        name="Scene Import Folder",
        description = "",
        default = "/Game/environments/",
        update = updateuedirectory
        )
        
    
#    number = IntProperty(
#            name="Example Number",
#            default=4,
#            )
#    boolean = BoolProperty(
#            name="Example Boolean",
#            default=False,
#            )

    def draw(self, context):
        layout = self.layout
        layout.label(text="This is a preferences view for our addon")
#       layout.prop(self, "number")
#       layout.prop(self, "boolean")
        layout.prop(self, "FBXExportFilepath")
        layout.prop(self, "AssetTypes")
        layout.prop(self, "UnrealPath")
        layout.prop(self, "AllowDuplicateAssetFolderTextures")
        layout.prop(self, "UnrealSceneGeoFolderName")
        layout.prop(self, "UnrealSceneMatFolderName")
        layout.prop(self, "UnrealSceneImportDirectory")
        
# ------------------------------------------------------------------------
#    Scene Properties
# ------------------------------------------------------------------------ 

class OVFPB2U_OT_properties(PropertyGroup):
    '''
#    my_bool: BoolProperty(
#        name="Enable or Disable",
#        description="A bool property",
#        default = False
#        )

#    my_int: IntProperty(
#        name = "Int Value",
#        description="A integer property",
#        default = 23,
#        min = 10,
#        max = 100
#        )

#    my_float: FloatProperty(
#        name = "Float Value",
#        description = "A float property",
#        default = 23.7,
#        min = 0.01,
#        max = 30.0
#        )

#    my_float_vector: FloatVectorProperty(
#        name = "Float Vector Value",
#        description="Something",
#        default=(0.0, 0.0, 0.0), 
#        min= 0.0, # float
#        max = 0.1
#    ) 

#    my_string: StringProperty(
#        name="User Input",
#        description=":",
#        default="",
#        maxlen=1024,
#        )

#    my_enum: EnumProperty(
#        name="Dropdown:",
#        description="Apply Data to attribute.",
#        items=[ ('OP1', "Option 1", ""),
#                ('OP2', "Option 2", ""),
#                ('OP3', "Option 3", ""),
#               ]
#        )
    '''

    
    #addon_prefs = bpy.context.preferences.addons[__name__].preferences
    
    OVFPB2U_setoriginbool: BoolProperty(
        name="Use Cursor for Origin",
        description="True will set the origin to the cursor's current location, false will center the origin",
        default = False
        )    
    
    OVFPB2U_quickcleanmerged: BoolProperty(
        name="Quick Clean Merged",
        description="True will run the quick clean geo command on each object created by the merge by empty command",
        default = False
        )    
    
    OVFPB2U_keepExistingOrigin: BoolProperty(
        name="Use Current Origin",
        description="If True, the cleanup tool will not change the pivot will become that of the active obect",
        default = False
        ) 
        
    OVFPB2U_maintaintopography: BoolProperty(
        name="Maintain Topography",
        description="True will prevent the tool from doing any planar decimation. It will still triangulate",
        default = False
        )    
    
    OVFPB2U_importpathprotect: BoolProperty(
        name="Updating Import Paths",
        description="",
        default = False
        )    

    OVFPB2U_autoapplymodifiers: BoolProperty(
        name="Auto Apply Modifiers",
        description="True will apply the decimate and triangulate modifiers to your geo when you run quick clean geo",
        default = True
        ) 
        
    OVFPB2U_degenerateArea: FloatProperty(
        name = "Degenerate Area",
        description = "Area of faces to consider degenerate",
        default = 0.5,
        min = 0.0001
        )
          
    
    OVFPB2U_cleanupmergedistance: FloatProperty(
        name = "Merge Distance",
        description = "Max distance between verticies before they are merged into 1",
        default = 0.0001,
        min = 0.0001
        )
        
    OVFPB2U_cleanupmergeangle: FloatProperty(
        name = "Decimate Angle",
        description = "Max angle for planar decimate",
        default = 0.2,
        min = 0.0001
        )
        
        
    OVFPB2U_objectName: StringProperty(
        name="Object Import Name",
        description="If importing a scene, this is the short freewrite descriptor. If importing an asset, this is the shortname of the asset",
        default="",
        maxlen=32,
        update = updateimportFunction,
        )
    
    OVFPB2U_objectSource: StringProperty(
        name="Asset Source/Env Name",
        description="Where the asset is from, or which environment the scene will be imported into",
        default="",
        maxlen=32,
        update = updateimportFunction,
        )
    
    OVFPB2U_artistInitials: StringProperty(
        name="Artist's Initials",
        description="For tracking scene imports",
        default="",
        maxlen=6,
        update = updateimportFunction,
        )
    
    OVFPB2U_unrealCommand: StringProperty(
        name="Script to run in UE",
        description="Command to send to UE",
        default=''
        )

    
    OVFPB2U_FBXexportPath: StringProperty(
        name="FBX Export Path",
        description="Where on your hard drive the fbx, texture and csv files will save",
        default='',#prefs.FBXExportFilepath,
        maxlen=255,
        )
        
    OVFPB2U_FBXName: StringProperty(
        name="FBX Name",
        description="Full Name of the FBX for exporting",
        default=''
        
        )  
    
    OVFPB2U_MeshImportPath: StringProperty(
        name="Unreal Mesh Import Path",
        description="Where in the project to import to, such as assets -> rocks ->. Autogenerated by the create path script",
        default="",
        maxlen=255,
        )
        
    OVFPB2U_MatImportPath: StringProperty(
        name="Unreal Material Import Path",
        description="Where in the project to import to, such as assets -> rocks ->. Autogenerated by the create path script",
        default="",
        maxlen=255,
        )
    
    OVFPB2U_TexImportPath: StringProperty(
        name="Unreal Texture Import Path",
        description="Where in the project to import to, such as assets -> rocks ->. Autogenerated by the create path script",
        default="",
        maxlen=255,
        )
    
    OVFPB2U_unrealAssetCategory: EnumProperty(
        name="Asset Category",
        description="If importing an asset, which folder it will end up in",
        items=setupassettypes,
        default=None,
        options={'ANIMATABLE'},
        get=None,
        set=None,
        update = updateimportFunction,
        )
    
    OVFPB2U_unrealAssetType: EnumProperty(
        name="Asset Type",
        description="If importing an asset, this dictates what type of mesh it will import as",
        items=[ ('SM', "Static Mesh", ""),
                ('SK', "Skeletal Mesh", ""),
                ('CAM', "Camera", ""),
                ('LGT', "Blueprint Light", ""),
                ('Animation', "Animation", ""),
               ],
        update = updateimportFunction,
        )
        
    OVFPB2U_importType: EnumProperty(
        name="Import Type",
        description="Whether you are importing an asset, animation, or scene",
        items=[ ('Asset', "Asset", ""),
                ('Scene', "Scene", ""),
                ('Animation', "Animation", ""),
               ],
        update = updateimportFunction,
        )

##############################################################################################################################################################################################################
##############################################################################################################################################################################################################                         
# ------------------------------------------------------------------------
#    Panel in Object Mode
# ------------------------------------------------------------------------

class OVFPB2U_PT_MAINPanel:
    bl_space_type = "VIEW_3D"
    bl_region_type = "UI"
    bl_category = "Tools"
    bl_options = {"DEFAULT_CLOSED"}

class OVFPB2U_PT_OverviewPanel(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    
    bl_idname = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Blender Unreal Bridge"

    def draw(self, context):
        layout = self.layout
        #layout.label(text="This is the main panel.")
        scene = context.scene
        mytool = scene.my_tool
 
class OVFPB2U_PT_SetupPanel(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Setup"

    def draw(self, context):
        layout = self.layout
        #layout.label(text="This is the main panel.")
        scene = context.scene
        mytool = scene.my_tool
        box = layout.box()
        box.operator("context.b2ubsetdefaultunits")
        box.label(text = "Make sure to double check the size of a known object after using the tool")

        box.separator()
        box.prop(mytool, "OVFPB2U_importType")
        if mytool.OVFPB2U_importType == "Asset":
            t = "Asset Name"
            t2 = "Asset Source"
        else:
            t = "Import desc."
            t2= "Env Name"
        box.prop(mytool, "OVFPB2U_objectName", text = t)
        box.prop(mytool, "OVFPB2U_objectSource", text = t2)
        box.prop(mytool, "OVFPB2U_artistInitials")
        box.prop(mytool, "OVFPB2U_unrealAssetType")
        if mytool.OVFPB2U_importType == "Asset":
            box.prop(mytool, "OVFPB2U_unrealAssetCategory")
        box.separator()
        box.operator("object.removeduplicatematerials")

class OVFPB2U_PT_INTEGRITYPANEL(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Model Integrety Checks"

    def draw(self, context):
        layout = self.layout
        scene = context.scene
        mytool = scene.my_tool
        '''
        
        layout.label(text="units are set to scale 0.01, centimeters, there is a scale cube at world origin(spawn one if not) material set to hidden, potential for degegenerate faces check")
        
        
        col = layout.column()
        col.label(text="Align Location:")

        col = layout.column_flow(columns=4, align=True)
        col.prop(mytool, "OVFPB2U_objectName", text = "name")
        col.label(text="")
        col.operator("object.b2ubquickclean", text="Z")
        col.operator("object.b2ubquickclean", text="All")
        
        row = layout.row()
        row.prop(mytool, "OVFPB2U_objectName", text = "name")
        row.label(text="")
        row.operator("object.b2ubquickclean", text="Z")
        row.operator("object.b2ubquickclean", text="All")
        
        
        box = layout.box()
        box.prop(mytool, "OVFPB2U_objectName")
        '''
        #layout.separator()
        layout.prop(mytool, "OVFPB2U_degenerateArea")
        
        layout.operator("context.b2uselectdegenerate")

class OVFPB2U_PT_CLEANUPPANEL(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Cleanup"

    def draw(self, context):
        layout = self.layout
        scene = context.scene
        mytool = scene.my_tool
        
        layout.prop(mytool, "OVFPB2U_setoriginbool")
        layout.prop(mytool, "OVFPB2U_maintaintopography")
        layout.prop(mytool, "OVFPB2U_keepExistingOrigin")
        layout.prop(mytool, "OVFPB2U_autoapplymodifiers")
        layout.prop(mytool, "OVFPB2U_cleanupmergedistance")
        layout.prop(mytool, "OVFPB2U_cleanupmergeangle")
        layout.operator("object.b2ubquickclean")
        layout.operator("object.applycleanedgeo")
        
        layout.separator()
        
        #layout.operator("object.b2ubobjtomeshname")
        layout.prop(mytool, "OVFPB2U_quickcleanmerged")
        layout.operator("context.b2ubmergebyempty")
        layout.operator("context.b2uremoveempties")
        layout.separator()

        layout.operator("object.b2ufixparent")
        layout.operator("context.b2upurgeunused")
        
        
        
        
        layout.separator()
        

        layout.operator("object.origintoselected")
        
        layout.operator("context.b2ubgenlightmap")
        layout.operator("context.b2uselectsimilarbyverts")
        
class OVFPB2U_PT_NamingConventions(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Naming Conventions"

    def draw(self, context):
        layout = self.layout
        scene = context.scene
        mytool = scene.my_tool
        if mytool.OVFPB2U_objectName != "" and mytool.OVFPB2U_objectSource != "" and mytool.OVFPB2U_artistInitials != "":
            layout.operator("object.b2ubrenamemeshes")
            layout.separator()
            layout.operator("object.b2ubrenamematerials")
            layout.separator()
            layout.operator("object.b2ubrenametextures")
        else:
            layout.label(text = "Please fill out setup infomation before proceding")
            mytool.OVFPB2U_FBXexportPath = ""
            mytool.OVFPB2U_unrealCommand = ""
            
class OVFPB2U_PT_EXPORTPANEL(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Export"

    def draw(self, context):
        layout = self.layout
        scene = context.scene
        mytool = scene.my_tool
         
        #layout.prop(mytool, "OVFPB2U_unrealCommand")
        #layout.operator("object.prepmeshexport")
        if mytool.OVFPB2U_objectName != "" and mytool.OVFPB2U_objectSource != "" and mytool.OVFPB2U_artistInitials != "" and len(mytool.OVFPB2U_FBXexportPath)>0 and len(mytool.OVFPB2U_unrealCommand)>0 :
            if round(bpy.context.scene.unit_settings.scale_length,2) == 0.01:
                layout.operator("context.b2ubexportall")
                layout.operator("context.b2ubexportselected")
                layout.separator()
                layout.operator("object.sendcommandtounreal")
                
            else:
                layout.label(text = "Please check your scale is correct.")
                layout.label(text = "The unit scale should be set to 0.01")
                layout.label(text = "Under setup is a tool to fix this problem")
                layout.label(text = "Make sure to double check the size") 
                layout.label(text = "of a known object after using the tool")
                layout.label(text = "The measure-it addon is great for testing quick dimensions")
        else:
            layout.label(text = "Please fill out all setup infomation before proceding")

class OVFPB2U_PT_DebugPANEL(OVFPB2U_PT_MAINPanel, bpy.types.Panel):
    bl_parent_id = "OVFPB2U_PT_OverviewPanel"
    bl_label = "Debug"

    def draw(self, context):
        layout = self.layout
        scene = context.scene
        mytool = scene.my_tool
        
        #layout.operator("object.createunrealcommand")
        #layout.operator("context.b2ubcreateimportpath")
        #layout.operator("context.b2ubcreateexportpath")
        layout.operator("object.b2ubobjtomeshname")
        layout.operator("object.prepmeshexport")
        
        layout.operator("context.b2ubrunsetup")
        layout.prop(mytool, "OVFPB2U_unrealCommand") 
        layout.prop(mytool, "OVFPB2U_MeshImportPath")
        layout.prop(mytool, "OVFPB2U_FBXexportPath")
        layout.prop(mytool, "OVFPB2U_unrealAssetCategory")
        layout.prop(mytool, "OVFPB2U_importpathprotect")
        layout.operator("context.b2ubexportfbx")
        layout.separator()
        layout.operator("context.b2ubsavetextures")
        layout.separator()
        layout.operator("context.b2uwritecsvs")
        layout.separator()
        layout.operator("context.b2ubtest")
        
        
        


##############################################################################################################################################################################################################
##############################################################################################################################################################################################################
 
# ------------------------------------------------------------------------
#    Functions
# ------------------------------------------------------------------------
class OVFPB2U_OT_Test(bpy.types.Operator):
    """Test Function"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubtest"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Test"         # Display name in the interface.
    
    
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        #msg = 'Message Text'
        #bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = msg)
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################



class OVFPB2U_OT_SetDefaultUnits(bpy.types.Operator):
    """Run once before importing to make sure your blender units are all set up correctly for export to UE4. Note: this may cause issues with physics and lighting inside of blender"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubsetdefaultunits"        # Unique identifier for buttons and menu items to reference.
    bl_label = "B2U Set Default Units"         # Display name in the interface.
    
    
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        bpy.context.scene.unit_settings.system = 'METRIC'
        bpy.context.scene.unit_settings.scale_length = 0.01
        bpy.context.scene.unit_settings.length_unit = 'CENTIMETERS'
        bpy.context.space_data.clip_end = 1e+06


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_writeCSV(bpy.types.Operator):
    """Write Mesh, Material and Texture Import CSVs"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2uwritecsvs"        # Unique identifier for buttons and menu items to reference.
    bl_label = "B2U Write CSV files"         # Display name in the interface.
    
    
    
    def buildMeshHierarchy(csvobject,mytool,rows,scaleOffset):
        print("write to CSV: " + str(csvobject))
        objectname = csvobject.name
        
        parentname = ""
        
        
        if csvobject.parent:
            parentname = csvobject.parent.name
            
            
            #objectpos = (csvobject.location - csvobject.parent.location)
            #objectpos.x =objectpos.x/scaleOffset.x
            #objectpos.y =objectpos.y/scaleOffset.y
            #objectpos.z =objectpos.z/scaleOffset.z
            #obScale.x = csvobject.scale.x/scaleOffset.x
            #obScale.y = csvobject.scale.y/scaleOffset.y
            #obScale.z = csvobject.scale.z/scaleOffset.z
        
        obScale = csvobject.scale * 1
        objectpos = csvobject.location
        objRotation = csvobject.rotation_euler
        objRotationout = [0,0,0]
        objRotationout[0] = -math.degrees(objRotation.x)
        objRotationout[1] = -math.degrees(objRotation.y)
        objRotationout[2] = -math.degrees(objRotation.z)

        selection = bpy.context.selected_objects
        
        meshpath = ""
        if csvobject.type == "MESH": #TODO metadata references, lights, cameras, etc
            meshname = csvobject.data.name
            meshname = meshname.replace(".","_")
            if csvobject in selection:
                meshpath = "StaticMesh'" + mytool.OVFPB2U_MeshImportPath + "/" + meshname + "." + meshname + "'"
            #StaticMesh'/Game/assets/rocks/SM_CC0_3dRock001/SM_CC0_3DRock001.SM_CC0_3DRock001'
        
        
        prt = "(Rotation=(X=" + str(objRotationout[0]) + ",Y=" + str(objRotationout[1])+",Z=" + str(objRotationout[2])+",W=0),Translation=(X="+str(objectpos[0]*-1) + ",Y="+str(objectpos[1]) + ",Z="+str(objectpos[2]) + "),Scale3D=(X=" + str(obScale[0]) + ",Y=" + str(obScale[1]) + ",Z=" + str(obScale[2]) + "))"
        #(Rotation=(X=0.000000,Y=0.000000,Z=0.000000,W=1.000000),Translation=(X=0.000000,Y=0.000000,Z=0.000000),Scale3D=(X=1.000000,Y=1.000000,Z=1.000000))
        csvrotation = "(Pitch=" + str(objRotationout[1]) + ",Yaw="+str(objRotationout[2])+",Roll="+str(objRotationout[0])+")"
        
        
        objmats = OVFPB2U_OT_writeCSV.getMaterials(csvobject,mytool)
        
        rows.append([objectname,objectname,parentname,meshpath,prt,objmats[0],csvrotation,objmats[1]])
        #print(parent.children)
        for c in csvobject.children:
            scaleOffset2 = csvobject.scale*1
            scaleOffset2.x = csvobject.scale.x*scaleOffset.x
            scaleOffset2.y = csvobject.scale.y*scaleOffset.y
            scaleOffset2.z = csvobject.scale.z*scaleOffset.z
            #scaleOffset2 = csvobject.scale*scaleOffset
            rows = OVFPB2U_OT_writeCSV.buildMeshHierarchy(c,mytool,rows,scaleOffset2)
        
        return rows
    
    def getMatColorTexture(parameterName,defaultColor, masterMaterialOverride,principled,mytool,mastermat):
        col = ""
        tex = ""
        
        values = [0,0,0]
        
        # Get the slot for 'base color'######################################################
        param = principled.inputs[parameterName] #Or principled.inputs[0]
        #defaultColor = [round(num, 4) for num in defaultColor]
        tcol = param.default_value
        print("tcol:"+str(tcol) + "   default:"+ str(defaultColor))
        if isinstance(tcol, float):
            tcol = round(tcol, 4)
            
            
        else:
            tcol = [round(num, 4) for num in param.default_value]
        
        
            
        # Get the linked texture for the material
        try:
            if len(param.links) >0:
                link = param.links[0]
                link_node = link.from_node
                if link_node.image is None:
                    # Get its default value (not the value from a possible link)
                    #tcol = param.default_value #test if the color is set to default
                    # Translate as color
                    if tcol != defaultColor:
                        mastermat = masterMaterialOverride
                        if isinstance(tcol, float):
                            
                            tcol = param.default_value
                            
                        else:
                            
                            col = []
                            for v in range(0,len(tcol)):
                                col.append(tcol[v])
                            col = str(col)
                        #col = str(tcol[0]) + ',' + str(tcol[1]) + ',' + str(tcol[2])
                else:
                    print( link_node.image.name )
                    tex = link_node.image.name
                    tex = tex.partition(".")[0]
                    tex = mytool.OVFPB2U_TexImportPath + '/' + tex
                    mastermat = masterMaterialOverride
            elif tcol != defaultColor:
                #print("failure?"+str(tcol)+str(defaultColor))
                print("Tcol != default")
                # Translate default tint as color
                mastermat = masterMaterialOverride
                
                
                if isinstance(tcol, float):
                    
                    col = param.default_value
                    
                else:
                    
                    col = []
                    for v in range(0,len(tcol)):
                        col.append(tcol[v])
                    col = str(col)
                #col = str(tcol[0]) + ',' + str(tcol[1]) + ',' + str(tcol[2])
                    
            
            
        except Exception:
                print("Failed to find texture val, continuing")
                #OVFPB2U_OT_MessageBox.ShowSimpleMessageBox("Failed to find texture val, continuing", "OVFP Blender Plugin", 'ERROR')
        values = [col,tex,mastermat]
        return values
    
    def getNormalTexture(parameterName,principled,mytool):
        
        
        
        param = principled.inputs[parameterName]
        normaltexture = ""
        print("testing normal  " + str(param.links))
        try:
            if len(param.links) >0:
                print("testing normal2  " + str(param.links))
                normalNode = param.links[0].from_node
                param = normalNode.inputs["Color"]
                if len(param.links) > 0:
                    
                    link = param.links[0]

                    link_node = link.from_node
                    if link_node.image is None:
                        # Get its default value (not the value from a possible link)
                        print("no normal found")
                    else:
                        print( link_node.image.name )
                        tex = link_node.image.name
                        tex = tex.partition(".")[0]
                        normaltexture = mytool.OVFPB2U_TexImportPath + '/' + tex       
        except Exception:
            print("Failed to find normal map, continuing")
            #OVFPB2U_OT_MessageBox.ShowSimpleMessageBox("Failed to find normal map, continuing", "OVFP Blender Plugin", 'ERROR')
                    
        
        return normaltexture
    
    def buildMatRows(m,mytool,rows):
        # try/except if the setting is not as expected
        mastermat = "/OVFPPlugin/masterMaterials/surfaces/MM_Swap_Solid" #default to swap solid. If certain texture parameters are met then this will get overwritten
        baseColorTexture = ''
        baseColorTint = ''
        subCTexture = ''
        subsurfaceTint = '' #UE then Blender
        clearcoatnormal = '' #Clear Coat Normal, Clearcoat Normal
        clearcoatroughnesstexture = '' #Clear Coat Roughness , Clearcoat Roughness
        clearcoatroughnessamount = '' #Clear Coat Roughness Amount ,Clearcoat Roughness
        emissivetexture = '' # Emissive, Emission
        emissiveamount = '' # Emissive Brightness, Emission
        metallictexture = '' #Metallic, Metallic
        metallicbrightness = '' #Metallic Brightness, Metallic
        normaltexture = '' #Normal, Normal
        opacitytexture = ''#Opacity Map, Alpha
        opacityamount = '' #Opacity , Alpha
        roughnesstexture = '' #Roughness , Roughness
        roughnessamount = '' #Roughness Amount, Roughness
        specularconstant = '' #Specular Constant,Specular
        anisotropictexture = '' #Anisotropic,Anisotropic
        
        
        
        
        
        
        #read parameters from a BSDF_PRINCIPLED shader if it exists
        #try:
        # Get its first material slot
        material = m
        # Get the nodes in the node tree
        if material.node_tree:
        
            nodes = material.node_tree.nodes
            # Get a principled node
            #principled = False
            principled = nodes.get("Principled BSDF")
            
            
            if material and material.use_nodes and principled: #make sure we have a material and it uses nodes
                
                
                
                #parameterName,defaultColor, masterMaterialOverride,principled,mytool,mastermat
                # Get the info for 'base color'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Base Color', [0.8,0.8,0.8,1], mastermat,principled,mytool,mastermat)
                baseColorTint = values[0]
                baseColorTexture = values[1]
                mastermat = values[2]
                
                # Get the slot for 'subsurface color'######################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Subsurface Color', [0.8,0.8,0.8,1], '/OVFPPlugin/masterMaterials/surfaces/MM_Swap_Solid_Subsurface',principled,mytool,mastermat)
                subsurfaceTint = values[0]
                subCTexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Clearcoat Normal'#####################################################
                clearcoatnormal = OVFPB2U_OT_writeCSV.getNormalTexture('Clearcoat Normal',principled,mytool)
                            
                # Get the info for 'Clearcoat Roughness'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Clearcoat Roughness', 0.03, mastermat,principled,mytool,mastermat)
                clearcoatroughnessamount = values[0]
                clearcoatroughnesstexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Emission'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Emission', [0,0,0,1], '/OVFPPlugin/masterMaterials/surfaces/MM_Swap_Emissive',principled,mytool,mastermat)
                emissiveamount = values[0]
                emissivetexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Metallic'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Metallic', 0, mastermat,principled,mytool,mastermat)
                metallicbrightness = values[0]
                metallictexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Normal'#####################################################
                print("testing normal0  ")
                normaltexture = OVFPB2U_OT_writeCSV.getNormalTexture('Normal',principled,mytool)
                
                # Get the info for 'Alpha'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Alpha', 1, mastermat,principled,mytool,mastermat)
                opacityamount = values[0]
                opacitytexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Roughness'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Roughness', 0.5, mastermat,principled,mytool,mastermat)
                roughnessamount = values[0]
                roughnesstexture = values[1]
                mastermat = values[2]
                
                # Get the info for 'Specular'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Specular', 0.5, mastermat,principled,mytool,mastermat)
                specularconstant = values[0]
                mastermat = values[2]
                
                # Get the info for 'Anisotropic'#####################################################
                values = OVFPB2U_OT_writeCSV.getMatColorTexture('Anisotropic', 0, mastermat,principled,mytool,mastermat)
                #roughnessamount = values[0]
                anisotropictexture = values[1]
                mastermat = values[2]


                if material.blend_method != "OPAQUE":
                    mastermat = '/OVFPPlugin/masterMaterials/surfaces/MM_Swap_GlassSimpleTransluscent'
                    if opacityamount =="":
                        opacityamount = 1
                #except:
                #    print( 'not found' )
                    
                overwriteExisting = "n" #y yes or True all work, anything else does not overwrite
                rows.append([ m.name , m.name, mastermat, overwriteExisting , baseColorTexture, baseColorTint , subCTexture, subsurfaceTint,clearcoatnormal,clearcoatroughnesstexture,clearcoatroughnessamount,emissivetexture,emissiveamount,metallictexture,metallicbrightness,normaltexture,opacitytexture,opacityamount,roughnesstexture,roughnessamount,specularconstant,anisotropictexture])
                
        
        

        return rows

    def buildTexRows(t,mytool,rows):
        tpath = "path"
        texturetype = ""
        unrealSearchPath = ""
        overwriteexisting = ""
        if t is None:
            print("badTexture")
        else:
            rows.append([ t.name , t.filepath, texturetype, unrealSearchPath , overwriteexisting])
        return rows
    
    def writeCSVRows(rows,mytool,csvName):
        #write Csv
        if not os.path.exists(mytool.OVFPB2U_FBXexportPath):
            os.makedirs(mytool.OVFPB2U_FBXexportPath)
            
        with open(mytool.OVFPB2U_FBXexportPath+csvName, mode='w', newline='') as csvFile:
            csvWriter = csv.writer(csvFile, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
            for row in rows:
                
                csvWriter.writerow(row)
            
    def writemeshcsv(mytool,rows):
        context = bpy.context
        scene = context.scene
        
        mytool = scene.my_tool
        #rows = OVFPB2U_OT_writeCSV.setupMeshCSV(mytool,rows)
        outputObjects = []
        objects = scene.objects
        
        for obj in objects: #fixes problems with selecting a child object without its parent
            while obj.parent:
                obj = obj.parent
            if obj not in outputObjects:
                outputObjects.append(obj)
        
        rows.append(["---","Mesh Name","Parent Name","Mesh Path","prt","Materials","rotation","materialSlotNames"])
        
        for obj in outputObjects:
            scaleOffset = obj.scale
            rows = OVFPB2U_OT_writeCSV.buildMeshHierarchy(obj,mytool,rows,scaleOffset)   
        csvName = "ASH_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName + ".csv"
        
        OVFPB2U_OT_writeCSV.writeCSVRows(rows,mytool,csvName)

    def writematcsv(mytool,rows):
        context = bpy.context
        scene = context.scene
        print("writing Material CSV")
        

        
        rows.append(["---","materialName","parent","overwrite material if found?","T_baseColor", "V_BaseColor Tint" , "T_Subsurface Color Map" , "V_Subsurface Tint",
        "T_Clear Coat Normal","T_Clear Coat Roughness","S_Clear Coat Roughness Amount","T_Emissive","V_Emissive Tint","T_Metallic","S_Metallic Brightness",
        "T_Normal","T_Opacity Map","S_Opacity","T_Roughness","S_Roughness Amount","S_Specular Constant","T_Anisotropic"]) #TODO going to have to expand this eventually. Maybe a dictionary?
        
        #depreciated, get all materials in the blender file
        '''
        for m in bpy.data.materials:
            print(m)
            rows = OVFPB2U_OT_writeCSV.buildMatRows(m,mytool,rows)
        '''
        
        # grab the selection to find out which meshes are going to be exported
        selection = bpy.context.selected_objects
        materials = []
        for i in selection:
            tempmaterials = i.material_slots
            for m in tempmaterials:
                if m.material not in materials:
                    materials.append(m.material)
        for m in materials:
            rows = OVFPB2U_OT_writeCSV.buildMatRows(m,mytool,rows)
        
        
        csvName = "ASM_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName + ".csv"
        OVFPB2U_OT_writeCSV.writeCSVRows(rows,mytool,csvName)
        
        return
        
    def writetexcsv(mytool,rows):
        context = bpy.context
        scene = context.scene
        
        rows.append(["---","TexturePath","TextureType","Search Directory (path to texture for true)","overwrite existing?"]) #TODO going to have to expand this eventually. Maybe a dictionary?

        textures = []
        for ob in bpy.context.selected_objects:
            if ob.type == "MESH":
                for mat_slot in ob.material_slots:
                    if mat_slot.material:
                        if mat_slot.material.node_tree:
                            texturestoadd = [x for x in mat_slot.material.node_tree.nodes if x.type=='TEX_IMAGE']
                            for t in texturestoadd:
                                if t.image not in textures:
                                    textures.extend([t.image])
                            

        for t in textures:
            rows = OVFPB2U_OT_writeCSV.buildTexRows(t,mytool,rows)

    
        csvName = "AST_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName + ".csv"
        OVFPB2U_OT_writeCSV.writeCSVRows(rows,mytool,csvName)
    
    def getMaterials(object,mytool):
        print("starting get material slot names")
        
       

        
        
        materials = object.material_slots
        #blender and UE do material slots backward
        materialstring = "("
        materialSlotString = "("
        materialFolderPath = ""
        if mytool.OVFPB2U_importType == 'Scene':
            materialFolderPath = mytool.OVFPB2U_MatImportPath
            
        elif mytool.OVFPB2U_importType == 'Asset':
            materialFolderPath = mytool.OVFPB2U_MatImportPath
            
            
        elif mytool.OVFPB2U_importType == 'Animation':
            materialFolderPath = "AnimationPathTodo"
        else:
            materialFolderPath = ""
        
        firstmat = True
        for m in materials:
            if firstmat == False:
                materialstring = materialstring + ','
                materialSlotString = materialSlotString + ','
            if m.link == "OBJECT":
                m.link = "DATA"
                materialSlotString = materialSlotString+m.name
                
                m.link = "OBJECT"
            else:
                materialSlotString = materialSlotString+m.name
            materialstring = materialstring+"MaterialInstanceConstant'" + '"'+ materialFolderPath + m.name + "." + m.name + "\"'"
            firstmat = False
        
        materialstring = materialstring + ")"
        materialSlotString = materialSlotString + ")"
        #(Material'"/DatasmithContent/Materials/FBXImporter/VRED/BrushedMetal.BrushedMetal"',Material'"/VirtualProductionUtilities/2D/Materials/Bookmark/M_Metal.M_Metal"')
        
        print(materialstring)
        return [materialstring,materialSlotString]

    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        rows = []
        OVFPB2U_OT_writeCSV.writematcsv(mytool,rows)
        rows = []
        OVFPB2U_OT_writeCSV.writetexcsv(mytool,rows) #material csv will collect textures for export?
        rows = []
        OVFPB2U_OT_writeCSV.writemeshcsv(mytool,rows)

        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_SaveTextures(bpy.types.Operator):
    """Save copies of textures to import folder. TODO create an update textures function that only copies the files that are not already in the export directory"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubsavetextures"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Export Textures"         # Display name in the interface.
    
    @classmethod
    def poll(cls, context):
        try:
            if (context.mode == 'OBJECT' and context.active_object.select_get() and context.active_object.type == 'MESH' and context.active_object is not None) or True:
                return True
            else:
                return False
        except Exception:
            return False
        
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        textures = []
        for ob in bpy.data.objects:
            if ob.type == "MESH":
                for mat_slot in ob.material_slots:
                    if mat_slot.material:
                        if mat_slot.material.node_tree:
                            texturestoadd = [x for x in mat_slot.material.node_tree.nodes if x.type=='TEX_IMAGE']
                            for t in texturestoadd:
                                if t.image not in textures:
                                    textures.extend([t.image])
                                    
        for t in textures:
            #t.filepath_raw = "C:/Users/danco/Desktop/uv_map_reference2.jpg"
            path = mytool.OVFPB2U_FBXexportPath + "textures/"
            try:
                if not os.path.exists(path):
                    os.makedirs(path)
                if t is None:
                    print("Save textures: bad texture")
                else:
                    diskname = ntpath.basename(t.filepath)
                    print(diskname)
                    if (context.preferences.addons[__name__].preferences.AllowDuplicateAssetFolderTextures or context.preferences.addons[__name__].preferences.FBXExportFilepath not in t.filepath) or diskname != t.name: #make sure we are not duplicating textures in the imports folder to save space
                        
                        savepath = path + t.name
                        if not (savepath.endswith(".png") or savepath.endswith(".jpg") or savepath.endswith(".JPG") or savepath.endswith(".PNG")):
                            t.file_format = 'PNG'
                            savepath = savepath + ".png"
                        t.filepath_raw = savepath
                        print(t)
                        t.save()
            except Exception:
                pass
        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_GenLightmaps(bpy.types.Operator):
    """Save before use. This will rename UV channel 0 to UV0 and add an autocreated UV1 for lightmap data. Useful if you are having overlapping lightmap issues in UE. Note: this will overwrite any existing lightmap information on the mesh with an auto-UV lightmap. It does not generate a high quality result, just something to get by with."""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubgenlightmap"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Generate Quick Lightmaps"         # Display name in the interface.
    
    @classmethod
    def poll(cls, context):
        try:
            
            if context.mode == 'OBJECT' and context.active_object.select_get() and context.active_object.type == 'MESH' and context.active_object is not None:
                return True
            else:
                return False
                    
        except Exception:
            return False
        
        
        
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        #bpy.context.object.data.uv_layers[0].name
        if len(bpy.context.object.data.uv_layers) == 0:
            bpy.ops.mesh.uv_texture_add()
        bpy.context.object.data.uv_layers[0].name = "UV0"
        if len(bpy.context.object.data.uv_layers) <2:
            bpy.ops.mesh.uv_texture_add()
        bpy.context.object.data.uv_layers[1].name = "UV1"
        bpy.context.object.data.uv_layers.active = bpy.context.object.data.uv_layers[1]
        bpy.ops.object.mode_set(mode='EDIT')
        bpy.ops.mesh.select_all(action='SELECT')
        bpy.ops.uv.smart_project()
        bpy.ops.uv.lightmap_pack()
        bpy.context.object.data.uv_layers.active = bpy.context.object.data.uv_layers[0]
        
        bpy.ops.object.mode_set(mode='OBJECT')


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_runSetup(bpy.types.Operator):
    """Run all setup commands to prep for UE Import"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubrunsetup"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Run ADG UE Import Setup"         # Display name in the interface.
    
    
    
    def execute(self, context):        # execute() is called when running the operator.
        scene = context.scene
        mytool = scene.my_tool
        # The original script
        #mytool.OVFPB2U_importpathprotect = False
        updateimportFunction(self,context)
        
        
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.


##############################################################################################################################################################################################################

class OVFPB2U_OT_createImportPath(bpy.types.Operator):
    """Generates an unreal import path based on user input"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubcreateimportpath"        # Unique identifier for buttons and menu items to reference.
    bl_label = "B2U Create Import Path"         # Display name in the interface.
    
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        if mytool.OVFPB2U_importType == 'Scene':
            mytool.OVFPB2U_MeshImportPath = context.preferences.addons[__name__].preferences.UnrealSceneImportDirectory+mytool.OVFPB2U_objectSource + "/"+context.preferences.addons[__name__].preferences.UnrealSceneGeoFolderName+"/"+datetime.today().strftime("%Y%m%d")+"_"+ mytool.OVFPB2U_objectName +"_" + mytool.OVFPB2U_artistInitials
            mytool.OVFPB2U_TexImportPath = context.preferences.addons[__name__].preferences.UnrealSceneImportDirectory+mytool.OVFPB2U_objectSource + "/"+context.preferences.addons[__name__].preferences.UnrealSceneMatFolderName+"/"
            mytool.OVFPB2U_MatImportPath = mytool.OVFPB2U_TexImportPath
        elif mytool.OVFPB2U_importType == 'Asset':
            mytool.OVFPB2U_MeshImportPath = "/Game/assets/" + mytool.OVFPB2U_unrealAssetCategory + "/" + mytool.OVFPB2U_unrealAssetType + "_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName
            mytool.OVFPB2U_TexImportPath = mytool.OVFPB2U_MeshImportPath
            mytool.OVFPB2U_MatImportPath = mytool.OVFPB2U_MeshImportPath
            
        elif mytool.OVFPB2U_importType == 'Animation':
            mytool.OVFPB2U_MeshImportPath = "AnimationPathTodo"
            mytool.OVFPB2U_TexImportPath = "AnimationPathTodo"
            mytool.OVFPB2U_MatImportPath = "AnimationPathTodo"
        else:
            mytool.OVFPB2U_MeshImportPath = ""
            mytool.OVFPB2U_TexImportPath = ""
            mytool.OVFPB2U_MatImportPath = ""
        
        
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_createExportPath(bpy.types.Operator):
    """Generates an unreal export path based on user input"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubcreateexportpath"        # Unique identifier for buttons and menu items to reference.
    bl_label = "B2U Create Export Path"         # Display name in the interface.
    
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        unrealPath = context.preferences.addons[__name__].preferences.FBXExportFilepath
        
            
        unrealPath = bpy.path.abspath(unrealPath)
        unrealPath = os.path.abspath(unrealPath)
        if unrealPath[-1] != '/':
            unrealPath = unrealPath + '/' #make sure that the unreal path ends in a way that can be appended
        
        if mytool.OVFPB2U_importType == 'Scene':
            mytool.OVFPB2U_FBXName = mytool.OVFPB2U_unrealAssetType + "_" + mytool.OVFPB2U_objectSource +"_" +mytool.OVFPB2U_objectName + ".fbx"
            mytool.OVFPB2U_FBXexportPath = unrealPath + "environments/"+mytool.OVFPB2U_objectSource + "/incomingGeo/"+datetime.today().strftime("%Y%m%d")+"_"+ mytool.OVFPB2U_objectName +"_" + mytool.OVFPB2U_artistInitials + "/"
        elif mytool.OVFPB2U_importType == 'Asset':
            mytool.OVFPB2U_FBXName = mytool.OVFPB2U_unrealAssetType + "_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName + ".fbx"
            mytool.OVFPB2U_FBXexportPath = unrealPath + "assets/" + mytool.OVFPB2U_unrealAssetCategory + "/" + mytool.OVFPB2U_unrealAssetType + "_" + mytool.OVFPB2U_objectSource +"_" + mytool.OVFPB2U_objectName + "/" + datetime.today().strftime("%Y%m%d")+ "/"
        elif mytool.OVFPB2U_importType == 'Animation':
            mytool.OVFPB2U_FBXName = "animation todo"
            mytool.OVFPB2U_FBXexportPath = unrealPath + "AnimationPathTodo"
        else:
            mytool.OVFPB2U_FBXName = ""
            mytool.OVFPB2U_FBXexportPath = ""
        
        
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_selectSimilarObjects(bpy.types.Operator):
    """Unfinished: Select all objects that are similar to the current active selection for easier instancing. Right now it selects all objects with the same number of verticies"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2uselectsimilarbyverts"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Select similar objects"         # Display name in the interface.
    
    @classmethod
    def poll(cls, context):
        try:
                
            if context.mode == 'OBJECT' and context.active_object.select_get() and context.active_object.type == 'MESH' and context.active_object is not None:
                return True
            else:
                return False
                    
        except Exception:
            return False
        

            
            
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        active_object = bpy.context.view_layer.objects.active
        active_verts = len(active_object.data.vertices)
        
        for all_objects in  bpy.context.view_layer.objects:
            if all_objects.type == 'MESH':
                all_objects_verts = len(all_objects.data.vertices)           
                if all_objects_verts == active_verts:
                    all_objects.select_set(state = True)
        
        
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_SelectDegenerateObjects(bpy.types.Operator):
    """Find any objects with potentially degenerate faces (too small) in your current selection. 
    Degenerate faces can be caused by issues with object scale, or by bad geo. 
    The quick clean geo tool in cleanup can help fix the problem if you don't want to fix it manually"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2uselectdegenerate"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Filter Selection by Degenerate"         # Display name in the interface.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT':
            return True
        else:
            #add warning if needed
            return False
            
            
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        print("start Test Degenerate")
        degenerateArea = mytool.OVFPB2U_degenerateArea #cm area of face

        # list of mesh objects
        mesh_objs = [o for o in bpy.context.selected_objects
                        if o.type == 'MESH']

        # dict with surface area of each object
        obj_areas = []
        for o in mesh_objs:
            obj_area = [o,min([f.area for f in o.data.polygons])*min(o.scale.x,o.scale.y,o.scale.z)]
            if obj_area[1] < degenerateArea:
                obj_areas.append(obj_area[0])
                        
        print(obj_areas)
        [o.select_set(o in obj_areas) for o in mesh_objs]
        
        
        


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################
  
class OVFPB2U_OT_QuickCleanGeo(bpy.types.Operator):
    """Merge selected objects, remove duplicate verts, do a quick planar decimate, and triangulate. Useful for getting face count down but makes a mess of your model"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ubquickclean"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Quick Clean Geo"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        try:
                
            if context.mode == 'OBJECT' and context.active_object.select_get() and context.active_object.type == 'MESH' and context.active_object is not None:
                return True
            else:
                return False
                    
        except Exception:
            return False
        
    
    
    def fixstring(fixstring , replaceunderscore = True):        # clean out extra characters from a string
        #fixedstring = re.sub(r'\W+', '', fixstring) #making sure the object name follows all the proper rules
        if replaceunderscore:
            fixstring = re.sub('_', '-', fixstring)
        fixedstring = re.sub('[^0-9a-zA-Z-_]', '', fixstring)
        #end original script


        return fixedstring            # Return the new string
    
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        
        mytool = scene.my_tool
        setorigintocursor = mytool.OVFPB2U_setoriginbool
        mergedistancevar = mytool.OVFPB2U_cleanupmergedistance
        print("use cursor for origin?:", setorigintocursor)

 
        if bpy.context.view_layer.objects.active and bpy.context.view_layer.objects.active in bpy.context.selected_objects:    #make sure we have an object selected.         #if scene.objects.selected[active] 
            
            try:
                bpy.ops.object.make_single_user(type='SELECTED_OBJECTS', obdata=True) #if there is more than one copy of the object in the scene, we make this one single user to avoid conflics
                #TODO: if the active object has instances, we should throw a popup to ask if we want to apply current changes to all instances. 
                for m in bpy.context.selected_objects:
                    if m.type == 'MESH':
                        mesh = m.data
                        if len(bpy.context.object.data.uv_layers) == 0:
                            bpy.ops.mesh.uv_texture_add()
                        
                        m.data.uv_layers[0].name = 'UV0' #makes sure the 1st uv channel in use has the same name so they merge properly. If you have different names UE won't read all the UV maps
                    else:
                        m.select_set(False) #deselect any non-mesh objects so they don't get removed from parenting    
                    #bpy.context.view_layer.objects.active = objectToSelect    
                            

                
                bpy.ops.object.join()
                bpy.ops.object.mode_set(mode='EDIT')

                #bpy.ops.object.editmode_toggle()
                bpy.ops.mesh.select_all(action='SELECT')
                bpy.ops.mesh.remove_doubles(threshold=0.001)
                bpy.ops.mesh.dissolve_degenerate(threshold=mergedistancevar)
                
                if not (mytool.OVFPB2U_maintaintopography):
                    bpy.ops.object.modifier_add(type='WELD')
                    bpy.context.object.modifiers["Weld"].merge_threshold = mergedistancevar
                    bpy.ops.object.modifier_add(type='DECIMATE')
                    bpy.context.object.modifiers["Decimate"].decimate_type = 'DISSOLVE'
                    bpy.context.object.modifiers["Decimate"].angle_limit = math.radians(mytool.OVFPB2U_cleanupmergeangle)
                    bpy.context.object.modifiers["Decimate"].delimit = {'MATERIAL' , 'UV'}
                    bpy.ops.object.modifier_add(type='TRIANGULATE')
                    bpy.context.object.modifiers["Triangulate"].quad_method = 'BEAUTY'
                bpy.ops.mesh.customdata_custom_splitnormals_clear()

                bpy.ops.object.mode_set(mode='OBJECT')
                
                
                
                

                
                
            
                print("apply modifiers?:",mytool.OVFPB2U_autoapplymodifiers)
                if mytool.OVFPB2U_autoapplymodifiers:# == True:
                    bpy.ops.object.applycleanedgeo()

                if mytool.OVFPB2U_keepExistingOrigin:
                    True
                elif setorigintocursor:
                    bpy.ops.object.origin_set(type='ORIGIN_CURSOR', center='MEDIAN')
                else:
                    bpy.ops.object.origin_set(type='ORIGIN_GEOMETRY', center='MEDIAN')
                
                
                object = bpy.context.view_layer.objects.active
                parent = object.parent
                bpy.ops.object.parent_clear(type='CLEAR_KEEP_TRANSFORM')
                bpy.ops.object.transform_apply(location=False, rotation=True, scale=True)
                object.parent = parent
                if object.parent:
                    
                    object.matrix_parent_inverse = parent.matrix_world.inverted()

            except Exception:
                bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Failed to clean geo. Check selection and try again")
            
            
            

            
            
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_MergeByEmpty(bpy.types.Operator):
    """Cycles through the selection sibling meshes (under the same parent) and merges them into 1. Useful for turning rhino layers into objects. Important: you need to select the actual meshes you want to merge. Select hierarcy is useful in this respect """      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubmergebyempty"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Merge Objects by Empty"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT':
            return True
        else:
            #add warning if needed
            return False
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        print("start merge by empty")

        mesh_objs = [obj for obj in bpy.context.selected_objects if obj.type == 'MESH']
        


        bpy.ops.object.select_all(action='DESELECT')
        
        try:
            for obj in mesh_objs:
                print(obj)
                
                
                try:
                    bpy.context.view_layer.objects.active  = obj
                    print(obj)
                    bpy.ops.object.select_grouped(type='SIBLINGS')
                    bpy.ops.object.join()
                    if mytool.OVFPB2U_quickcleanmerged:
                        bpy.ops.object.b2ubquickclean()
                except Exception:
                    pass
        except Exception:
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Something went wrong, double check your selection and try again")
            
            
        
            
            
            
            
            #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_FixParenting(bpy.types.Operator):
    """Removes parent inverse transform. Sets all child objects in the selection to use relative transforms in the item details. This is more in line with how other 3d softwares like UE work"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ufixparent"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Fix Parenting"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        print("fix parenting")
        obs = bpy.context.selected_objects
       
        for ob in obs:
            if ob.parent:
                
                

                # Store a copy of the objects final transformation
                # so we can read from it later.
                ob_matrix_orig = ob.matrix_world.copy()

                # Reset parent inverse matrix.
                # (relationship created when parenting)
                ob.matrix_parent_inverse.identity()

                # Re-apply the difference between parent/child
                # (this writes directly into the loc/scale/rot) via a matrix.
                ob.matrix_basis = ob.parent.matrix_world.inverted() @ ob_matrix_orig
        

        
        
        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_RemoveEmpties(bpy.types.Operator):
    """Finds all empty objects in the scene that have no children and deletes them """      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2uremoveempties"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Remove Unused Empties"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        print("start remove empties")

        childless_empties = [e for e in bpy.data.objects
        if not (e.data or e.children)]

        while childless_empties:
            bpy.data.objects.remove(childless_empties.pop(), do_unlink=True)
        
        
        
        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_applymodifiers(bpy.types.Operator):
    """If Auto Apply Modifiers is false, this will go through the selected objects and apply any relevant modifiers"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.applycleanedgeo"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Apply Cleaned Geo"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        #bpy.ops.object.apply_all_modifiers()
        for obj in bpy.context.selected_objects:
            is_select = True 
            #TODO: check if object is instanced. If it is, test if all instances are selected. 
            #If not, make the group single user. Then make all but 1 of the objects single user. 
            #apply modifiers to that object, then link all other instances back to the cleaned version

            # copying context for the operator's override
            contx = bpy.context.copy()
            contx['object'] = obj

            for mod in obj.modifiers[:]:
                contx['modifier'] = mod
                is_mod = True
                try:
                    bpy.ops.object.modifier_apply(
                                        contx,
                                        modifier=contx['modifier'].name
                                        )
                except:
                    pass


        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_namingConMeshes(bpy.types.Operator):
    """If you rename an object, the mesh name will not follow. This goes through the selected objects and makes sure any rename commands are propogated to where UE4 will read them"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ubobjtomeshname"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Object to Mesh Name"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
        
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        for obj in bpy.context.selected_objects:
            if obj.type == 'MESH':  
                objectname = obj.name
                if objectname[0].isalpha()==False:
                    objectname = "SM_"+objectname
                objectname = OVFPB2U_OT_QuickCleanGeo.fixstring(objectname)
                
                obj.data.name = objectname
                obj.name = objectname


        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_RemoveDuplicateMaterials(bpy.types.Operator):
    """Merge together any materials ending with .001, .002 if the starting name is the same"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.removeduplicatematerials"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Remove Duplicate Materials"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.

    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        mat_list = bpy.data.materials
        for o in bpy.data.objects:
            for s in o.material_slots:
                try:
                    for q in mat_list:
                        try:
                            if s.material.name.casefold() == q.name.casefold():
                                s.material = q
                        except Exception:
                            pass
                    if s.material.name[-3:].isnumeric():
                        # the last 3 characters are numbers
                        if s.material.name[:-4] in mat_list:
                            # there is a material without the numeric extension so use it
                            s.material = mat_list[s.material.name[:-4]]
                except Exception:
                    pass


        objs = bpy.context.selected_objects
        for obj in objs:
            
            if obj.type == 'MESH':
            
                mesh = obj.data
                faces = mesh.polygons
                slots = obj.material_slots

                # get material index per face
                face_len = len (faces)
                used_material_indices = [0 for n in range (face_len)]
                faces.foreach_get ('material_index', used_material_indices)

                # one index should only be once in the list
                used_material_indices = set (used_material_indices)

                # list unused material slots
                slot_len = len (slots)
                all_material_slot_indices = set (n for n in range (slot_len))
                unused_slot_indices = all_material_slot_indices - used_material_indices
                
                # override context's object to obj
                ctx = bpy.context.copy ()
                ctx['object'] = obj

                # delete unused slots
                unused_slot_indices = list (unused_slot_indices)
                unused_slot_indices.sort (reverse=True)
                for slot_index in unused_slot_indices:
                    obj.active_material_index = slot_index
                    bpy.ops.object.material_slot_remove (ctx)
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_RenameMaterials(bpy.types.Operator):
    """Material Naming Convention"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ubrenamematerials"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Material Naming Convention"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.

    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        objectname = mytool.OVFPB2U_objectSource
        
        mat_list = bpy.data.materials
        cleanname = ""
        tempobjectname = ""
        
        
        #if objectname[0].isalpha()==False:
        #    objectname = "SM_"+objectname
        objectname = OVFPB2U_OT_QuickCleanGeo.fixstring(objectname) #making sure the object name follows all the proper rules


        for m in mat_list:
            cleanname = m.name
            tempobjectname = ""
            newname = ""
            if m.name[:3] == "MI_":
                cleanname = m.name[3:] #strip the MI_ from the string and remove spaces
                print(cleanname)
                if len(cleanname.split('_')) > 1:
                    tempobjectname = cleanname.split('_')[0]
                    s = ''
                    cleanname = s.join(cleanname.split('_')[1:])
                    cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                    tempobjectname = OVFPB2U_OT_QuickCleanGeo.fixstring(tempobjectname)
                    #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                    #tempobjectname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',tempobjectname))) #Remove spaces, underscores and special characters
                    newname = "MI_"+tempobjectname+"_"+cleanname
                else:
                    cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                    #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                    newname = "MI_"+cleanname
            else:
                
                #cleanname = cleanname.replace(objectname,"")
                cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                newname = "MI_"+objectname+"_"+cleanname      
            
            test = False
            for q in mat_list:
                if m.name.casefold() == q.name.casefold():
                    if test:
                        newname = newname + "1"
                    test = True
                    
            m.name = newname 
        #first three characters are MI_
        #between underscore 1 and 2 is the asset name
        #after underscore 2 is the material name, with no special characters

        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_RenameMeshes(bpy.types.Operator):
    """Mesh Naming Convention. Select objects you want to rename first"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ubrenamemeshes"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Mesh Naming Convention"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
    
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        objectname = mytool.OVFPB2U_objectSource
        
        mesh_list = bpy.data.objects
        cleanname = ""
        tempobjectname = ""
        
        
        #if objectname[0].isalpha()==False:
        #    objectname = "SM_"+objectname
        objectname = OVFPB2U_OT_QuickCleanGeo.fixstring(objectname) #making sure the object name follows all the proper rules
        
        for m in bpy.context.selected_objects:
        
            if m.type == 'MESH':
                
                cleanname = m.name
                tempobjectname = ""
                newname = ""
                if m.name[:3] == "SM_":
                    cleanname = m.name[3:] #strip the SM_ from the string and remove spaces
                    print(cleanname)
                    if len(cleanname.split('_')) > 1:
                        tempobjectname = cleanname.split('_')[0]
                        s = ''
                        cleanname = s.join(cleanname.split('_')[1:])
                        cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                        tempobjectname = OVFPB2U_OT_QuickCleanGeo.fixstring(tempobjectname)
                        #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                        #tempobjectname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',tempobjectname))) #Remove spaces, underscores and special characters
                        newname = "SM_"+tempobjectname+"_"+cleanname
                    else:
                        cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                        #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                        newname = "SM_"+cleanname
                else:
                    #cleanname = cleanname.replace(objectname,"")
                    cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                    #cleanname = re.sub('[!@#$]', '', re.sub(' ', '', re.sub('_', '',cleanname))) #Remove spaces, underscores and special characters
                    newname = "SM_"+objectname+"_"+cleanname      
                
                test = False
                for q in mesh_list:
                    if m.name.casefold() == q.name.casefold():
                        if test:
                            newname = newname + "1"
                        test = True
                        
                
                m.name = newname
                m.data.name = newname
            else:
                cleanname = m.name
                cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname)
                m.name = cleanname
            #m.name = objectname
        #first three characters are MI_
        #between underscore 1 and 2 is the asset name
        #after underscore 2 is the material name, with no special characters

        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_RenameTextures(bpy.types.Operator):
    """Mesh Naming Convention. Select objects you want to rename first"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.b2ubrenametextures"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Texture Naming Convention"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        if context.mode == 'OBJECT':
            return True
        else:
            #add warning if needed
            return False
            
    def parsenodelink(node):
        print("Starting at " + node.name + "-----" + str(node.outputs))
        try:
            link = node.outputs[0].links[0]
            linkname = link.to_socket.name
            nodename = link.to_node.name
            print("going to " + linkname + " in " + nodename)
            
            if nodename == "Normal Map":
                return "_nrm"
            
            if linkname == 'Base Color':
                return "_col"
            
            elif linkname == 'Subsurface Color':
                return "_subc"
            
            elif linkname == 'Clearcoat Roughness':
                return "-cc_rgh"
                
            elif linkname == 'Emission':
                return "emi"
                
            elif linkname == 'Metallic':
                return "met"
            
            elif linkname == 'Alpha':
                return "opa"
            
            elif linkname == 'Roughness':
                return "rgh"
            
            elif linkname == 'Specular':
                return "spec"
            
            elif linkname == 'Anisotropic':
                return "ani"
            
            
            
            
            
            
            
            
            
            return OVFPB2U_OT_QuickCleanGeo.fixstring(linkname)

        except Exception:
            return ""
        
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        objectname = mytool.OVFPB2U_objectSource
        cleanname = ""
        tempobjectname = ""
        
        textures = []
        for ob in bpy.data.objects:
            if ob.type == "MESH":
                for mat_slot in ob.material_slots:
                    if mat_slot.material:
                        if mat_slot.material.node_tree:
                            #texturestoadd = [x for x in mat_slot.material.node_tree.nodes if x.type=='TEX_IMAGE']
                            for t in mat_slot.material.node_tree.nodes:
                                if t.type == 'TEX_IMAGE':
                                    material = mat_slot.material
                                    node_tree = mat_slot.material.node_tree
                                    if t.image not in textures:
                                        cleanname = t.image.name
                                        tempobjectname = ""
                                        newname = ""
                                        print(cleanname)
                                        if cleanname.endswith(('.jpg', '.JPG', '.jpeg', '.JPEG', '.png', '.PNG', '.tga', '.TGA')): #strip suffix if of a known type
                                            cleanname = t.image.name.rsplit('.', 1)[0]
                                                                     
                                        if cleanname[:3] == "TX_": #if the mat starts with TX, make sure it contains no illegal characters and procede
                                            print(cleanname)
                                            newname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname, False)  
                                        else:
                                            #find the material using this texture
                                            cleanname = OVFPB2U_OT_QuickCleanGeo.fixstring(cleanname,True)
                                            materialName = mat_slot.material.name
                                            if materialName.startswith("MI_"):
                                                namestart = re.sub('MI_', 'TX_', materialName)
                                                
                                            else:
                                                namestart = "TX_"+objectname+"_"+materialName
                                            
                                            suffix = ""
                                            nodes = node_tree.nodes
                                            # Get a principled node
                                            principled = nodes.get("Principled BSDF")

                                            if material and material.use_nodes and principled:
                                                
                                                suffix = OVFPB2U_OT_RenameTextures.parsenodelink(t)
                                            
                                            
                                            newname =  namestart + "_" + cleanname + suffix 
                                        
                                        print(newname)
                                        t.image.name = newname
                                    
                                    
    
            
            

        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_PurgeAll(bpy.types.Operator):
    """ Remove any unused meshes, materials, and textures. Good to run before exporting """      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2upurgeunused"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Remove Unused Objects"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.
    
    @classmethod
    def poll(cls, context):
        return True
        if context.mode == 'OBJECT' and context.active_object is not None:
            return True
        else:
            #add warning if needed
            return False
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        
        print("start purge unused")
        
        for block in bpy.data.meshes:
            if block.users == 0:
                bpy.data.meshes.remove(block)

        for block in bpy.data.materials:
            if block.users == 0:
                bpy.data.materials.remove(block)

        for block in bpy.data.textures:
            if block.users == 0:
                bpy.data.textures.remove(block)

        for block in bpy.data.images:
            if block.users == 0:
                bpy.data.images.remove(block)
        
        
        
        
        
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_sendcommandtoUnreal(bpy.types.Operator):
    """Material Naming Convention"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.sendcommandtounreal"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Send Command to Unreal"         # Display name in the interface.

    def execute(self, context):        # execute() is called when running the operator.
        scene = context.scene
        mytool = scene.my_tool

        
        
        remote_exec = remote.RemoteExecution()
               
        try: 
            remote_exec.start()
            remote_exec.open_command_connection(remote_exec.remote_nodes)   #TODO: this will timeout before the import has finished and shows an error. 
        except Exception:
            emsg = "Send to Unreal failed to create a connection to UE. Make sure Unreal is open and correctly set up, close any other instances of blender and run the tool again. If the error persists you might have an issue with your firewall"
            print(emsg)
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Send to Unreal may have encountered an issue. If the file imported, ignore this message. If not, check the console")  

        try:
            exec_modes = ['EvaluateStatement','ExecuteFile','ExecuteStatement']
            exec_mode = exec_modes[1]
            rec = remote_exec.run_command(mytool.OVFPB2U_unrealCommand, exec_mode=exec_mode)
            remote_exec.close_command_connection()
        except Exception:
            emsg = "Send to Unreal may have encountered an issue. If the file imported, ignore this message. If not, make sure Unreal is open and correctly set up, close any other instances of blender and run the tool again. If the error persists you might have an issue with your firewall"
            print(emsg)
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Send to Unreal may have encountered an issue. If the file imported, ignore this message. If not, check the console")  
            
        try:
            remote_exec.close_command_connection()
        except Exception:
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message ="Failed to close remote connection")
        
        

        

        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_createunrealcommand(bpy.types.Operator):
    """Material Naming Convention"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.createunrealcommand"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Create Command for Unreal"         # Display name in the interface.

    def execute(self, context):        # execute() is called when running the operator.
        
        # The original script
        
        scene = context.scene
        mytool = scene.my_tool
        #mytool.OVFPB2U_importpathprotect = False
        updateimportFunction(self,context)
        uc_i = mytool.OVFPB2U_FBXexportPath #export location, where all the files to be imported exist
        uc_mp = mytool.OVFPB2U_MeshImportPath   #folder in ue to import meshes into
        uc_fn = mytool.OVFPB2U_FBXName
        uc_tp = mytool.OVFPB2U_TexImportPath
        uc_mt = mytool.OVFPB2U_MatImportPath
        mytool.OVFPB2U_unrealCommand = 'OVFP_DDCToUEBridgeImporter.py -i "'+uc_i+'" -mp "' + uc_mp + '" -fn "' + uc_fn + '" -tp "' + uc_tp + '" -mt "' + uc_mt
        #OVFP_DDCToUEBridgeImporter.py -i "C:/Users/danco/Documents/Unreal Projects/UE4-VirtualProductionTools/UE4BlenderPython/TestFiles/" -mp "/Game/testImport2"                              -fn "scene.fbx"'
        #OVFP_DDCToUEBridgeImporter.py -i "C:/Users/danco/Desktop/project/content/environments/cc0/incomingGeo/20200626_rock_fc/" -mp "/Game/environments/cc0/incomingGeo/20200626_rock_fc" -fn "rock.fbx"        

        
# Read arguments from command line         

        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_prepMeshExport(bpy.types.Operator):
    """Prep for mesh export"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.prepmeshexport"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Prep for Mesh Export"         # Display name in the interface.
    
    def emptyExportCollection():
        if 'b2ubExport' in bpy.data.collections: # Does the collection already exist?
            print("export collection exists")
            collection = bpy.data.collections['b2ubExport']
            if bpy.data.collections['b2ubExport'].name not in bpy.context.scene.collection.children: #if there is an export category, but it isn't in the current scene, make one
                bpy.context.scene.collection.children.link(collection)
        else:
            print("need to make export collection")
            collection = bpy.data.collections.new('b2ubExport')
            bpy.context.scene.collection.children.link(collection)
        exportCollection = bpy.data.collections['b2ubExport']
        while exportCollection.objects:
            exportCollection.objects.unlink(exportCollection.objects[0])
        
        return
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        scene = context.scene
        mytool = scene.my_tool
        bpy.ops.outliner.orphans_purge()
        
        OVFPB2U_OT_prepMeshExport.emptyExportCollection()
        
        # grab the selection to find out which meshes are going to be exported
        selection = bpy.context.selected_objects
        meshes = []
        for i in selection:
            if i.type == "MESH": #TODO metadata references, lights, cameras, etc
                meshes.append(i.data)
        
        
        
        for m in meshes: #add a new instance of each mesh in the scene at 0,0,0 named prep + the name of the mesh
            prepname = 'prep'+m.name
            ob = bpy.data.objects.new(prepname, m) # params are object name, mesh data (we re-use an existing one, which will effectively create a duplicate-linked object)
            bpy.data.collections["b2ubExport"].objects.link(ob)
            ob.location = (0,0,0) # place object at origin
            context.view_layer.objects.active = ob
            print(len(ob.material_slots))
            for j in range (len(ob.material_slots)): #sort material slots alphabetically in each mesh
                
                for i in range (len(ob.material_slots)-1):
                    ob.active_material_index = i
                    tempStr = ob.active_material.name
                    
                    ob.active_material_index = i+1
                    if ob.active_material.name < tempStr:
                        bpy.ops.object.material_slot_move(direction='UP')
                        print("material reorder")
            
            #remove unused materials from each mesh
            faces = m.polygons
            slots = ob.material_slots

            # get material index per face
            face_len = len (faces)
            used_material_indices = [0 for n in range (face_len)]
            faces.foreach_get ('material_index', used_material_indices)

            # one index should only be once in the list
            used_material_indices = set (used_material_indices)

            # list unused material slots
            slot_len = len (slots)
            all_material_slot_indices = set (n for n in range (slot_len))
            unused_slot_indices = all_material_slot_indices - used_material_indices
            
            # override context's object to obj
            ctx = bpy.context.copy ()
            ctx['object'] = ob

            # delete unused slots
            unused_slot_indices = list (unused_slot_indices)
            unused_slot_indices.sort (reverse=True)
            for slot_index in unused_slot_indices:
                ob.active_material_index = slot_index
                bpy.ops.object.material_slot_remove (ctx)
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_exportFbx(bpy.types.Operator):
    """Export FBX"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubexportfbx"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Export FBX"         # Display name in the interface.

    def execute(self, context):        # execute() is called when running the operator.
        scene = context.scene
        mytool = scene.my_tool
        
        OVFPB2U_OT_prepMeshExport.execute(self, context)
        context.view_layer.active_layer_collection = context.view_layer.layer_collection.children['b2ubExport'] #set active collection to export
        
        if not os.path.exists(mytool.OVFPB2U_FBXexportPath):
            os.makedirs(mytool.OVFPB2U_FBXexportPath)
        
        path = mytool.OVFPB2U_FBXexportPath  + mytool.OVFPB2U_FBXName
       
        
        # The original script
        bpy.ops.export_scene.fbx(
            filepath=path, 
            #check_existing=True, 
            #filter_glob="*.fbx", 
            #use_selection=True, 
            use_active_collection=True, 
            global_scale=1.0, 
            apply_unit_scale=True, 
            apply_scale_options='FBX_SCALE_NONE',
            bake_space_transform=False, 
            object_types={'ARMATURE', 'CAMERA', 'EMPTY', 'LIGHT', 'MESH', 'OTHER'}, 
            #use_mesh_modifiers=MMT.Apply_modifiers, 
            use_mesh_modifiers_render=True, 
            mesh_smooth_type='FACE',
            use_subsurf=False,  
            use_mesh_edges=False, 
            use_tspace=False, 
            use_custom_props=False, 
            #add_leaf_bones=MMT.Add_leaf_bones, 
            #primary_bone_axis=MMT.Primary_bone_axis, 
            #secondary_bone_axis=MMT.Secondary_bone_axis, 
            #use_armature_deform_only=True, 
            #armature_nodetype='NULL', 
            #bake_anim=export_anim, 
            #bake_anim_use_all_bones=True, 
            #bake_anim_use_nla_strips=False, 
            #bake_anim_use_all_actions=False, 
            #bake_anim_force_startend_keying=MMT.Startend_keys, 
            #bake_anim_step=MMT.Anim_step, 
            #bake_anim_simplify_factor=MMT.Simplify_factor, 
            path_mode='COPY', #TODO textures as a separate pass
            embed_textures=True, 
            batch_mode='OFF', 
            use_batch_own_dir=True, 
            #use_metadata=True, 
            axis_forward="-Y", 
            axis_up="Z"
            )
        
        OVFPB2U_OT_prepMeshExport.emptyExportCollection() #get rid of all the temporary meshes
        context.view_layer.active_layer_collection = context.view_layer.layer_collection.children[0] #reset active collection
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_exportAll(bpy.types.Operator):
    """Export All"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubexportall"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Export for UE"         # Display name in the interface.
    
    
    overwrite: bpy.props.BoolProperty(
        name = "overwrite",
        description = "overwrite",
        default = False
    )
    
    def execute(self, context):#, overwrite = False):        # execute() is called when running the operator.
        scene = context.scene
        mytool = scene.my_tool
        
        if not os.path.exists(mytool.OVFPB2U_FBXexportPath):
            try:
                os.makedirs(mytool.OVFPB2U_FBXexportPath)
            except Exception:
                bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Failed to export correctly. Check edit-preferences-addons-OVFB bridge file export path to make sure you have write permissions for that folder")
                return {'FINISHED'} 
            
        dir = os.listdir(mytool.OVFPB2U_FBXexportPath) 
        print(dir)
        # Checking if the list is empty or not 
        if len(dir) == 0 or self.overwrite: 
            print("Exporting") 
        else: 
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Overwrite?",export=True, exportAll = True)
            print("Not empty directory") 
            return {'FINISHED'}
        
        
        bpy.ops.outliner.orphans_purge()
        
        bpy.ops.object.select_all(action='SELECT')
        
        OVFPB2U_OT_FixParenting.execute(self,context)
        mytool.OVFPB2U_importpathprotect = False
        updateimportFunction(self,context)
        OVFPB2U_OT_exportFbx.execute(self,context)
        OVFPB2U_OT_SaveTextures.execute(self,context)
        OVFPB2U_OT_writeCSV.execute(self,context)
        bpy.ops.outliner.orphans_purge()
        filepath = mytool.OVFPB2U_FBXexportPath + mytool.OVFPB2U_FBXName + ".blend"
        bpy.ops.wm.save_as_mainfile(filepath=filepath,copy=True)
        
        #except Exception:
         #       OVFPB2U_OT_MessageBox.ShowSimpleMessageBox("Failed to export correctly. Check the preferences-addons-OVFB bridge file export path to make sure you have write permissions for that folder", "OVFP Blender Plugin", 'ERROR')
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_exportSelected(bpy.types.Operator):
    """Export Selected"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "context.b2ubexportselected"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Export Selection for UE"         # Display name in the interface.
    
    
    overwrite: bpy.props.BoolProperty(
        name = "overwrite",
        description = "overwrite",
        default = False
    )
    
    def execute(self, context):#, overwrite = False):        # execute() is called when running the operator.
        scene = context.scene
        mytool = scene.my_tool
        
        if not os.path.exists(mytool.OVFPB2U_FBXexportPath):
            try:
                os.makedirs(mytool.OVFPB2U_FBXexportPath)
            except Exception:
                bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Failed to export correctly. Check edit-preferences-addons-OVFB bridge file export path to make sure you have write permissions for that folder")
                return {'FINISHED'} 
            
        dir = os.listdir(mytool.OVFPB2U_FBXexportPath) 
        print(dir)
        # Checking if the list is empty or not 
        if len(dir) == 0 or self.overwrite: 
            print("Exporting") 
        else: 
            bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "Overwrite?",export=True)
            print("Not empty directory") 
            return {'FINISHED'}
        
        
        bpy.ops.outliner.orphans_purge()
        
        
        
        OVFPB2U_OT_FixParenting.execute(self,context)
        mytool.OVFPB2U_importpathprotect = False
        updateimportFunction(self,context)
        OVFPB2U_OT_exportFbx.execute(self,context)
        OVFPB2U_OT_SaveTextures.execute(self,context)
        OVFPB2U_OT_writeCSV.execute(self,context)
        bpy.ops.outliner.orphans_purge()
        filepath = mytool.OVFPB2U_FBXexportPath + mytool.OVFPB2U_FBXName + ".blend"
        bpy.ops.wm.save_as_mainfile(filepath=filepath,copy=True)
        
        #except Exception:
         #       OVFPB2U_OT_MessageBox.ShowSimpleMessageBox("Failed to export correctly. Check the preferences-addons-OVFB bridge file export path to make sure you have write permissions for that folder", "OVFP Blender Plugin", 'ERROR')
        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_cursorToSelected(bpy.types.Operator):
    """Center pivot on selection in edit mode. Will average the distance between all selected verts, edges and faces to create the center"""      # Use this as a tooltip for menu items and buttons.
    bl_idname = "object.origintoselected"        # Unique identifier for buttons and menu items to reference.
    bl_label = "Origin to Selected"         # Display name in the interface.
    bl_options = {'REGISTER', 'UNDO'}  # Enable undo for the operator.


    @classmethod
    def poll(cls, context):
        try:
            
            if context.mode == 'EDIT_MESH' and context.active_object.select_get() and context.active_object is not None:
                return True
            else:
                return False
                    
        except Exception:
            return False
        
        
        
    
    def execute(self, context):        # execute() is called when running the operator.

        # The original script
        bpy.ops.view3d.snap_cursor_to_selected()
        
        bpy.ops.object.mode_set(mode='OBJECT')
        #bpy.ops.object.editmode_toggle()
        bpy.ops.object.origin_set(type='ORIGIN_CURSOR', center='MEDIAN')
        


        #end original script


        return {'FINISHED'}            # Lets Blender know the operator finished successfully.

##############################################################################################################################################################################################################

class OVFPB2U_OT_MessageBox(bpy.types.Operator):
    bl_idname = "ovfpb2u.messagebox"
    bl_label = ""
 
    message: bpy.props.StringProperty(
        name = "message",
        description = "message",
        default = ''
    )
    export: bpy.props.BoolProperty(
        name = "export",
        description = "export",
        default = False
    )
    exportAll: bpy.props.BoolProperty(
        name = "exportAll",
        description = "Export All",
        default = False
    )
 
    def execute(self, context):#,export = False):
        self.report({'INFO'}, self.message)
        print(self.message)
        if self.export:
            print('continueExport')
            if self.exportAll:
                bpy.ops.context.b2ubexportall(overwrite = True)
            else:
                bpy.ops.context.b2ubexportselected(overwrite = True)
            #OVFPB2U_OT_exportAll.execute(self,context,)
        return {'FINISHED'}
 
    def invoke(self, context, event):
        return context.window_manager.invoke_props_dialog(self, width = 400)
 
    def draw(self, context):
        layout = self.layout
        wrappedText = textwrap.TextWrapper(width = 200)
        wrappedList = wrappedText.wrap(text=self.message)
        for text in wrappedList:
            row = layout.row(align = True)
            row.alignment = 'EXPAND'
            row.label(text = text)
        
        self.layout.label(text = "")
        
        
    def ShowSimpleMessageBox(message = "", title = "Message Box", icon = 'INFO'):

        def draw(self, context):
            layout = self.layout
            wrappedText = textwrap.TextWrapper(width = 200)
            wrappedList = wrappedText.wrap(text=message)
            for text in wrappedList:
                row = layout.row(align = True)
                row.alignment = 'EXPAND'
                row.label(text  = text)
            #self.layout.label(text=message)
            

        bpy.context.window_manager.invoke_props_dialog(draw, title = title, icon = icon, width = 400)

#bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = "text goes here")
#OVFPB2U_OT_MessageBox.ShowSimpleMessageBox("Text", "Title", 'ERROR')

##############################################################################################################################################################################################################

''' how to create wrapping text
textTowrap = "Your text......................................"      
wrapp = textwrap.TextWrapper(width=50) #50 = maximum length       
wList = wrapp.wrap(text=textTowrap) 

#Now in the panel:
for text in wList: 
    row = layout.row(align = True)
    row.alignment = 'EXPAND'
    row.label(text)
    '''
##############################################################################################################################################################################################################
##############################################################################################################################################################################################################
##############################################################################################################################################################################################################



classes = (
    OVFPB2U_OT_MessageBox,
    OVFPB2U_AddonPreferences,
    OVFPB2U_OT_properties,
    OVFPB2U_OT_QuickCleanGeo,
    OVFPB2U_OT_MergeByEmpty,
    OVFPB2U_OT_createImportPath,
    OVFPB2U_OT_createExportPath,
    OVFPB2U_OT_exportFbx,
    OVFPB2U_OT_SetDefaultUnits,
    OVFPB2U_OT_namingConMeshes,
    OVFPB2U_OT_RemoveDuplicateMaterials,
    OVFPB2U_OT_RenameMaterials,
    OVFPB2U_OT_sendcommandtoUnreal,
    OVFPB2U_OT_cursorToSelected,
    OVFPB2U_OT_applymodifiers,
    OVFPB2U_PT_OverviewPanel,
    OVFPB2U_PT_SetupPanel,
    OVFPB2U_PT_INTEGRITYPANEL, 
    OVFPB2U_PT_CLEANUPPANEL,
    OVFPB2U_PT_NamingConventions,
    OVFPB2U_PT_EXPORTPANEL,
    OVFPB2U_PT_DebugPANEL,
    OVFPB2U_OT_createunrealcommand,
    OVFPB2U_OT_runSetup,
    OVFPB2U_OT_RenameMeshes,
    OVFPB2U_OT_RenameTextures,
    OVFPB2U_OT_GenLightmaps,
    OVFPB2U_OT_selectSimilarObjects,
    OVFPB2U_OT_prepMeshExport,
    OVFPB2U_OT_writeCSV,
    OVFPB2U_OT_SaveTextures,
    OVFPB2U_OT_exportAll,
    OVFPB2U_OT_exportSelected,
    OVFPB2U_OT_RemoveEmpties,
    OVFPB2U_OT_FixParenting,
    OVFPB2U_OT_SelectDegenerateObjects,
    OVFPB2U_OT_Test,
    OVFPB2U_OT_PurgeAll,
    
    

)

def menu_func(self, context):
    menufunctions = (
        OVFPB2U_OT_QuickCleanGeo,
        OVFPB2U_OT_MergeByEmpty,
        OVFPB2U_OT_RenameMeshes,
        OVFPB2U_OT_RenameTextures,
        OVFPB2U_OT_GenLightmaps,
        OVFPB2U_OT_selectSimilarObjects,
        OVFPB2U_OT_PurgeAll,
        OVFPB2U_OT_applymodifiers,
        OVFPB2U_OT_FixParenting,
    )
    
    for cls in menufunctions:
        self.layout.operator(cls.bl_idname)


def register():
    from bpy.utils import register_class
    for cls in classes:
        register_class(cls)
    bpy.types.TOPBAR_MT_app_system.append(menu_func) #TODO change this to an OVFP menu with sub menus for cleanup, etc.
    bpy.types.Scene.my_tool = PointerProperty(type=OVFPB2U_OT_properties)
    
    
    
    

def unregister():
    from bpy.utils import unregister_class
    for cls in reversed(classes):
        unregister_class(cls)
    del bpy.types.Scene.my_tool
    bpy.types.VIEW3D_MT_mesh_add.remove(menu_func)
    
    



# This allows you to run the script directly from Blender's Text editor
# to test the add-on without having to install it.
if __name__ == "__main__":
     
    
    
    register()
    
    
    
    
'''Save Commands
#bpy.ops.wm.save_as_mainfile(filepath=bpy.data.filepath)
    #bpy.ops.wm.save_as_mainfile(filepath , copy = True) #save a copy to the export folder
    #bpy.ops.wm.open_mainfile(filepath=bpy.data.filepath)
    #filepath = bpy.data.filepath
    #directory = os.path.dirname(filepath)
    #newfile_name = os.path.join( directory , "newfile.blend")
    
'''

'''Save Textures to File
import os
import bpy

texs = bpy.data.images


for tex in texs:
    
    
    if tex.name != "Render Result":
        full_path = bpy.path.abspath(tex.filepath, library=tex.library)
        # '/project/assets/shaders/../textures/walls/WALL_1773.png'
        print(full_path)
        
        norm_path = os.path.normpath(full_path)
        # '/project/assets/textures/walls/WALL_1773.png'
        print(norm_path)
        
        
        tex.filepath_raw = "C:/Users/danco/Desktop/uv_map_reference2.jpg"
        
        tex.save()
        
        tex.filepath = "C:/Users/danco/Desktop/uv_map_reference2.jpg"
        tex.name = "uv_map_reference2.jpg"
        
        full_path = bpy.path.abspath(tex.filepath, library=tex.library)
        # '/project/assets/shaders/../textures/walls/WALL_1773.png'
        print(full_path)
        
        norm_path = os.path.normpath(full_path)
        # '/project/assets/textures/walls/WALL_1773.png'
        print(norm_path)
'''