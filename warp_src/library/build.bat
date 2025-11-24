@echo off

:: Set the source file and output file names
set "SOURCE_FILE=library.c"
set "OUTPUT_FILE=WARP_library.dll"

:: Define additional compiler flags if needed (use '-none' to omit this param)
set "COMPILER_FLAGS=-shared -ldbghelp -lpsapi -lshlwapi -llibtcc lib_common.c pdb_symbol.c pdb_symbol_com.c jit_compiler.c asm_engine.c mb_extension.c"

:: Get the full path of the current batch file
set "CURRENT_DIR=%~dp0"

:: Trim the trailing backslash
set "CURRENT_DIR=%CURRENT_DIR:~0,-1%"

:: Extract the name of the current directory, which is the last segment of the path
for %%i in ("%CURRENT_DIR%") do set "PROJECT_NAME=%%~nxi"

:: Call the common build script with parameters: source file, output binary name, and compiler flags
call ..\build_script.bat "%PROJECT_NAME%\%SOURCE_FILE%" "%OUTPUT_FILE%" "%COMPILER_FLAGS%"

:: Check if a command line argument is provided
if "%~1"=="" pause