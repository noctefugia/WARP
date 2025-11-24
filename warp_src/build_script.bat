@echo off
:: Universal TCC Build Script

:: Check for the correct number of arguments
if "%~3"=="" (
    echo Usage: %0 [source_file] [output_name] [compiler_flags]
    goto :end
)

:: Retrieve arguments
set SOURCE_FILE=%~1
set OUTPUT_NAME=%~2
set COMPILER_FLAGS=%~3

:: The relative path to TCC is hardcoded here
set TCC_PATH=..\..\warp_tool\tcc

:: Set basic flags
set BASIC_FLAGS=-luser32 -Werror -Wall

:: If -none is passed, it will be treated as an empty string
if "%COMPILER_FLAGS%"=="-none" set "COMPILER_FLAGS="

:: Combine basic flags with additional flags passed to the script
set FLAGS=%BASIC_FLAGS% %COMPILER_FLAGS%

:: Delete the old output file if it exists
if exist "..\..\%OUTPUT_NAME%" (
    del "..\..\%OUTPUT_NAME%"
    if %errorlevel% neq 0 (
        echo Failed to delete the old %OUTPUT_NAME%.
        goto :end
    )
    echo Deleted old %OUTPUT_NAME%.
)

:: Compile the source file into the binary
"%TCC_PATH%\tcc.exe" %FLAGS% "..\%SOURCE_FILE%" "..\common.c" "..\dyn_buffer.c" -o "..\..\%OUTPUT_NAME%"

:: Check for compilation success
if %errorlevel% neq 0 (
    echo Compilation failed!
    goto :end
)

echo Compilation successful. Output: %OUTPUT_NAME%

:end