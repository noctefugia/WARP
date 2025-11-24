@echo off
setlocal

:: Check if a file is passed to the batch file
if "%~1"=="" (
    echo No file specified.
    echo Please drag and drop a DLL file onto this batch file.
    pause
    exit /b
)

:: Extract the extension of the file
set "fileExt=%~x1"

:: Check if the extension is .dll
if /i "%fileExt%"==".dll" (
    tcc -impdef "%~1"
    echo Definition file created for "%~1".
) else (
    echo The file "%~1" does not have a .dll extension.
)

pause
endlocal