// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Core/RigUnit_Print.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Print() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_Print();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigDispatch_Print>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_Print cannot be polymorphic unless super FRigDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_Print;
class UScriptStruct* FRigDispatch_Print::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_Print.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_Print.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_Print, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_Print"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_Print.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_Print>()
{
	return FRigDispatch_Print::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_Print_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Prints any value to the log\n */" },
		{ "DisplayName", "Print" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Print.h" },
		{ "NodeColor", "0.8, 0, 0.2, 1" },
		{ "ToolTip", "* Prints any value to the log" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_Print>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatchFactory,
		&NewStructOps,
		"RigDispatch_Print",
		sizeof(FRigDispatch_Print),
		alignof(FRigDispatch_Print),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_Print()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_Print.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_Print.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_Print.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Print_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Print_h_Statics::ScriptStructInfo[] = {
		{ FRigDispatch_Print::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_Print_Statics::NewStructOps, TEXT("RigDispatch_Print"), &Z_Registration_Info_UScriptStruct_RigDispatch_Print, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_Print), 2237512061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Print_h_168281747(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Print_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Print_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
