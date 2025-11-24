@echo off
cd /d "%~dp0"

setlocal enabledelayedexpansion
echo * WARP Full Build Script *
echo --------------------------

:: Set the directory containing the source folders
set SRC_DIR=warp_src

:: Navigate to the source directory
pushd %SRC_DIR%

:: Loop through each subfolder in the source directory and run build.bat if it exists
for /d %%d in (*) do (
    echo.
    echo Building in %%d...
    pushd %%d
    if exist build.bat (
        call build.bat skip
        if !errorlevel! neq 0 (
            echo [ERROR] Build failed in %%d.
            popd
            goto :end
        ) else (
            echo [SUCCESS] Build completed in %%d.
        )
    ) else (
        echo [WARNING] No build.bat found in %%d.
    )
    popd
)

:: Return to the original directory
popd

echo.
echo All builds completed.
goto :end

:end
endlocal
:: Check if a command line argument is provided
if "%~1"=="" pause