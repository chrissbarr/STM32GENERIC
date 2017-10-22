@echo off
rem: Note %~dp0 get path of this batch file
rem: Need to change drive if My Documents is on a drive other than C:
set driverLetter=%~dp0
set driverLetter=%driverLetter:~0,2%
%driverLetter%
cd %~dp0
rem: the two line below are needed to fix path issues with incorrect slashes before the bin file name
set str=%4
set str=%str:/=\%


rem: ------------- use dfu-util CLI
"dfu-util-0.9-win64/dfu-util.exe" -V -d %3 -D %str% -s 0x08010000