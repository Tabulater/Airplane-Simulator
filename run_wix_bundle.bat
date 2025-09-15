call "%WIX%bin\candle.exe" -ext WixBalExtension wix_bundle.wxs
call "%WIX%bin\light.exe" -ext WixBalExtension -out airplane-simulator-1.0.0-win64.exe wix_bundle.wixobj
