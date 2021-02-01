These files should be placed in the same directory as the .uproject files
They only work on windows computers

The fixCrash.bat file will fix an engine crash related to a badly loaded editor utility widget. 
If when you try to open your project it goes straight to a crash report, try running this script.
If the script does not work, try deleting the Saved-config folder in your project directory (more destructive)

The removeDir.bat file will remove any empty folders from your project directory without affecting existing files. 
Empty folders frequently happen when using perforce on a project since perforce cannot delete folders.