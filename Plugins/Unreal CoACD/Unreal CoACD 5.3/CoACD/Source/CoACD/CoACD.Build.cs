// Copyright PJLF Group. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class CoACD : ModuleRules
{
    public CoACD(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicIncludePaths.AddRange(new string[] { });
        PrivateIncludePaths.AddRange(new string[] { });
        PublicDependencyModuleNames.AddRange(new string[]{ });
        PrivateDependencyModuleNames.AddRange(new string[] {
                "Core", "CoreUObject", "Engine", 
				"MeshDescription", "StaticMeshDescription", "RawMesh", "MeshUtilities",
                "AssetRegistry", "Projects" });

		string ThirdPartyPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/"));
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			RuntimeDependencies.Add(Path.Combine(ThirdPartyPath, "CoACD", "DLL", "lib_coacd.dll"));
		}
	}
}
