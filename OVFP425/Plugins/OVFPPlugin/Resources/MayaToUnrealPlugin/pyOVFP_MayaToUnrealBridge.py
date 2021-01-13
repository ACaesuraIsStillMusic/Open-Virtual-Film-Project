import sys
import re
import math
import sys
import os
import csv
import ntpath

import textwrap
import maya.api.OpenMaya as om
import maya.cmds as cmds
import maya.mel as mel
import pymel.core as pm
import platform
from datetime import datetime
from shutil import copyfile

from functools import partial

#ue python remote execution
if platform.system()=='Windows':
    import _winreg as winreg
    supportedVersions = ["4.25","4.26"]
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
    print msg
    
    try:
        #bpy.ops.ovfpb2u.messagebox('INVOKE_DEFAULT', message = msg)
        import remote_execution as remote
        print "found remote execution"
        
    except:
        print "Failed to find remote execution in a UE installation. Check your UE install"
else: #working with a mac computer
    print "You are using an unsupported OS, this plugin might not work"
    sys.path.append('/Users/Shared/Epic Games/UE_4.25/Engine/Plugins/Experimental/PythonScriptPlugin/Content/Python')
    import remote_execution as remote



def maya_useNewAPI():
	"""
	The presence of this function tells Maya that the plugin produces, and
	expects to be passed, objects created using the Maya Python API 2.0.
	"""
	pass



class OVFPToolBar:

    def __init__(self):
        self.defaultExportPath = "C:/Users/danco/Desktop/OVFP/" #VAD EDITABLE change this to the directory path your show is using
        #edit this to add/remove categories to the dropdown, then reload the plugin
        self.assetcategories = ["arch/bridge","arch/buildings","arch/ceilings","arch/doors","arch/floors","arch/supports","arch/details","arch/walls","backdrops","cameras","characters/common","characters","dressing/containers","dressing/debris","dressing/fabric","dressing/fence","dressing/furniture","dressing/misc","dressing/papers","dressing/practicals","dressing/ropeChain","dressing/signs","dressing/tools","gaffGrip/applebox","gaffGrip/crane","gaffGrip/cstand","gaffGrip/fabric","gaffGrip/power","gaffGrip/scaffold","gaffGrip/telehandler","gaffGrip/tripod","gaffGrip/truss","greens/flowers","greens/grass","greens/ivy","greens/plants","greens/rocks","greens/trees","lights/moving","lights/practical","lights/spot","lights/wash","misc","props","stages","terrain/cliff","terrain/mountain","terrain/water","vehicles"]
        self.exportfilepath = "C:/Users/danco/Desktop/OVFP/"
        
        self.defaultmaterialparent = "/OVFPPlugin/masterMaterials/surfaces/MM_Swap_Solid"
        self.winID = "OVFP"
        self.dCtrl = ""
        self.widgets = {}
        self.unrealCommand = "print 'communication test'"
        self.textures = []
        self.fbxname = "test"
        self.meshImportPath = ""
        self.matImportPath = ""
        self.texImportPath = ""
        self.importpathprotect = False #prevent an endless loop
        self.forceTextureNames = False #if a texture follows a naming convention, don't forcibly rename it. Mostly for testing
        self.overwriteFlagBox = True #if the overwrite materials flag is set
        
        self.colorTextureNodes = ["color","Base Color"] #node names for each type of texture
        self.metTextureNodes = ["Metallic","TEX Metallic Map"] 
        self.rghTextureNodes = ["Roughness","TEX Roughness Map"]
        self.emiTextureNodes = ["Emissive","TEX Emissive Map"]
        self.aoTextureNodes = ["TEX Ao Map"]
        self.nrmTextureNodes = ["TEX Normal Map"]
        self.opaTextureNodes = ["Transparency"]
        self.subsufcolTextureNodes = ["Subsurface Color"]
        self.subsurfintTextureNodes = ["Subsurface Radius"]
        self.coatTextureNodes = ["Coat"]
        
    
    def updateimportFunction(self, *args):
        if not self.importpathprotect: #protects the update function from an infinite loop
            
            print "updating text fields"
            self.importpathprotect = True
           
            cleantext = cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)
            cleantext = self.fixstring(cleantext)
            cmds.textField(self.widgets["AssetName"], edit = 1, text = cleantext)
            
            cleantext = cmds.textField(self.widgets["ArtistInitials"], editable = True, query = True, text=True)
            cleantext = self.fixstring(cleantext)
            cmds.textField(self.widgets["ArtistInitials"], edit = 1, text = cleantext)
            
            cleantext = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
            cleantext = self.fixstring(cleantext)
            cmds.textField(self.widgets["AssetSource"], edit = 1, text = cleantext)
            
            self.updateSetup()

            self.importpathprotect = False
    
    def UI(self):    
        
        if cmds.window(self.winID, exists = True):
            cmds.deleteUI(self.winID)
        toolbarInstance = OVFPToolBar()
        fullwidth = 200
        
        self.widgets["window"] = cmds.window(self.winID, title="Open Virtual Film Project")
        self.widgets["mainLayout"] = cmds.columnLayout(adjustableColumn = True)
        
        # Dock it on the right of Maya
        self.dCtrl = cmds.dockControl(l="Open Virtual Film Project", a='right', con=self.winID, bgc=[0.2,0.2,0.2], mov=True, ret=False)
        
        self.widgets["Disclaimer"] = cmds.frameLayout( label='Read Me', labelAlign='Center', collapsable = True , collapse = False, w=fullwidth, parent = self.widgets["mainLayout"])
        cmds.scrollField( editable=False, wordWrap=True, text='The OVFP maya to UE bridge tool is a beta software with all the bugs and development that that entails. It requires the Open Virtual Film Project Unreal Plugin. If you encounter a bug with the software, please send me an email at https://www.openvirtualfilmproject.com/about and I will try to fix it as soon as possible. If you have a file that is especially problematic, contact me and when I have time to look at it I will send you a link to upload it.  ' )
        
        #setupPanel
        self.widgets["Setup"] = cmds.frameLayout( label='Setup', labelAlign='Center', collapsable = True , collapse = False, w=fullwidth, parent = self.widgets["mainLayout"])
        cmds.columnLayout( w=fullwidth , adjustableColumn = True)
        cmds.separator (style='none', height=4)
        
        
        cmds.button( l="Set Default Units",command=partial(self.setDefaultUnitsButton))
        cmds.separator (style='none', height=4)
        cmds.text( label='Import Type:', align='left' )
        self.widgets["ImportDropdown"] = cmds.optionMenu(changeCommand= partial(self.updateimportFunction))
        cmds.menuItem( label='Asset' )
        cmds.menuItem( label='Scene' )
        cmds.menuItem( label='Animation')
        cmds.separator (style='none', height=4)
        
        cmds.separator (style='none', height=4)
        
        
        cmds.text( label='Asset Description:', align='left' )
        self.widgets["AssetName"] = cmds.textField(changeCommand= partial(self.updateimportFunction))
        
        cmds.text( label='Import Source:', align='left' )
        self.widgets["AssetSource"] = cmds.textField(changeCommand= partial(self.updateimportFunction))
        
        cmds.separator (style='none', height=4)
        cmds.text( label='Artist Initials:', align='left' )
        self.widgets["ArtistInitials"] = cmds.textField(changeCommand= partial(self.updateimportFunction))
        cmds.separator (style='none', height=4)
        
        cmds.text( label='AssetType:', align='left' )
        self.widgets["AssetTypeDropdown"] = cmds.optionMenu(changeCommand= partial(self.updateimportFunction))#, changeCommand= )
        cmds.menuItem( label='SM' )
        cmds.menuItem( label='SK' )
        cmds.menuItem( label='CAM' )
        cmds.menuItem( label='LGT' )
        #cmds.menuItem( label='Animation' )

        
        cmds.separator (style='none', height=4)
        cmds.text( label='Asset Catergory:', align='left' )
        self.widgets["AssetCategoryDropdown"] = cmds.optionMenu(changeCommand= partial(self.updateimportFunction))#, changeCommand= )
        for i in self.assetcategories:
            cmds.menuItem( label=i)
        
        cmds.separator (style='none', height=4)
        cmds.checkBox( label='Overwrite Materials', align='left', value = True, onCommand = partial(self.enableMatoverwrite), offCommand = partial(self.disableMatoverwrite))
        cmds.separator (style='none', height=4)
        cmds.text( label='RootExportDirectory:', align='left' )
        self.widgets["exportDirectory"] = cmds.textField(changeCommand=partial(self.updateExportDirectory),text = self.exportfilepath)
        
        #model checks panel
        #model checks panel
        self.widgets["ModelChecks"] = cmds.frameLayout( label='Model Integrety Checks (WIP)', labelAlign='Center', collapsable = True ,collapse = True,w=fullwidth, parent = self.widgets["mainLayout"])
               
        
        #cleanup panel
        #cleanup panel
        self.widgets["Cleanup"] = cmds.frameLayout( label='Cleanup (WIP)', labelAlign='Center', collapsable = True ,collapse = True,w=fullwidth, parent = self.widgets["mainLayout"])
        cmds.button( l="Bake All Pivots",command=partial(self.bakePivots), annotation="fixes an issue with the local rotation/scale pivots being different than the object pivot")
        
        #Naming convention panel
        #Naming convention panel
        self.widgets["NamingCon"] = cmds.frameLayout( label='Naming Conventions', labelAlign='Center', collapsable = True ,collapse = True,w=fullwidth, parent = self.widgets["mainLayout"])
        cmds.separator (style='none', height=2)
        cmds.button( l="Make Unique Names",command=partial(self.makeUniqueNames))
        cmds.button( l="Mesh Naming Conventions",command=partial(self.meshNamingConventions))
        cmds.separator (style='none', height=2)
        cmds.button( l="Material Naming Conventions",command=partial(self.matNamingConventions))
        cmds.separator (style='none', height=2)
        cmds.button( l="Texture Naming Conventions",command=partial(self.texNamingConventions))
        cmds.separator (style='none', height=2)
        
        #Export panel
        #Export panel
        self.widgets["Export"] = cmds.frameLayout( label='Export', labelAlign='Center', collapsable = True ,collapse = True,w=fullwidth, parent = self.widgets["mainLayout"])
        
        cmds.button( l="Export All",command=partial(self.exportAll))
        cmds.separator (style='none', height=4)
        cmds.button( l="Send Command To Unreal",command=partial(self.sendToUnreal))
        cmds.separator (style='none', height=4)
        
        #Debug panel
        #Debug panel
        self.widgets["Debug"] = cmds.frameLayout( label='Debug', labelAlign='Center', collapsable = True ,collapse = True,w=fullwidth, parent = self.widgets["mainLayout"])
        cmds.separator (style='none', height=4)
        cmds.button( l="Prep for export",command=partial(self.prepExport))
        
        cmds.button( l="Create CSV files",command=partial(self.writeCSVs))
        cmds.button( l="Update Setup Info",command=partial(self.updateSetup))
        
    def enableMatoverwrite(self,*args):
        self.overwriteFlagBox = True
    
    def disableMatoverwrite(self,*args):
        self.overwriteFlagBox = False
    
    def updateExportDirectory(self, *args):
        print "updateExportDirectory"
        self.defaultExportPath = cmds.textField(self.widgets["exportDirectory"], editable = True, query = True, text=True)
        print self.defaultExportPath
        
    def get_materials_in_scene(self):
        for shading_engine in cmds.ls(type='shadingEngine'):
            if cmds.sets(shading_engine, q=True):
                for material in cmds.ls(cmds.listConnections(shading_engine), materials=True):
                    yield material        
                    
    def setDefaultUnitsButton(self, *args):
        print 'Set Default Units'
        cmds.currentUnit( linear='cm' )
        cmds.currentUnit( linear='centimeter' )
        cmds.upAxis( ax='z', rv=True )
        #Set clipping plane (doesn't seem to work?) TODO
        cmds.viewClipPlane( 'perspShape', ncp='0.1',fcp='1000000'  )
        
        return
    
    def meshNamingConventions(self, *args):
        print 'mesh naming conventions'
        self.makeUniqueNames()
        selection = cmds.ls(selection=True)
        
        # If the selection contains 0 lists
        if len(selection) == 0:
            
            # Then get all objects in the outliner and assign to 'selection'
            # long=True : Gives us the full path to the object, so we can determine any parents.
            # dag=True : We will only get objects which are listed in the outliner, and none of the hidden objects inside of Maya.

            selection = cmds.ls(dag=True, long=True)


        # Sort the list now stored in 'selection'
        # Sort by length
        # In reverse, giving us the longest path first
        selection.sort(key=len, reverse=True)

        # For each object now in the 'selection' variable
        for obj in selection:
            newname = ""
            textFieldData = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
            objectname = textFieldData
            # Split the path by "|" (pipe)
            # Store in a new variable 'shortName'
            shortName = str(obj.split("|")[-1])
            
            # Lets create a new variable to store the relatives
            # We want to list the relatives, we only want the children, and we want the full path
            # If there are no relative, return an empty list (or []), so that we always get a consistent object type output
            children = cmds.listRelatives(obj, children=True, fullPath=True) or []
            print "children:  " + str(children)
            if len(children) > 0:
                objType = cmds.objectType(children[0])
            else:
                objType = cmds.objectType(obj)

            if objType == "mesh":
                if shortName[:3] == "SM_":
                    cleanname = shortName[3:] #strip the SM_ from the string
                    print(cleanname)
                    if len(cleanname.split('_')) > 1:
                        tempobjectname = cleanname.split('_')[0]
                        s = ''
                        cleanname = s.join(cleanname.split('_')[1:])
                        cleanname = self.fixstring(cleanname)
                        tempobjectname = self.fixstring(tempobjectname)
                         
                        newname = "SM_"+tempobjectname+"_"+cleanname
                    else:
                        cleanname = self.fixstring(cleanname)
                        newname = "SM_"+cleanname
                else:
                    cleanname = self.fixstring(shortName)
                    newname = "SM_"+objectname+"_"+cleanname     
                
                cmds.rename(obj, newname)
               
                
                
            #elif objType == "joint":
            #    suffix = "jnt"
            #    print "joint"
            elif objType == "camera": #TODO Naming con cameras
                # If we dont want to rename camera's, then provide this feedback in the output
                print "Skipping camera"
                
                # Tell the for loop to continue on to the next item
                # and not perform any of the other logic in the for loop for this current item
                continue
            
            # If none of the above conditions are met, then perform the else: logic
            else:
                # If none of the above statements are true, then the object is a group
                cleanname = shortName
                cleanname = self.fixstring(cleanname)
                newname = cleanname
                # Lets now rename the object
                cmds.rename(obj, newname + "_#")
                pass

    def matNamingConventions(self, *args):
        print 'material naming conventions'
        scene_materials = self.get_materials_in_scene()

        for m in scene_materials:
            textFieldData = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
            cleanname = str(m)
            tempobjectname = ""
            newname = ""
            if cleanname[:3] == "MI_":
                cleanname = cleanname[3:] #strip the MI_ from the string and remove spaces
                print(cleanname)
                if len(cleanname.split('_')) > 1:
                    tempobjectname = cleanname.split('_')[0]
                    s = ''
                    cleanname = s.join(cleanname.split('_')[1:])
                    cleanname = self.fixstring(cleanname)
                    tempobjectname = self.fixstring(tempobjectname)
                  
                    newname = "MI_"+tempobjectname+"_"+cleanname
                else:
                    cleanname = self.fixstring(cleanname)
                    newname = "MI_"+cleanname
            else:
                cleanname = self.fixstring(cleanname)
                newname = "MI_"+textFieldData+"_"+cleanname      

            #for q in scene_materials:
            #    if str(m).casefold() == str(q).casefold():
            #        if test:
            #            newname = newname + "1"
                    
            if m == "lambert1":
                pass #todo replace with a different material
            else:
                cmds.rename(m, newname)
            print newname
    
    def texNameSingle(self,m,texture,suffix):
        objectname = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
        currentName = str(texture)
        
        if self.forceTextureNames and currentName.startswith("TX_") and not currentName.endswith("_") and (currentName.count("_") == 4 or currentName.count("_") == 3) and currentName == self.fixstring(fixstring =currentName , replaceunderscore = False):
            pass
            print "texture already has a name"
        else:
            cleanname = cmds.getAttr("%s.fileTextureName" % texture)
            cleanname = os.path.basename(cleanname)
            #cleanname =  str(os.path.splitext(cleanname)[0]) #get just the filename
            newname = ""
            
            if cleanname.endswith(('.jpg', '.JPG', '.jpeg', '.JPEG', '.png', '.PNG', '.tga', '.TGA')): #strip suffix if of a known type
                cleanname = cleanname.rsplit('.', 1)[0]
                
            if cleanname[:3] == "TX_": #if the tex starts with TX, make sure it contains no illegal characters and procede
                print(cleanname)
                newname = self.fixstring(cleanname, False)  
            else:
                #find the material using this texture
                cleanname = self.fixstring(cleanname,True)
                print(cleanname)
                materialName = str(m)
                print materialName
                if materialName.startswith("MI_"):
                    namestart = re.sub('MI_', 'TX_', materialName)
                    print "MI"
                    
                else:
                    
                    namestart = "TX_"+objectname+"_"+materialName

                
                newname =  namestart + "_" + cleanname + suffix
        
            cmds.rename(texture,newname)

    def texNamingConventions(self, *args):
        print 'texture naming conventions are WIP'
        
        scene_materials = self.get_materials_in_scene()

        for m in scene_materials:
            if self.getTexture(m,self.colorTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.colorTextureNodes),"_col")
 
            if self.getTexture(m,self.metTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.metTextureNodes),"_met")
                
            if self.getTexture(m,self.rghTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.rghTextureNodes),"_rgh")
                
            if self.getTexture(m,self.emiTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.emiTextureNodes),"_emi")
                
            if self.getTexture(m,self.aoTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.aoTextureNodes),"_ao")
                
            if self.getTexture(m,self.nrmTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.nrmTextureNodes),"_nrm")
                
            if self.getTexture(m,self.opaTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.opaTextureNodes),"_opa")
            
            if self.getTexture(m,self.subsufcolTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.subsufcolTextureNodes),"_subc")
                
            if self.getTexture(m,self.subsurfintTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.subsurfintTextureNodes),"_subi")
                
            if self.getTexture(m,self.coatTextureNodes):
                self.texNameSingle(m,self.getTexture(m,self.coatTextureNodes),"_opa")
                  
    def updateSetup(self, *args):
        rootExportDirectory = cmds.textField(self.widgets["exportDirectory"], editable = True, query = True, text=True)
        #self.widgets["ImportDropdown"] = cmds.optionMenuGrp( label='Import Type',columnAlign2 = ("left","left"))
        importType = cmds.optionMenu(self.widgets["ImportDropdown"], query=True, value=True)
        assetdesc = cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)
        assetSource = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
        assetType = cmds.optionMenu(self.widgets["AssetTypeDropdown"], query=True, value=True)
        assetCategory = cmds.optionMenu(self.widgets["AssetCategoryDropdown"], query=True, value=True)
        artistInitials = cmds.textField(self.widgets["ArtistInitials"], editable = True, query = True, text=True)
        self.fbxname = ""
        self.exportfilepath = ""
        self.meshImportPath = ""
        self.matImportPath = ""
        self.texImportPath = ""
        
        print importType
        if importType == 'Asset':
            self.fbxname = assetType + "_" + assetSource +"_" + assetdesc 
            self.exportfilepath = self.defaultExportPath + "assets/" + assetCategory + "/" + assetType + "_" + assetSource +"_" + assetdesc + "/" + datetime.today().strftime("%Y%m%d")+ "/"
            self.meshImportPath = "/game/assets/" + assetCategory + "/" + assetType + "_" + assetSource +"_" + assetdesc
            self.matImportPath = self.meshImportPath
            self.texImportPath = self.meshImportPath
            
            pass
        if importType == 'Scene':
            self.fbxname = assetType + "_" + assetSource +"_" +assetdesc
            self.exportfilepath = self.defaultExportPath + "environments/"+assetSource + "/incomingGeo/"+datetime.today().strftime("%Y%m%d")+"_"+ assetdesc +"_" + artistInitials+ "/"
            self.meshImportPath = "/game/environments/"+assetSource + "/incomingGeo/"+datetime.today().strftime("%Y%m%d")+"_"+ assetdesc +"_" + artistInitials
            
            self.matImportPath = "/Game/environments/"+assetSource + "/materials"
            self.texImportPath = self.matImportPath
            
            
        if importType =='Animation':
            print "animation mode is not finished"
        
        self.unrealCommand = 'OVFP_DDCToUEBridgeImporter.py -i "'+self.exportfilepath+'" -mp "' + self.meshImportPath + '" -fn "' + self.fbxname+ ".fbx" + '" -tp "' + self.texImportPath + '" -mt "' + self.matImportPath + '"'
        print 'update setup'
        print self.fbxname
        print self.exportfilepath
        print self.unrealCommand
         
    def prepExport(self,*args):
        tempMeshes = {}
        #get all meshes as prep objects
        shapesList = pm.ls(type="mesh") 
        transformList = pm.listRelatives(shapesList,parent=True, path = True) #select all meshes
        
        
       
        outputgroup = cmds.group(empty=True, name="prepGroup")
        for t in shapesList:
            if "|" in t:
                t = t.split('|')[-1]
                print t
            instanceObj = cmds.instance(str(t), name = 'prep'+str(t))
            cmds.parent(instanceObj, outputgroup)
            cmds.matchTransform(instanceObj, outputgroup, position=True, rotation = True, scale = True)
            
        cmds.select( clear=True ) #clear the selection    
        cmds.select(outputgroup)
        return outputgroup
        
    def exportAll(self, *args):
        print 'export all'
        self.makeUniqueNames(self) #fbx won't export properly if there are bad names in the outliner
        self.bakePivots(self)
        if len(cmds.textField(self.widgets["ArtistInitials"], editable = True, query = True, text=True)) > 0 and  len(cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)) > 0 and len(cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)) > 0:
        
            group = self.prepExport(self)
            #make the folder if it doesn't exist
            
            if not os.path.exists(self.exportfilepath):
                os.makedirs(self.exportfilepath)
            print self.exportfilepath + self.fbxname

            try:  #export selected objects
                cmds.file(self.exportfilepath + self.fbxname, options = "v = 0,smoothing = True", type = "FBX export", exportSelected = True)
                
                pass
            except Exception:
                print 'something went wrong with the fbx export. check you have write permission to that folder and try again, export canceled'
                #return
            
            cmds.select(group)
            selection = cmds.ls(sl=True)
            cmds.delete( selection)
            self.writeCSVs()
        else:
            print "missing setup information"
    
    def writeCSVRows(self,rows,csvName):
        #write Csv
        if not os.path.exists(self.exportfilepath):
            os.makedirs(self.exportfilepath)
            
        with open(self.exportfilepath+csvName, mode='w') as csvFile:
            csvWriter = csv.writer(csvFile, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
            for row in rows:
                
                csvWriter.writerow(row)
        
    def writeHierRows(self):
        assetsource = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
        assetname = cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)
        rows = []
        rows.append(["---","Mesh Name","Parent Name","Mesh Path","prt","Materials","rotation","materialSlotNames"])
        
        selection = cmds.ls(dag=True, long=True, transforms = True) #get all transform objects
        #sort objects by path length
        selection.sort(key=len, reverse=False)
        
        for obj in selection:
            objType = cmds.objectType(obj)
            
            
            if objType == "transform": #we only care about transforms when exporting
                #print obj
                meshPath = ""
                children = cmds.listRelatives(obj, children=True, fullPath=True) or []
                if len(children) > 0:
                    childType = cmds.objectType(children[0])
                    if childType == "mesh":
                        meshPath = str(children[0]).split("|")[-1]
                        meshPath = "StaticMesh'" + self.meshImportPath + "/" + meshPath + "." + meshPath + "'"
                        meshPath = str(meshPath)
                        #print "mesh"
                    elif childType == "joint":
                    #    suffix = "jnt"
                        #print "joint"
                        pass
                    elif childType == "camera": #todo transfer camera info later
                        #print "camera"
                        #continue
                        pass
                    else:
                        #print "group"
                        pass
                else:
                    #print "group"
                    pass
                    
                parenting = obj.split('|')
                meshname = str(parenting[-1])
                if len(parenting)>2: 
                    parentname = str(parenting[-2])
                    print "childname: " + meshname
                    parents = cmds.listRelatives(obj, allParents=True, fullPath=True)
                    print "found parenting: " + str(obj)
                    print cmds.getAttr(obj+'.translate')
                    print cmds.getAttr(obj+'.r')
                    print cmds.getAttr(obj+'.scale')
                    
                    

                    
                else: #this is a root object
                    parentname = ""
                
                locx = str(cmds.getAttr(obj + '.translateX'))
                locy = str(-cmds.getAttr(obj + '.translateY'))
                locz = str(cmds.getAttr(obj + '.translateZ'))
                
                
                
                par = cmds.listRelatives( obj, p=True )
                
                if par:
                    rotx = str(cmds.getAttr(obj + '.rx')) #+90
                    roty = str(-cmds.getAttr(obj + '.ry')) #-
                    rotz =str(-cmds.getAttr(obj + '.rz')) #-
                    scalex = str((cmds.xform(obj,q=1,ws=1,s=1)[0])/(cmds.xform(par,q=1,ws=1,s=1)[0]))
                    scaley = str((cmds.xform(obj,q=1,ws=1,s=1)[1])/(cmds.xform(par,q=1,ws=1,s=1)[1]))
                    scalez = str((cmds.xform(obj,q=1,ws=1,s=1)[2])/(cmds.xform(par,q=1,ws=1,s=1)[2]))
                    
                else:
                    rotx = str(cmds.getAttr(obj + '.rx')) #+90
                    roty = str(-cmds.getAttr(obj + '.ry')) #-
                    rotz =str(-cmds.getAttr(obj + '.rz')) #-
                    scalex = str(cmds.getAttr(obj + '.scaleX'))
                    scaley = str(cmds.getAttr(obj + '.scaleY'))
                    scalez = str(cmds.getAttr(obj + '.scaleZ'))
                
                
                #selected = cmds.ls(sl=1,sn=True)
                #par = cmds.listRelatives( selected, p=True )
                #print selected
                #print par
                #print 'location: ' + str(cmds.xform(selected,q=1,ws=1,rp=1))
                #print 'rotation: ' + str(cmds.xform(selected,q=1,ws=1,ro=1))
                #relativeScale = [(cmds.xform(selected,q=1,ws=1,s=1)[0])/(cmds.xform(par,q=1,ws=1,s=1)[0]),(cmds.xform(selected,q=1,ws=1,s=1)[1])/(cmds.xform(par,q=1,ws=1,s=1)[1]),(cmds.xform(selected,q=1,ws=1,s=1)[2])/(cmds.xform(par,q=1,ws=1,s=1)[2])]
                #print "relative scale: " + str(relativeScale)
                
                
                
                prt = "(Rotation=(X= 0.0,Y=0.0,Z=0.0,W=0),Translation=(X="+locx+",Y="+locy+",Z="+locz+"),Scale3D=(X="+scalex+",Y="+scaley+",Z="+scalez+"))"
                rot = "(Pitch=" + roty + ",Yaw="+rotz+",Roll="+rotx+")"
                
                attrs = []
                shape = cmds.listRelatives ( obj, shapes=True )
                shadingEngine = cmds.listConnections (shape, source=False, destination=True)
                material = cmds.listConnections (shadingEngine, source=True, destination=False)
                attrs = shadingEngine
                mats = []
                try:
                    if attrs:
                        for a in attrs:
                            attr = a+'.surfaceShader'
                            plug = cmds.connectionInfo( attr, sourceFromDestination=True)
                            plug = str(plug)
                            plug = plug.split('.',1)[0]
                            if plug not in mats:
                                mats.append(plug)
                        print mats
                except:
                    pass
                
                firstmat = True
                materialstring = "("
                materialSlotString = "("
                materialFolderPath = "" # NEEDS TO REFLECT THE IMPORT FOLDER
                
                for m in mats:
                    if firstmat == False:
                        materialstring = materialstring + ','
                        materialSlotString = materialSlotString + ','

                        
                        
                    materialstring = materialstring+"MaterialInstanceConstant'" + '"'+ materialFolderPath + m + "." + m + "\"'"
                    materialSlotString = materialSlotString+m
                    firstmat = False
                
                materialstring = materialstring + ")"
                materialSlotString = materialSlotString + ")"
                
                
                
                row = [meshname,meshname,parentname,meshPath,prt,materialstring,rot,materialSlotString]
                #print row
                rows.append(row)
        
        csvName = "ASH_" + assetsource +"_" + assetname + ".csv"
        self.writeCSVRows(rows = rows,csvName = csvName)
    
    def writeMatRows(self):
        
        
        scene_materials = self.get_materials_in_scene()
        rows = []
        rows.append(["---","materialName","parent","overwrite material if found?","T_baseColor", "V_BaseColor Tint" , "T_Subsurface Color Map" , "V_Subsurface Tint",
        "T_Clear Coat Normal","T_Clear Coat Roughness","S_Clear Coat Roughness Amount","T_Emissive","V_Emissive Tint","T_Metallic","S_Metallic Brightness",
        "T_Normal","T_Opacity Map","S_Opacity","T_Roughness","S_Roughness Amount","S_Specular Constant","T_Anisotropic"])
        self.textures = []
        
        if self.overwriteFlagBox:
            overwriteflag = "y"
        else:
            overwriteflag = "n"
        for m in scene_materials:
            #print m
            colorTexture = self.getTextureName(m,self.colorTextureNodes)
            metTexture = self.getTextureName(m,self.metTextureNodes) 
            rghTexture = self.getTextureName(m,self.rghTextureNodes)
            emiTexture = self.getTextureName(m,self.emiTextureNodes)
            aoTexture = self.getTextureName(m,self.aoTextureNodes)
            nrmTexture = self.getTextureName(m,self.nrmTextureNodes)
            opaTexture = self.getTextureName(m,self.opaTextureNodes)
            subcTexture = self.getTextureName(m,self.subsufcolTextureNodes)
            subiTexture = self.getTextureName(m,self.subsurfintTextureNodes)
            

            
            rows.append([m,m,self.defaultmaterialparent,overwriteflag,colorTexture, "V_BaseColor Tint" , subcTexture , "V_Subsurface Tint",
        "T_Clear Coat Normal","T_Clear Coat Roughness","S_Clear Coat Roughness Amount",emiTexture,"V_Emissive Tint",metTexture,"S_Metallic Brightness",
        nrmTexture,"T_Opacity Map","S_Opacity",rghTexture,"S_Roughness Amount","S_Specular Constant","T_Anisotropic"]) #TODO all the remaining assignments
            
        assetsource = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
        assetname = cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)
        csvName = "ASM_" + assetsource +"_" + assetname + ".csv"
        self.writeCSVRows(rows = rows,csvName = csvName)

    def getTextureName(self,m,types):
        texture = ""
        for ty in types:
            if texture =="":
                try:
                    fileNode = cmds.listConnections('%s.%s' % (m,ty), type='file')
                    texture = cmds.getAttr("%s.fileTextureName" % fileNode[0])
                    texture = os.path.basename(texture) #filename with extension
                    
                    texture =  str(os.path.splitext(texture)[0]) #get just the filename
                except:
                    pass
            
            
        return texture
    
    def getTexture(self,m,types):
        texture = ""
        for ty in types:
            if texture =="":
                try:
                    texture = cmds.listConnections('%s.%s' % (m,ty), type='file')[0]
                except:
                    pass
            
            
        return texture

    
    def writeTexRows(self):
        
        assetsource = cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)
        assetname = cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)
        textures = cmds.ls( textures=True )
        
        rows = []
        rows.append(["---","TexturePath","TextureType","Search Directory (path to texture for true)","overwrite existing?"]) #TODO going to have to expand this eventually. Maybe a dictionary?
        
        for t in textures:
            try:
                #print t
                texturepath = cmds.getAttr("%s.fileTextureName" % t)
                filename = os.path.basename(texturepath)
                
                if len(os.path.splitext(filename))>1:
                    extension = str(os.path.splitext(filename)[-1])
                else:
                    extension = ""
                
                filename = str(t) + extension
                
                finalpath = self.exportfilepath + "textures/"

                if not os.path.exists(finalpath):
                    os.makedirs(finalpath)
                
                
                finalpath = os.path.join(finalpath, filename)
                print finalpath
                try:
                    copyfile(texturepath, finalpath)
                except:
                    pass
                cmds.setAttr("%s.fileTextureName" % t, finalpath, type="string")
                rows.append([ "name" , finalpath,"","",""])
            except Exception as e:
                print e
                #print("no filepath for" + str(t))
            
        csvName = "AST_" + assetsource +"_" + assetname + ".csv"
        self.writeCSVRows(rows = rows,csvName = csvName)
    
    def writeCSVs(self,*args):
        
        self.writeTexRows()
        self.writeMatRows()
        self.writeHierRows()
        
    def makeUniqueNames(self,*args):
        objs = [x for x in cmds.ls(shortNames=True) if '|' in x]
        objs.sort(key=lambda x : x.count('|'))
        objs.reverse()
        shortnames = [x for x in cmds.ls(shortNames=True)]
        for i in range(len(shortnames)):
            if "|" in shortnames[i]:
                shortnames[i] = shortnames[i].rsplit('|', 1)[1]
            shortnames[i] = shortnames[i].lower()
        for i in range(len(objs)):
            shortname = objs[i]
            if "|" in shortname:
                shortname = shortname.rsplit('|', 1)[1]
            if shortname.lower() in shortnames:
    
                while shortname.lower() in shortnames:
                    x= shortname[::-1]
                    x= re.split(r'\D+',x)[0]
                    olen = len(x)
                    if len(x) == 0:
                        x = "0"
                        olen = 1
                    x = str(int(x[::-1])+1)
                    #print(shortname[0:len(shortname)-olen])
                    shortname = shortname[0:len(shortname)-olen]+x
                cmds.rename(objs[i], shortname)
                #print(shortname)
                shortnames.append(shortname.lower())    
            else:
                shortnames.append(shortname.lower())

        # proof
        if not len([x for x in cmds.ls(shortNames=True) if '|' in x]):
            print 'found all non-unique names :)'
                
    def sendToUnreal(self,*args):
        
        if len(cmds.textField(self.widgets["ArtistInitials"], editable = True, query = True, text=True)) > 0 and  len(cmds.textField(self.widgets["AssetSource"], editable = True, query = True, text=True)) > 0 and len(cmds.textField(self.widgets["AssetName"], editable = True, query = True, text=True)) > 0:
        
            print "send to unreal"
            remote_exec = remote.RemoteExecution()
            try:
                remote_exec.start()
                remote_exec.open_command_connection(remote_exec.remote_nodes)   #TODO: this will timeout before the import has finished and shows an error. 
                exec_modes = ['EvaluateStatement','ExecuteFile','ExecuteStatement']
                exec_mode = exec_modes[1]
                rec = remote_exec.run_command(self.unrealCommand, exec_mode=exec_mode)
                remote_exec.close_command_connection()
            except Exception:
                print 'may have failed to send to ue'
        
            try:
                remote_exec.close_command_connection()
            except Exception:
                print 'failed to close connection to ue'
                
        else:
            print "missing setup information"
        
    def fixstring(self, fixstring ="" , replaceunderscore = True):        # clean out extra characters from a string
        #fixedstring = re.sub(r'\W+', '', fixstring) #making sure the object name follows all the proper rules
        if replaceunderscore:
            fixstring = re.sub('_', '', fixstring)
        fixedstring = re.sub('[^0-9a-zA-Z-_]', '', fixstring)
        #end original script


        return fixedstring            # Return the new string    
        
    def bakePivots(self,*args):
        print "fixing pivot points"
        # Check 1) must have an object(s) selected
        #objects = cmds.ls(sl=1, transforms=1)
        objects = cmds.ls(dag=True, transforms = True)
        pos = 1
        ori = 1

        if len(objects) == 0:
            cmds.error("m_bakeCustomToolPivot.kNoObjectsSelectedError")
            return None

        # Check 2) must be in the move/rotate/scale tool
        #cmds.setToolTo('Move')
        
        
        currentCtx = cmds.currentCtx()
        
        contextList = ["moveSuperContext", "manipMoveContext", "RotateSuperContext",
                       "manipRotateContext", "scaleSuperContext", "manipScaleContext"]


        if currentCtx not in contextList:
            cmds.setToolTo( 'moveSuperContext' )
            #cmds.error("m_bakeCustomToolPivot.kWrongToolError")
            #return None

        # Check 3) must be in custom orientation mode
        customOri = []
        pivotModeActive = 0
        customModeActive = 0
        if currentCtx == "moveSuperContext" or currentCtx == "manipMoveContext":
            customOri = cmds.manipMoveContext('Move', q=1, orientAxes=1)
            pivotModeActive = cmds.manipMoveContext('Move', q=1, editPivotMode=1)
            customModeActive = cmds.manipMoveContext('Move', q=1, mode=1) / 6
        elif currentCtx == "RotateSuperContext" or currentCtx == "manipRotateContext":
            customOri = cmds.manipRotateContext('Rotate', q=1, orientAxes=1)
            pivotModeActive = cmds.manipRotateContext('Rotate', q=1, editPivotMode=1)
            customModeActive = cmds.manipRotateContext('Rotate', q=1, mode=1) / 3
        elif currentCtx == "scaleSuperContext" or currentCtx == "manipScaleContext":
            customOri = cmds.manipScaleContext('Scale', q=1, orientAxes=1)
            pivotModeActive = cmds.manipScaleContext('Scale', q=1, editPivotMode=1)
            customModeActive = cmds.manipScaleContext('Scale', q=1, mode=1) / 6

        if ori and not pos and not customModeActive:
            cmds.error("m_bakeCustomToolPivot.kWrongAxisOriModeError")
            return None

        # Get custom orientation
        if ori and customModeActive:
            customOri[0] = mel.eval('rad_to_deg({})'.format(customOri[0]))
            customOri[1] = mel.eval('rad_to_deg({})'.format(customOri[1]))
            customOri[2] = mel.eval('rad_to_deg({})'.format(customOri[2]))
            # Set object(s) rotation to the custom one (preserving child transform positions and geometry positions)
            cmds.rotate(customOri[0], customOri[1], customOri[2], objects, a=1, pcp=1, pgp=1, ws=1, fo=1)

        if pos:
            for object in objects:
                # Get pivot in parent space
                # object = 'pSphere4'            
                old = [0, 0, 0]
                m = cmds.xform(object, q=1, m=1)
                p = cmds.xform(object, q=1, os=1, sp=1)
                old[0] = (p[0] * m[0] + p[1] * m[4] + p[2] * m[8] + m[12])
                old[1] = (p[0] * m[1] + p[1] * m[5] + p[2] * m[9] + m[13])
                old[2] = (p[0] * m[2] + p[1] * m[6] + p[2] * m[10] + m[14])

                # Zero out pivots
                cmds.xform(object, zeroTransformPivots=1)

                # Translate object(s) back to previous pivot (preserving child transform positions and geometry positions)
                new = cmds.getAttr(object + ".translate")[0]
                cmds.move((old[0] - new[0]), (old[1] - new[1]), (old[2] - new[2]), object, pcp=1, pgp=1, ls=1, r=1)

        # Exit pivot mode
        if pivotModeActive:
            mel.eval('ctxEditMode;')

        # Set the axis orientation mode back to object
        if ori and customModeActive:
            if currentCtx == "moveSuperContext" or currentCtx == "manipMoveContext":
                cmds.manipMoveContext('Move', e=1, mode=0)
            elif currentCtx == "RotateSuperContext" or currentCtx == "manipRotateContext":
                cmds.manipRotateContext('Rotate', e=True, mode=0)
            elif currentCtx == "scaleSuperContext" or currentCtx == "manipScaleContext":
                cmds.manipScaleContext('Scale', e=1, mode=0)

       
        
        
        
        
        
        
            

def setToolbox():
    ktb = OVFPToolBar()
    ktb.UI()





# This code will be executed once the ovfpClass definition is read.





# Initialize the plug-in
def initializePlugin(plugin):
    
    pluginFn = om.MFnPlugin(plugin)

    setToolbox()
    
    return


# Uninitialize the plug-in
def uninitializePlugin(plugin):
    if cmds.window("OVFP", exists = True): #remove the window if it exists
        cmds.deleteUI("OVFP")
    pass