@echo off & setlocal enabledelayedexpansion
Title Core Script B.David [STARTING]
mode con cols=80 lines=14 & Color A

cd /d %~dp0
Set "Path=%Path%;%CD%;%CD%\bin;"
set localver=3405
set maindir=%CD%
set format=Yes
set formatcolor=2F
if defined ProgramFiles(x86) (set bit=64) else (set bit=32)

REM GET ADMIN CODE MUST GO FIRST
:initialchecks
echo.Running Initial Checks
ping 1.1.1.1 -n 1 -w 1000 > nul
if errorlevel 1 (Echo.Could not Ping 1.1.1.1, Attempting backup pings.) else (goto foundinternet)
ping 8.8.8.8 -n 1 -w 2000 > nul
if errorlevel 1 (Echo.Could not Ping 8.8.8.8, Attempting backup pings.) else (goto foundinternet)
ping github.com -n 1 -w 2000 > nul
if errorlevel 1 (Echo.Could not Ping gihub.com, Exiting Script && timeout 5 > nul && exit) else (goto foundinternet)
:foundinternet
echo.Found Internet
curl.exe -V > nul
if errorlevel 1 (echo Filed to find curl. && pause && exit)
echo.Found cURL
for %%# in (powershell.exe) do @if "%%~$PATH:#"=="" (echo.Could not find Powershell. && pause && exit) 
echo.Found Powershell
echo.Promting for admin permissions if not run as admin.
timeout 1 >nul
set _elev=
if /i "%~1"=="-el" set _elev=1
set _PSarg="""%~f0""" -el %_args% && set "nul=>nul 2>&1" && setlocal EnableDelayedExpansion
%nul% reg query HKU\S-1-5-19 || (
if not defined _elev %nul% powershell.exe "start cmd.exe -arg '/c \"!_PSarg:'=''!\"' -verb runas" && exit /b
	echo.Veuillez rouvrir ce script en tant qu'administrateur.

)

:begin
echo Selectionne une tache:
echo =============
echo -
echo 1) Option 1 Changer reseau le sur ON
echo 2) Option 2 Changer reseau le sur OFF
echo 5) Option 3 Relancer Core
echo 9) Option 4 Rainbow
echo 5) Option 5 Enregistrer le fond ecran
echo 6) Option 6 ScanPort
echo 7) Option 7 RDS Automation
echo 8) Option 8 Installer Steam sur Windows
echo -
set /p op=Type option:
if "%op%"=="1" goto op1
if "%op%"=="2" goto op2
if "%op%"=="3" goto op3
if "%op%"=="4" goto op4
if "%op%"=="5" goto op5
if "%op%"=="6" goto op6
if "%op%"=="7" goto op7
if "%op%"=="8" goto op8
if "%op%"=="9" goto op9
if "%op%"=="10" goto op10

echo Choisissez une option : 
goto begin


:op1
echo you picked option %op%
netsh int set int name="ETHERNET" admin=enabled
netsh int set int name="Wi-Fi" admin=enabled
goto begin



:op2
echo you picked option %op%
netsh int set int name="ETHERNET" admin=disabled
netsh int set int name="Wi-Fi" admin=disabled
goto begin



:op3
start %CD%\Core.bat
goto begin



:op4
cls
rem prepare loop 
Set Sleep=0  
:start
rem loop 40 times
if %Sleep% == 40 ( goto end )
rem pick random numbers 1-16
set /a rand1=%random% %% 16
set /a rand2=%random% %% 16
rem user 
set HEX=0123456789ABCDEF
call set hexcolors=%%HEX:~%rand1%,1%%%%HEX:~%rand2%,1%%
rem set back/fore colors
color %hexcolors%
echo loop#%Sleep% color=%hexcolors%
rem the pings act as a split-second delay   
PING localhost -n 1 >NUL
PING localhost -n 1 >NUL
rem increment counter and loop
Set /A Sleep+=1
goto start
:end
rem close after 3 seconds
timeout /t 3
goto begin



:op5
mspaint %AppData%\Microsoft\Windows\Themes\TranscodedWallpaper
goto begin

:op6
powershell %CD%\scanport.ps1
goto begin

:op7
powershell %CD%\RDS_Automation.ps1
goto begin

:op8
powershell %CD%\InstallSteam.ps1
goto begin


:exit
@exit