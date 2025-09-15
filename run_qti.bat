set INSTALLER_NAME=airplane-simulator-1.0.0-win64

del %INSTALLER_NAME%.exe
del qti\%INSTALLER_NAME%.exe

set airplane_simulator_dir=qti\packages\pl.tabulater.airplane-simulator

rmdir /s /q %airplane_simulator_dir%\data\bin 2>nul
rmdir /s /q %airplane_simulator_dir%\data\data 2>nul

mkdir %airplane_simulator_dir%\data\bin 2>nul
mkdir %airplane_simulator_dir%\data\bin\osgPlugins-3.6.5 2>nul
mkdir %airplane_simulator_dir%\data\data 2>nul

copy /y bin\airplane-simulator.exe %airplane_simulator_dir%\data\bin
copy /y src\airplane-simulator.ico %airplane_simulator_dir%\data\bin

xcopy /y data %airplane_simulator_dir%\data\data /E

copy /y %QTDIR%\bin\Qt5Core.dll %airplane_simulator_dir%\data\bin
copy /y %QTDIR%\bin\Qt5Gui.dll %airplane_simulator_dir%\data\bin
copy /y %QTDIR%\bin\Qt5Network.dll %airplane_simulator_dir%\data\bin
copy /y %QTDIR%\bin\Qt5OpenGL.dll %airplane_simulator_dir%\data\bin
copy /y %QTDIR%\bin\Qt5Svg.dll %airplane_simulator_dir%\data\bin
copy /y %QTDIR%\bin\Qt5Xml.dll %airplane_simulator_dir%\data\bin

copy /y %OSG_ROOT%\bin\libpng16-16.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\libxml2.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osg.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgDB.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgGA.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgParticle.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgQt.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgSim.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgTerrain.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgText.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgUtil.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgViewer.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\osg160-osgWidget.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\ot21-OpenThreads.dll %airplane_simulator_dir%\data\bin
copy /y %OSG_ROOT%\bin\zlib1.dll %airplane_simulator_dir%\data\bin

xcopy /y %OSG_ROOT%\bin\osgPlugins-3.6.5 %airplane_simulator_dir%\data\bin\osgPlugins-3.6.5 /E /I

copy /y C:\Windows\System32\OpenAL32.dll %airplane_simulator_dir%\data\bin
copy /y %OPENAL_DIR%\bin\alut.dll %airplane_simulator_dir%\data\bin

copy /y LICENSE.rtf %airplane_simulator_dir%\meta

cd qti

C:\Qt\QtIFW-3.1.0\bin\binarycreator.exe -c config\config.xml -p packages %INSTALLER_NAME%.exe

move %INSTALLER_NAME%.exe ..\%INSTALLER_NAME%.exe

pause
