using UnrealBuildTool;

public class Web_Browser_TestTarget : TargetRules
{
	public Web_Browser_TestTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("Web_Browser_Test");
	}
}
