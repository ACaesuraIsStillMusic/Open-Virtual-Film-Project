@echo off
setlocal enableDelayedExpansion

set "iniLoc=.\saved\config\windows"
set "iniFile=%iniLoc%\EditorPerProjectUserSettings.ini"


>"%iniFile%.new" (
  findstr /vb "LoadedUIs=" "%iniFile%"
)
DEL /P /q "%iniFile%"
ren "%iniFile%.new" *.