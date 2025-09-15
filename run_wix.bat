call run_wix_clean.bat

copy src\airplane-simulator.ico airplane-simulator.ico
copy C:\OpenAL\1.1\redist\oalinst.exe oalinst.exe

call %Qt5_DIR%/bin/qtenv2.bat

cd /D "%~dp0"

echo %cd%

rmdir /S /Q qt
mkdir qt
mkdir qt\bin
copy /y bin\airplane-simulator.exe qt\bin
copy "%Qt5_DIR%\bin\Qt5OpenGL.dll" qt\bin

rem cd qt\bin
rem call "%Qt5_DIR%\bin\windeployqt.exe" --release airplane-simulator.exe
rem cd ..\..
call "%Qt5_DIR%\bin\windeployqt.exe" --release qt\bin\

call "%WIX%bin\heat.exe" dir ".\qt\bin" -gg -ke -sfrag -dr dir_airplane_simulator -cg cg_airplane_simulator_qt -var var.SourceDir -template fragment -out wix_qt.wxs
call "%WIX%bin\heat.exe" dir ".\data" -gg -ke -sfrag -dr dir_airplane_simulator -cg cg_airplane_simulator_data -var var.SourceDir -template fragment -out wix_data.wxs
call "%WIX%bin\heat.exe" dir "%OSG_ROOT%\bin\osgPlugins-3.6.5" -gg -ke -sfrag -dr dir_airplane_simulator_bin -cg cg_airplane_simulator_osg_plugins -var var.SourceDir -template fragment -out wix_osg_plugins.wxs

copy "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Redist\MSVC\14.28.29325\MergeModules\Microsoft_VC142_CRT_x64.msm" Microsoft_VC142_CRT_x64.msm

call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_alut.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension -dSourceDir=".\data" wix_data.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_main.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension wix_osg.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension -dSourceDir="%OSG_ROOT%\bin\osgPlugins-3.6.5" wix_osg_plugins.wxs
call "%WIX%bin\candle.exe" -ext WiXUtilExtension -dSourceDir=".\qt\bin" wix_qt.wxs 
call "%WIX%bin\light.exe" -ext WiXUtilExtension -ext WixUIExtension -cultures:en-us -out airplane-simulator-1.0.0-win64.msi wix_alut.wixobj wix_data.wixobj wix_main.wixobj wix_osg.wixobj wix_osg_plugins.wixobj wix_qt.wixobj -dWixUILicenseRtf=LICENSE.rtf -dWixUIBannerBmp=installer_banner.bmp -dWixUIDialogBmp=installer_background.bmp

call run_wix_bundle.bat

pause
