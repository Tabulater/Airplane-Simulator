function Component()
{
    // default constructor
}

Component.prototype.createOperations = function()
{
  component.createOperations();

  if ( systemInfo.productType === "windows" )
  {
    component.addOperation(
      "CreateShortcut",
      "@TargetDir@/bin/airplane-simulator.exe",
      "@StartMenuDir@/AirplaneSimulator.lnk",
      "workingDirectory=@TargetDir@/bin/",
      "iconPath=@TargetDir@/bin/airplane-simulator.ico",
      "iconId=0",
      "description=Airplane Simulator"
    );
  }
}
