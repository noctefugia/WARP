@echo off
setlocal

:: Set the filename to the first argument (drag-and-dropped file)
if "%~1"=="" (
    echo No file was provided.
    exit /b
)

set "INPUTFILE=%~1"

:: Check if the input file exists
if not exist "%INPUTFILE%" (
    echo The file "%INPUTFILE%" was not found.
    exit /b
)

:: Set the output file name
set "OUTPUTFILE=output.txt"

:: Print a caption with the filename
echo Structure definitions in "%INPUTFILE%" will be appended to "%OUTPUTFILE%".

:: Parse the file and append the output
for /f "tokens=*" %%a in ('findstr /r /c:"^struct .* {" "%INPUTFILE%"') do (
    echo %%a >> "%OUTPUTFILE%"
)

echo Done.

endlocal
