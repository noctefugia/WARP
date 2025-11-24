@echo off
:: Change the current directory to the directory of the script
cd /d "%~dp0"

:: Define variables
:: The download link for the TinyCC toolchain
set "download_link=https://download.savannah.gnu.org/releases/tinycc/tcc-0.9.27-win32-bin.zip"
:: The output file path
set "output_file=%~dp0tcc.zip"
:: The output folder path
set "output_folder=%~dp0.."
:: The addon folder path
set "addon_folder=%~dp0addon"
:: The build script path
set "build_script=%~dp0..\..\WARP_build.bat"
:: The delete folder path
set "delete_folder=..\tcc"

:: Delete TCC folder if it exists
if exist "%delete_folder%" (
	rmdir /s /q "%delete_folder%"
	echo Existing toolchain installation removed.
)

:: Download the file using PowerShell
echo Starting download job: %download_link%
powershell -Command "Invoke-WebRequest -Uri '%download_link%' -OutFile '%output_file%'"
if errorlevel 1 (
	echo ERROR: failed to download toolchain.
	goto :end
)

:: Extract the downloaded archive using PowerShell
echo Extracting downloaded archive to the output folder
powershell -command "Expand-Archive -Path '%output_file%' -DestinationPath '%output_folder%' -Force"
if errorlevel 1 (
	echo ERROR: failed to extract archive.
	goto :end
)

:: Delete the downloaded archive
del /f "%output_file%"

:: Copy the files from the addon folder to the output folder
echo Copying files from the addon folder to the output folder
xcopy /Y /S "%addon_folder%" "%output_folder%"
if errorlevel 1 (
	echo ERROR: failed to copy files.
	goto :end
)

echo Starting build script
echo.
echo.

:: Call the build script with the "skip" argument
call "%build_script%" skip

:end
:: Check if a command line argument is provided
:: If no argument is provided, pause the script
if "%~1"=="" pause
