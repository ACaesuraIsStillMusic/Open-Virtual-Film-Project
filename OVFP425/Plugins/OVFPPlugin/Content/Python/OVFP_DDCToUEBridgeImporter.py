from os import listdir
import os
from os.path import isfile, join
import unreal
import csv
import string
import unicodedata
import argparse

##Command line to run without editor open
## /path/to/UE4Editor-Cmd.exe /path/to/my.uproject -run=pythonscript -script="/path/to/my_script.py"


class USendToUnreal:
    #csv filepaths
    
    '''
    standardMaterials (instances)
    material name, 


    customMaterials (master materials)
    mesh locations


    '''

    ##material parameters variables.
    baseColorParamName = "BaseColor"
    metallicParamName = "Metallic"
    roughnessParamName = "Roughness"
    aoParamName = "AmbientOcclusion"
    ormParamName = "ORM"
    useOrm = False
    normalParamName = "Normal"
    subSurfaceColorParamName = "Subsurface Color Map"
    subSurfaceTransParamName = "Subsurface Intensity Mask"
    alphaTextureParamName = "Opacity Mask"


    baseColorTintParamName = "BaseColor Tint"
    alphaConstParamValName = "Opacity"

    parentMaterialPath = '/OVFPPlugin/masterMaterials/surfaces/MM_Swap_Solid'


    ###directories
    #import from
    rootImportFolder = "C:/Users/danco/Documents/Unreal Projects/UE4-VirtualProductionTools/UE4BlenderPython/TestFiles/"
    materialInstanceCSVPath = rootImportFolder + "MaterialInstanceImport.csv"
    textureCSVPath = rootImportFolder + "TextureImport.csv"
    fbxName = "scene.fbx"
    fbxPath = rootImportFolder + fbxName
    UEsceneName = "fish"
    #Import directory folder structure
    
    '''
    Root
        Master
            latest.fbx
            latest.blend
            latest.csv/py for importing
            thumbnail.img
            turntable.mov?
            Textures
                latest.img
        Versions
            V001
                name_V001.fbx
                name_V001.blend
                ...
            V002
                ...
        WIP
            latest.blend


    add a dropdown to switch between versions with notes and such
    '''


    #import to
    UEMeshDirectory = '/Game/testImport'
    UEMaterialDirectory = '/Game/testImport'
    UETextureDirectory = '/Game/testImport'
    UEMakeNewFolderPerMesh = False
    UEMaterialDirectoryToSearch = '/Game/assets/surfaces' #where to look for a library of materials before creating a new one
    UEMeshDirectoryToSearch = '/Game/assets/meshes' #where to look for standard meshes for referenced objects
    
    

    #MetadataTagsToAddToObject - make as a txt file that appends per version. Version, date, comment
    #current version = "001"                     #add function to increment this number
    #rootImportFolder
    #artist notes

    #Import setup
    AssetTools = unreal.AssetToolsHelpers.get_asset_tools()
    EditorLibrary = unreal.EditorAssetLibrary
    automateImports = True
    
    def queryMaterials(self):
        print("query materials")
        asset_reg = unreal.AssetRegistryHelpers.get_asset_registry()
        
        filter = unreal.ARFilter(class_names=["MaterialInstanceConstant"], recursive_paths=False, include_only_on_disk_assets=True,package_paths=[self.UEMaterialDirectory])
        
        assets = asset_reg.get_assets(filter)
        
        ret = "query materials: "+ str(assets)
        print(ret)
        return ret
        
    
    def queryEnvironments(self):
        print("query environment")
        path = unreal.Paths.project_content_dir()
        ret = unreal.Paths.convert_relative_path_to_full(path) 
        print(ret)
        return ret
    
    def runBlutility(self, path = ""):#TODO: Cast test to make sure it can execute & see if autorun = true
        if self.EditorLibrary.does_asset_exist(path):
            blutility = self.EditorLibrary.load_asset(path)#.get_default_object()
            utilitySubsytem = unreal.EditorUtilitySubsystem()
            utilitySubsytem.try_run(blutility)

    def openEditorWidget(self, path = ""): #TODO: Cast test to make sure it can execute
        if self.EditorLibrary.does_asset_exist(path):
            editorWidget = self.EditorLibrary.load_asset(path)
            utilitySubsytem = unreal.EditorUtilitySubsystem()
            utilitySubsytem.spawn_and_register_tab(editorWidget)
        
    def getparameters(self): #TODO set configuration from a file - use argument
        pass
    
    def buildFbxImportOptions(self):
        '''TODO set the below values in saved - config - editorperprojectusersettings.ini and figure out how to hotload. Or set them using C++
        [/Script/UnrealEd.FbxSceneImportOptions]
            bCreateContentFolderHierarchy=False
            bImportAsDynamic=False
            HierarchyType=FBXSOCHT_CreateActorComponents
            bForceFrontXAxis=False
            bBakePivotInVertex=False
            bImportStaticMeshLODs=False
            bImportSkeletalMeshLODs=False
            bInvertNormalMaps=False
        '''
        options = unreal.FbxImportUI()
        options.set_editor_property('import_mesh',True)
        options.set_editor_property('import_materials',False) #TODO: Set to false and assign materials per mesh. Does not work with FBX scenes. maybe wipe mats after import?
        options.set_editor_property('import_textures',False) #in this process, materials go into the same folder, and then we restructure them after the fact
        options.set_editor_property('import_as_skeletal',False)
        options.set_editor_property('override_full_name',False)
        options.static_mesh_import_data.set_editor_property('combine_meshes',False)
        options.static_mesh_import_data.set_editor_property('generate_lightmap_u_vs',True) #TODO: use lightmaps from blender if available
        options.static_mesh_import_data.set_editor_property('auto_generate_collision',True)
        options.static_mesh_import_data.set_editor_property('normal_import_method',unreal.FBXNormalImportMethod.FBXNIM_IMPORT_NORMALS_AND_TANGENTS) #FBXNIM_COMPUTE_NORMALS    FBXNIM_IMPORT_NORMALS     FBXNIM_IMPORT_NORMALS_AND_TANGENTS TODO decide if this is the best option
        options.static_mesh_import_data.set_editor_property('reorder_material_to_fbx_order',True) 
        options.static_mesh_import_data.set_editor_property('convert_scene',False)
        options.static_mesh_import_data.set_editor_property('convert_scene_unit',True)
        options.static_mesh_import_data.set_editor_property('transform_vertex_to_absolute',True)
        options.static_mesh_import_data.set_editor_property('bake_pivot_in_vertex',True)
        #options.static_mesh_import_data.set_editor_property('convert_scene',True)
        #options.static_mesh_import_data.set_editor_property('force_front_x_axis ',False)
        
        
        
        '''
        auto_generate_collision (bool): [Read-Write] If checked, collision will automatically be generated (ignored if custom collision is imported or used).
        bake_pivot_in_vertex (bool): [Read-Write] - Experimental - If this option is true the inverse node rotation pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. Note: “TransformVertexToAbsolute” must be false.
        build_adjacency_buffer (bool): [Read-Write] Required for PNT tessellation but can be slow. Recommend disabling for larger meshes.
        build_reversed_index_buffer (bool): [Read-Write] Build Reversed Index Buffer
        /combine_meshes (bool): [Read-Write] If enabled, combines all meshes into a single mesh
        compute_weighted_normals (bool): [Read-Write] Enabling this option will use weighted normals algorithm (area and angle) when computing normals or tangents
        /convert_scene (bool): [Read-Write] Convert the scene from FBX coordinate system to UE4 coordinate system
        /convert_scene_unit (bool): [Read-Write] Convert the scene from FBX unit to UE4 unit (centimeter).
        /force_front_x_axis (bool): [Read-Write] Convert the scene from FBX coordinate system to UE4 coordinate system with front X axis instead of -Y
        generate_lightmap_u_vs (bool): [Read-Write] Generate Lightmap UVs
        import_mesh_lo_ds (bool): [Read-Write] If enabled, creates LOD models for Unreal meshes from LODs in the import file; If not enabled, only the base mesh from the LOD group is imported
        import_rotation (Rotator): [Read-Write] Import Rotation
        import_translation (Vector): [Read-Write] Import Translation
        import_uniform_scale (float): [Read-Write] Import Uniform Scale
        normal_generation_method (FBXNormalGenerationMethod): [Read-Write] Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh
        normal_import_method (FBXNormalImportMethod): [Read-Write] Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically.
        one_convex_hull_per_ucx (bool): [Read-Write] If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls
        remove_degenerates (bool): [Read-Write] Disabling this option will keep degenerate triangles found. In general you should leave this option on.
        reorder_material_to_fbx_order (bool): [Read-Write] If checked, The material list will be reorder to the same order has the FBX file.
        source_data (AssetImportInfo): [Read-Only] Source file data describing the files that were used to import this asset.
        static_mesh_lod_group (Name): [Read-Write] The LODGroup to associate with this mesh when it is imported
        transform_vertex_to_absolute (bool): [Read-Write] If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices.
        vertex_color_import_option (VertexColorImportOption): [Read-Write] Specify how vertex colors should be imported
        vertex_override_color (Color): [Read-Write] Specify override color in the case that VertexColorImportOption is set to Override
'''
        
        
        return options
    
    def legalizeName(self,text):
        #valid_chars = "-_ %s%s" % (string.ascii_letters, string.digits)
        #text = unicodedata.normalize('NFKD', text).encode('ASCII', 'ignore')
        #return ''.join(c for c in text if c in valid_chars)
        return text
    
    def createMaterialInstance(self , NewMatName = "MI_test",parameterNames = [], parameters = []):
        
        EditorLibrary=self.EditorLibrary
        
        if parameters[3] == "y" or parameters[3] == "True" or parameters[3] == "yes":
            writeParameters = True
            
        else:
            writeParameters = False
        
        if unreal.EditorAssetLibrary.does_asset_exist(self.UEMaterialDirectory + '/' + self.legalizeName(NewMatName)):
            #unreal.log_warning("material already exists, skipping") #TODO if the overwrite command is set, set parameters for that material anyway.
            NewMaterial = unreal.EditorAssetLibrary.load_asset(self.UEMaterialDirectory + '/' + self.legalizeName(NewMatName))
        else:
            writeParameters = True
            NewMaterial = self.AssetTools.create_asset(asset_name=self.legalizeName(NewMatName),package_path=self.UEMaterialDirectory,asset_class = unreal.MaterialInstanceConstant, factory=unreal.MaterialInstanceConstantFactoryNew())
            #EditorLibrary.save_asset(NewMaterial.get_path_name(),True) #TODO Fix error?
        
        
        if writeParameters ==True:
            index = 0
            for parameterName in parameterNames:
                try:
                    if index == 2:
                        
                        unreal.log("foundParent")
                        parentPath = parameters[index]
                        if not parentPath.startswith("/"):
                            parentPath = "/"+parentPath
                        if EditorLibrary.does_asset_exist(parentPath):
                            unreal.log("parent confirmed")
                            parentMaterial = EditorLibrary.load_asset(parentPath)
                            unreal.MaterialEditingLibrary.set_material_instance_parent(NewMaterial,parentMaterial)
                        else:
                            unreal.log_error("No parent material found for:" + NewMaterial.get_path_name())
                            break
                            
                    
                    elif parameterName.startswith('T_') and parameters[index]:
                        if parameters[index].startswith('/Game/'):
                            texPath = parameters[index]
                        else:
                            texPath = UEImporter.UEMaterialDirectory + "/"+parameters[index]
                        
                        if EditorLibrary.does_asset_exist(texPath):
                            unreal.MaterialEditingLibrary.set_material_instance_texture_parameter_value(NewMaterial,parameterName[2:],EditorLibrary.load_asset(texPath))
                        else:
                            unreal.log_warning("Texture not found for ")# + NewMaterial.get_path_name() + ": " + parameters[index]) #TODO FIX ERROR ?
                        
                        
                    elif parameterName.startswith('S_') and parameters[index]:
                        #unreal.log("foundScalar")
                        unreal.MaterialEditingLibrary.set_material_instance_scalar_parameter_value(NewMaterial,parameterName[2:],float(parameters[index]))
                        
                        
                        
                    elif parameterName.startswith('V_') and parameters[index]:
                        unreal.log("foundVector3")
                        colorfour = parameters[index]
                        if colorfour.startswith("["):
                            colorfour = colorfour [1:-1]
                        colorfour = colorfour.split(",") 
                        color = unreal.LinearColor(r=float(colorfour[0]), g=float(colorfour[1]), b=float(colorfour[2]), a=1)
                        unreal.MaterialEditingLibrary.set_material_instance_vector_parameter_value(NewMaterial,parameterName[2:],color)
                        
                    ''' doesn't work
                    elif parameterName.startswith('B_') and parameters[index]:
                        unreal.log("foundBool")
                        unreal.MaterialEditingLibrary.set_material_instance_boolean_parameter_value(NewMaterial,parameterName[2:],False)
                        #if parameters[index] == "True" or parameters[index] == "TRUE" or parameters[index] == "yes" or parameters[index] == "yes" or parameters[index] == "true" or parameters[index] == "y":
                        #    unreal.MaterialEditingLibrary.set_material_instance_boolean_parameter_value(NewMaterial,parameterName[2:],True)
                        #elif parameters[index] == "False" or parameters[index] == "FALSE" or parameters[index] == "false" or parameters[index] == "FALSE" or parameters[index] == "no" or parameters[index] == "n":
                        #    unreal.MaterialEditingLibrary.set_material_instance_boolean_parameter_value(NewMaterial,parameterName[2:],False)
                    '''
                    
                except Exception:
                    unreal.log("no index")
                    
                unreal.log_warning(index)    
                    
                
                index += 1
               
                
        
        return
        
    def createTexture(self , filepath = '', importLocation = '' , overwrite = "" , textureName = "test"):
        import_tasks = []
        
        if overwrite == "y" or overwrite == "True" or overwrite == "yes" or overwrite == "Y" or overwrite == "TRUE" or overwrite == "true":
            replace = True
            
        else:
            replace = False
        if "." in textureName:
            textureName = textureName.split(".")[0]
        textureName = self.legalizeName(textureName)
        
        
        
        if unreal.EditorAssetLibrary.does_asset_exist(importLocation + '/' +  textureName):# or not replace:
            unreal.log_warning("texture " + textureName + " already exists, skipping")
        else:
            if not os.path.exists(filepath):
                if os.path.exists(os.path.join(UEImporter.rootImportFolder,filepath)):
                    filepath = os.path.join(UEImporter.rootImportFolder,filepath)
                else:
                    filepath = os.path.join(UEImporter.rootImportFolder,"textures",filepath)

        #unreal.log_error(filepath)    
        if os.path.exists(filepath):
            AssetImportTask = unreal.AssetImportTask()
            AssetImportTask.set_editor_property('filename', filepath)
            AssetImportTask.set_editor_property('destination_path', importLocation)
            AssetImportTask.set_editor_property('replace_existing',True)
            AssetImportTask.set_editor_property('save', True)
            import_tasks.append(AssetImportTask)
            self.AssetTools.import_asset_tasks(import_tasks) #import all textures
        
    def readTextureCSV(self):
        #TODO: search for texture in directory and link to that if it exists (swap in materials csv?)
        #TODO: figure out how to mark a texture as used in the surfaces directory in blender. Can do in UE4
        try:
            with open(self.textureCSVPath, mode='r') as csv_file:
                csv_reader = csv.reader(csv_file, delimiter=',')
                line_count = 0
                parameterNames = []
                for row in csv_reader:
                    if line_count == 0:
                        unreal.log("Parameters To Import: " + " | ".join(row))
                        parameterNames = row
                        line_count += 1
                    else:
                        #Add texture to import list
                        self.createTexture(filepath = row[1], importLocation = self.UETextureDirectory, overwrite = row[4], textureName = row[0])
                        line_count += 1

                unreal.log('Processed ' + str(line_count-1) + ' textures')
                unreal.EditorAssetLibrary.save_directory(self.UETextureDirectory)
        except Exception:
            unreal.log_warning("Issue reading texture csv file")
           
    def readMaterialInstanceCSV(self):
        try:
            with open(self.materialInstanceCSVPath, mode='r') as csv_file:
                csv_reader = csv.reader(csv_file, delimiter=',')
                line_count = 0
                parameterNames = []
                for row in csv_reader:
                    if line_count == 0:
                        unreal.log("Parameters To Import: " + " | ".join(row))
                        parameterNames = row
                        line_count += 1
                    else:
                        self.createMaterialInstance(NewMatName = row[1],parameterNames = parameterNames, parameters = row)
                        #unreal.log("row:" + str(line_count) + " :".join(row))
                        line_count += 1
                unreal.log('Processed ' + str(line_count-1) + ' materials')
            #TODO: search for textures before import
            unreal.EditorAssetLibrary.save_directory(self.UEMaterialDirectory)
        except Exception:
            unreal.log_warning("Issue reading material csv file")
        
    def importfbxstack(self):
        
        #FBX scene
        '''
        data = unreal.AutomatedAssetImportData()
        data.set_editor_property('destination_path', self.UEMeshDirectory)
        data.set_editor_property('filenames', [self.fbxPath])
        #data.set_editor_property('level_to_load', '/Game/MyNewLevel')
        data.set_editor_property('replace_existing', True)
        factory = unreal.FbxSceneImportFactory()
        data.set_editor_property('factory', factory)
        unreal.AssetToolsHelpers.get_asset_tools().import_assets_automated(data)
        '''
        ###delete all static meshes in directory
        unreal.EditorAssetLibrary.save_directory(self.UEMeshDirectory) #save directory we imported into
        unreal.EditorAssetLibrary.does_directory_have_assets(self.UEMeshDirectory, recursive=True)
        registry = unreal.AssetRegistryHelpers.get_asset_registry()
        assetsinfolder = registry.get_assets_by_path(self.UEMeshDirectory,False,False)
        #assetsinfolder = unreal.EditorAssetLibrary.list_assets(self.UEMeshDirectory, recursive=False, include_folder=False)
        #staticMeshes = unreal.EditorFilterLibrary.by_class( assetsinfolder , unreal.StaticMeshActor)
        for deletedmesh in assetsinfolder:
            #unreal.log_warning(deletedmesh.asset_class)
            if str(deletedmesh.asset_class) == 'StaticMesh' or str(deletedmesh.asset_class) == 'DataTable':
            #unreal.log_warning("delete")
                unreal.EditorAssetLibrary.delete_asset(deletedmesh.package_name)
    
        
        #FBX normal
        #set up the import
        import_tasks = []
        #factory = unreal.FbxSceneImportFactory()
        factory = unreal.FbxFactory()
        fbxPath = self.rootImportFolder + self.fbxName
        factory.script_factory_can_import(fbxPath) ##########use this to test if the file is an FBX
        
        AssetImportTask = unreal.AssetImportTask()
        AssetImportTask.set_editor_property('filename', fbxPath)
        AssetImportTask.set_editor_property('factory', factory)
        AssetImportTask.set_editor_property('destination_path', self.UEMeshDirectory)
        AssetImportTask.set_editor_property('automated', True)#self.automateImports)
        
        AssetImportTask.set_editor_property('options', self.buildFbxImportOptions())
        AssetImportTask.set_editor_property('save', False)
        import_tasks.append(AssetImportTask)


        #do the import
        self.AssetTools.import_asset_tasks(import_tasks)
        
        
        unreal.log_warning("starting Rename")
        #rename the fbxs to the correct format
        #unreal.EditorAssetLibrary.does_directory_have_assets("/Game/", recursive=True)
        
        meshesInFolder = unreal.AssetRegistryHelpers.get_asset_registry().get_assets_by_path(self.UEMeshDirectory, recursive=True, include_only_on_disk_assets=False)
        #static_mesh_objects = [data.get_asset() for data in static_mesh_data]
        
        
        
        #unreal.log_warning(len(meshesInFolder))
        
        for renamedmesh in meshesInFolder:
            #unreal.log_warning("testingasset")
            #unreal.log_warning(str(renamedmesh.asset_name))
            if str(renamedmesh.asset_class) == 'StaticMesh':
                unreal.log_warning(renamedmesh)
                oldMeshName = renamedmesh.object_path #.package_name
                unreal.log_warning(oldMeshName)
                newMeshName = str(renamedmesh.object_path).rpartition(".")[2]
                if newMeshName == self.fbxName[0:-3]:
                    True
                else:
                    unreal.log_warning(newMeshName)
                    newMeshName = newMeshName[len(self.fbxName)-3:]
                    unreal.log_warning(newMeshName)
                    if newMeshName[0:4] == "prep": #remove prep from the start of the name if it exists
                        newMeshName = newMeshName[4:]
                    newMeshName = str(renamedmesh.package_path) + "/" + newMeshName
                    unreal.log_warning("4:"+newMeshName)
                    #newMeshName = self.UEMeshDirectory + str(oldMeshName).rpartition("/")
                
                if True: #start of code to reassign static mesh materials per object in content browser
                
                    assetObject = renamedmesh.get_asset()
                    unreal.log_warning(assetObject)
                    mesh = unreal.StaticMesh.cast(assetObject)
                    
                    for material_index in range(0,mesh.get_num_sections(0)):
                        material_name = mesh.get_material(material_index).get_name()
                        unreal.log_error(material_name)
                        #mesh.set_material(material_index, new_material)
                
                #unreal.log_warning("rename: "+ str(renamedmesh.object_path) + " to " + str(renamedmesh.package_name) + " to " + str(renamedmesh.package_path))#+ str(newMeshName)) #TODO
                unreal.log_warning("rename: "+ str(oldMeshName) + " to " + newMeshName)
                unreal.EditorAssetLibrary.rename_asset(oldMeshName , newMeshName)
                
                

                
           
    
        
        
        #unreal.EditorAssetLibrary.save_directory(self.UEMeshDirectory) #save directory we imported into
        
        #does_directory_have_assets(directory_path, recursive=True) TODO does the tool delete any copies of the meshes already out in the world?
        '''
        actors = unreal.EditorLevelLibrary.get_all_level_actors() 
        for actor in actors: #delete the imported actor
            
            if actor.get_actor_location() == unreal.Vector(x=0.0, y=0.0, z=0.0) and self.fbxName[0:-4] in actor.get_actor_label(): 
                if actor.get_component_by_class(unreal.StaticMeshComponent) != None:
                    mesh = actor.get_component_by_class(unreal.StaticMeshComponent).static_mesh
                    path =  self.UEMeshDirectory in unreal.EditorAssetLibrary.get_path_name_for_loaded_asset(mesh)
                    if path:
                        unreal.EditorLevelLibrary.destroy_actor(actor)
        '''        
        
        
        
        
        #Fbx automated sample code
        '''
        #Fbx automated task
        factory = unreal.FbxFactory()
        factory.set_editor_property('options',self.buildFbxImportOptions())
        assetImportData = unreal.AutomatedAssetImportData()
        #factory.script_factory_can_import(filename) ##########use this to test if the file is an FBX
        assetImportData.set_editor_property('filenames', [self.fbxPath])
        assetImportData.set_editor_property('destination_path', self.UEMeshDirectory)
        
        assetImportData.set_editor_property('factory',factory ) #Pointer to the factory currently being used
        #assetImportData.set_editor_property('factory_name', ) #Name of the factory to use when importing these assets. If not specified the factory type will be auto detected
        assetImportData.set_editor_property('group_name',"BlenderFiles") #Display name of the group. This is for logging purposes only.
        assetImportData.set_editor_property('replace_existing',True)
        assetImportData.set_editor_property('skip_read_only',False) #Whether or not to skip importing over read only assets that could not be checked out
        
        importedFiles = self.AssetTools.import_assets_automated(assetImportData)
        '''
        unreal.EditorAssetLibrary.save_directory(self.UEMeshDirectory) #save directories we imported into
    
    def createBlueprintScene(self):
        # New Asset Name
        try:
            newname = self.fbxName.partition('.')[0]
            if newname[0:3] == "SM_": #todo if there are any other prefixes in the future, test for them
                asset_name = "ASB_"+ newname[3:]
                h_name = "ASH_"+ newname[3:]
            elif newname[0:4] == "CAM_": #todo if there are any other prefixes in the future, test for them
                asset_name = "ASB_"+ newname[4:]
                h_name = "ASH_"+ newname[4:]
            elif newname[0:4] == "LGT_": #todo if there are any other prefixes in the future, test for them
                asset_name = "ASB_"+ newname[4:]
                h_name = "ASH_"+ newname[4:]
            else:
                asset_name = "ASB_"+ newname
                h_name = "ASH_"+ newname
                
            

            # Save Path
            package_path = self.UEMeshDirectory
            unreal.log_warning(package_path)

            # Derive a Class from a string path
            root_class = '/OVFPPlugin/generalResources/blenderToUnrealAdgBridge/B2UAdgBridge_ImportedSceneObject.B2UAdgBridge_ImportedSceneObject'
            root_class_generated = root_class + "_C"
            root_class_loaded = unreal.EditorAssetLibrary.load_asset(root_class)
            # Derive a BlueprintGeneratedClass from a UBlueprint
            # If you have a C++ class, you can replace all this with just ue.CPPCLASSNAMEHERE
            parent_class = unreal.get_default_object(unreal.load_object(None, root_class_generated)).get_class()
            # Factory Setup
            factory = unreal.BlueprintFactory()
            factory.set_editor_property("ParentClass", parent_class)
            # Get Asset Tools
            asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
            #todo test if asset already exists. If so, do not try to create a new one?
            # Create Asset
            childBP = asset_tools.create_asset(asset_name, package_path, root_class_loaded.static_class(), factory)
            #bp_gc = unreal.EditorAssetLibrary.load_blueprint_class(childBP.get_path_name())
            #bp_cdo = unreal.get_default_object(bp_gc)
            bploc = package_path + "/" + asset_name + "." + asset_name + "_C"
            bp_cdo = unreal.get_default_object(unreal.load_object(None, bploc))
            
            unreal.log_warning(h_name)
            bp_cdo.set_editor_property('Hierarchy', unreal.load_object(None, package_path + "/" + h_name + "." + h_name))
            sceneactor = unreal.EditorLevelLibrary.spawn_actor_from_class(bp_cdo.get_class(),unreal.Vector(x=0.0, y=0.0, z=0.0)) #spawn the imported geo out into the world. TODO decide if I want to test to see if there is already a scene out in the world
            unreal.EditorAssetLibrary.save_directory(self.UEMeshDirectory) #save directory we imported into
            unreal.EditorAssetLibrary.sync_browser_to_objects([bploc])
        except Exception:
            unreal.log_warning("Issue creating ASM blueprint")
        
    def importHierarchyCSV(self):
        try:
            newname = self.fbxName.partition('.')[0]
            if newname[0:3] == "SM_": #todo if there are any other prefixes in the future, test for them
                newname = "ASH_"+ newname[3:]
            elif newname[0:4] == "CAM_": #todo if there are any other prefixes in the future, test for them
                newname = "ASH_"+ newname[4:]
            elif newname[0:4] == "LGT_": #todo if there are any other prefixes in the future, test for them
                newname = "ASH_"+ newname[4:]
            
            else:
                newname = "ASH_"+ newname
            asset_name = newname

            import_tasks = []
            
            factory = unreal.CSVImportFactory()
            csvPath = self.rootImportFolder + asset_name + '.csv' #todo at some point fix the hierarchy name so it is unique per import
            factory.script_factory_can_import(csvPath) #
            
            AssetImportTask = unreal.AssetImportTask()
            AssetImportTask.set_editor_property('filename', csvPath)
            AssetImportTask.set_editor_property('factory', factory)
            AssetImportTask.set_editor_property('destination_path', self.UEMeshDirectory)
            AssetImportTask.set_editor_property('automated', True)#self.automateImports)
            importSettings = unreal.CSVImportSettings()
            #importSettings.set_editor_property('import_row_struct',True)
            path_to_asset = '/OVFPPlugin/generalResources/blenderToUnrealAdgBridge/B2UADGBrige_MeshHierarcyCSV'#.B2UADGBrige_MeshHierarcyCSV'
            asset_reg = unreal.AssetRegistryHelpers.get_asset_registry()
            #CSVstruct = asset_reg.get_asset_by_object_path(path_to_asset)
            CSVstruct = unreal.load_asset(path_to_asset)
            #unreal.log_warning(str(CSVstruct))
            factory.automated_import_settings.import_row_struct = CSVstruct
            
            #AssetImportTask.set_editor_property('save', False)
            import_tasks.append(AssetImportTask)


            #do the import
            self.AssetTools.import_asset_tasks(import_tasks)
            
            unreal.EditorAssetLibrary.save_directory(self.UEMeshDirectory) #save directory we imported into
        except Exception:
            unreal.log("Issue with hierarcy file")
                
# Initialize parser 
parser = argparse.ArgumentParser() 
  
# Adding optional argument 
parser.add_argument("-i", "--hardDiskPath", help = "Root of path to files for import")  #"C:/Users/danco/Documents/Unreal Projects/UE4-VirtualProductionTools/UE4BlenderPython/TestFiles/"
parser.add_argument("-mp", "--UnrealMeshPath", help = "Unreal folder to import mesh into") #'/Game/testImport'
parser.add_argument("-fn", "--FBXName", help = "Name of fbx to import name.fbx") #"scene.fbx"
parser.add_argument("-tp", "--UnrealTexturePath",help = "Unreal Folder to import textures into")
parser.add_argument("-mt", "--UnrealMatPath",help = "Unreal Folder to import materials into")
parser.add_argument("-q", "--query", help = "query unreal for info on the current project")
parser.add_argument("-s", "--simple", help = "if this argument is set, the import will not include an ash or asb file in the folder")
# Read arguments from command line 
args = parser.parse_args() 
UEImporter = USendToUnreal()

if args.UnrealMatPath:
    if args.UnrealMatPath.endswith("/"):
        args.UnrealMatPath = args.UnrealMatPath[0:len(args.UnrealMatPath)-1]
        
if args.UnrealMeshPath and args.hardDiskPath and args.FBXName:
    #test with 
#BlenderToUnrealADGBridge_Import.py -i "C:/Users/danco/Documents/Unreal Projects/UE4-VirtualProductionTools/UE4BlenderPython/TestFiles/" -mp "/Game/testImport" -fn "scene.fbx"

    
    unreal.log_warning("Importing FBX from: % s" % args.hardDiskPath)
    unreal.log_warning("to: % s" % args.UnrealMeshPath)
    UEImporter.rootImportFolder = args.hardDiskPath
    UEImporter.UEMeshDirectory = args.UnrealMeshPath
    UEImporter.fbxName = args.FBXName
    UEImporter.UEMaterialDirectory = args.UnrealMatPath
    UEImporter.UETextureDirectory = args.UnrealTexturePath
    
    newname = UEImporter.fbxName.partition('.')[0]
    if newname[0:3] == "SM_": #todo if there are any other prefixes in the future, test for them
        UEImporter.materialInstanceCSVPath = UEImporter.rootImportFolder + "ASM_"+ newname[3:] + ".csv"
        UEImporter.textureCSVPath = UEImporter.rootImportFolder +"AST_"+ newname[3:] + ".csv"
    elif newname[0:4] == "CAM_": #todo if there are any other prefixes in the future, test for them
        UEImporter.materialInstanceCSVPath = UEImporter.rootImportFolder + "ASM_"+ newname[4:] + ".csv"
        UEImporter.textureCSVPath = UEImporter.rootImportFolder +"AST_"+ newname[4:] + ".csv"
    elif newname[0:4] == "LGT_": #todo if there are any other prefixes in the future, test for them
        UEImporter.materialInstanceCSVPath = UEImporter.rootImportFolder + "ASM_"+ newname[4:] + ".csv"
        UEImporter.textureCSVPath = UEImporter.rootImportFolder +"AST_"+ newname[4:] + ".csv"
    else:
        UEImporter.materialInstanceCSVPath = UEImporter.rootImportFolder + "ASM_" +  newname +".csv"
        UEImporter.textureCSVPath = UEImporter.rootImportFolder +"AST_"+ newname +".csv"




    
    
    
    UEImporter.readTextureCSV()
    UEImporter.readMaterialInstanceCSV()
    
    UEImporter.importfbxstack()
    
    if not args.simple:
        UEImporter.importHierarchyCSV()
        UEImporter.createBlueprintScene()
    
elif args.query:
    if args.query == "m" and args.UnrealMatPath:
        UEImporter.UEMaterialDirectory = args.UnrealMatPath
        UEImporter.queryMaterials()
    if args.query == "env":
        UEImporter.queryEnvironments()
    
else:

    unreal.log_warning("not enough or incorrect arguments")  
    

#fish.runBlutility('/Game/NewEditorUtilityBlueprint')
#fish.openEditorWidget('/Game/testBlutility')
#fish.runBlutility('/Game/testBlutility')

#import csv file
'''
from unreal_engine.classes import AssetImportTask
from unreal_engine.classes import CSVImportFactory

fpath = fpath = 'C:\\Users\\me\\Desktop\\data_export\\myData.csv'
dpath = '/Game/Data/CSV'

# Create the AssetImportTask object
ait = AssetImportTask()
ait.Filename = fpath
ait.DestinationPath = dpath
ait.bAutomated = True
ait.bSave = True

# Create the factory
csv_factory = CSVImportFactory()
csv_factory.AutomatedImportSettings.ImportRowStruct = MyCustomDataTableStruct
csv_factory.AssetImportTask = ait

# Actually import the table
# You probably don't need to specify the paths twice as I'm doing here.
csv_factory.factory_import_object(fpath, dpath)
'''


#tests to do before this mess all happens:
'''
is the folder empty?

'''


#write Csv
'''
import csv

with open('employee_file.csv', mode='w') as employee_file:
    employee_writer = csv.writer(employee_file, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)

    employee_writer.writerow(['John Smith', 'Accounting', 'November'])
    employee_writer.writerow(['Erica Meyers', 'IT', 'March'])
    
'''


#make a material sample code
'''
NewMatName = "MI_test"

NewMaterial = AssetTools.create_asset(asset_name=NewMatName,package_path='/Game/assets/materials',asset_class = unreal.MaterialInstanceConstant, factory=unreal.MaterialInstanceConstantFactoryNew())
EditorLibrary.save_asset(NewMaterial.get_path_name(),True)
parentMaterial = EditorLibrary.load_asset(parentMaterialPath)
unreal.MaterialEditingLibrary.set_material_instance_parent(NewMaterial,parentMaterial)
#SetTextureParameterValueEditorOnly(FMaterialParameterInfo("Diffuse"), GetTextureByName(Textures[animaMat->mDiffuseIndex].mName, ConnectionSlot:iffuseSlot));
'''



#ue4 functions
'''
set_material_instance_scalar_parameter_value(instance, parameter_name, value) 
set_material_instance_texture_parameter_value(instance, parameter_name, value)
set_material_instance_vector_parameter_value(instance, parameter_name, value)
update_material_instance(instance)



unreal.EditorAssetLibrary.checkout_asset(asset_to_checkout)
.does_asset_exist(asset_path)
.duplicate_asset(source_asset_path, destination_asset_path)
.duplicate_loaded_asset(source_asset, destination_asset_path)
.get_path_name_for_loaded_asset(loaded_asset)
.set_metadata_tag(object, tag, value)
.checkout_asset(asset_to_checkout) 
.make_directory(directory_path) 
.rename_asset(source_asset_path, destination_asset_path) 
.sync_browser_to_objects(asset_paths)
.load_asset(asset_path)

'''




#checks to create
'''
material naming conventions
mesh naming conventions + object to mesh name
very small objects
units

'''



#sample Code
'''




##import all .jpg files found in a directory into UE4
texturedir = "D:\\" #folder from which all textures should be imported
files = [f for f in listdir(texturedir) if isfile(join(dir, f)) and f[-3:]=='jpg']

for f in files:
     print join(dir, f)
     AssetImportTask = unreal.AssetImportTask()
     AssetImportTask.set_editor_property('filename', join(dir, f))
     AssetImportTask.set_editor_property('destination_path', '/Game/Textures')
     AssetImportTask.set_editor_property('save', True)
     import_tasks.append(AssetImportTask)

AssetTools.import_asset_tasks(import_tasks)




##################printing to the log


unreal.log_error()
unreal.log_warning()
unreal.log()



####################### display progressbar

total_frames = 100
text_label = "Working!"
with unreal.ScopedSlowTask(total_frames, text_label) as slow_task:
    slow_task.make_dialog(True)               # Makes the dialog visible, if it isn't already
    for i in range(total_frames):
        if slow_task.should_cancel():         # True if the user has pressed Cancel in the UI
            break
        slow_task.enter_progress_frame(1)     # Advance progress by one frame.
                                            # You can also update the dialog text in this call, if you want.
        ...                                   # Now do work for the current frame here!
        
 
 
 '''
 
 
#valid filename notes
'''
 Just to further complicate things, you are not guaranteed to get a valid filename just by removing invalid characters. Since allowed characters differ on different filenames, a conservative approach could end up turning a valid name into an invalid one. You may want to add special handling for the cases where:

The string is all invalid characters (leaving you with an empty string)

You end up with a string with a special meaning, eg "." or ".."

On windows, certain device names are reserved. For instance, you can't create a file named "nul", "nul.txt" (or nul.anything in fact) The reserved names are:

CON, PRN, AUX, NUL, COM1, COM2, COM3, COM4, COM5, COM6, COM7, COM8, COM9, LPT1, LPT2, LPT3, LPT4, LPT5, LPT6, LPT7, LPT8, and LPT9

You can probably work around these issues by prepending some string to the filenames that can never result in one of these cases, and stripping invalid characters.
'''