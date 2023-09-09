@REM Create OpenJK projects for Visual Studio 2019 using CMake
@echo off
for %%X in (cmake.exe) do (set FOUND=%%~$PATH:X)
if not defined FOUND (
	echo CMake was not found on your system. Please make sure you have installed CMake
	echo from http://www.cmake.org/ and cmake.exe is installed to your system's PATH
	echo environment variable.
	echo.
	pause
	exit /b 1
) else (
	echo Found CMake!
)
if not exist build\nul (mkdir build)
pushd build
<<<<<<<< HEAD:CreateVisualStudio2015Projects.bat
cmake -G "Visual Studio 14 2015" -A Win32 -D CMAKE_INSTALL_PREFIX=../install ..
========
cmake -G "Visual Studio 17 2022" -A Win32 -D CMAKE_INSTALL_PREFIX=../install ..
>>>>>>>> 51bf5c2bf4e882e29cffaefde0a641db3ba7d595:CreateVisualStudio2022Projects.bat
popd
pause