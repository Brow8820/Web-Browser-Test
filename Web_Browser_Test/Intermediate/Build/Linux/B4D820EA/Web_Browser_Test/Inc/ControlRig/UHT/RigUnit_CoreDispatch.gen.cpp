// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Core/RigUnit_CoreDispatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_CoreDispatch() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigDispatch_CoreBase>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_CoreBase cannot be polymorphic unless super FRigDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase;
class UScriptStruct* FRigDispatch_CoreBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_CoreBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_CoreBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_CoreBase>()
{
	return FRigDispatch_CoreBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_CoreDispatch.h" },
		{ "NodeColor", "0.762745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_CoreBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatchFactory,
		&NewStructOps,
		"RigDispatch_CoreBase",
		sizeof(FRigDispatch_CoreBase),
		alignof(FRigDispatch_CoreBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigDispatch_CoreEquals>() == std::is_polymorphic<FRigDispatch_CoreBase>(), "USTRUCT FRigDispatch_CoreEquals cannot be polymorphic unless super FRigDispatch_CoreBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals;
class UScriptStruct* FRigDispatch_CoreEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_CoreEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_CoreEquals"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_CoreEquals>()
{
	return FRigDispatch_CoreEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Compares any two values and return true if they are identical\n */" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_CoreDispatch.h" },
		{ "ToolTip", "* Compares any two values and return true if they are identical" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_CoreEquals>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatch_CoreBase,
		&NewStructOps,
		"RigDispatch_CoreEquals",
		sizeof(FRigDispatch_CoreEquals),
		alignof(FRigDispatch_CoreEquals),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigDispatch_CoreNotEquals>() == std::is_polymorphic<FRigDispatch_CoreEquals>(), "USTRUCT FRigDispatch_CoreNotEquals cannot be polymorphic unless super FRigDispatch_CoreEquals is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals;
class UScriptStruct* FRigDispatch_CoreNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_CoreNotEquals"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_CoreNotEquals>()
{
	return FRigDispatch_CoreNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Compares any two values and return true if they are identical\n */" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=,Xor" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_CoreDispatch.h" },
		{ "ToolTip", "* Compares any two values and return true if they are identical" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_CoreNotEquals>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatch_CoreEquals,
		&NewStructOps,
		"RigDispatch_CoreNotEquals",
		sizeof(FRigDispatch_CoreNotEquals),
		alignof(FRigDispatch_CoreNotEquals),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_CoreDispatch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_CoreDispatch_h_Statics::ScriptStructInfo[] = {
		{ FRigDispatch_CoreBase::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_CoreBase_Statics::NewStructOps, TEXT("RigDispatch_CoreBase"), &Z_Registration_Info_UScriptStruct_RigDispatch_CoreBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_CoreBase), 2971993351U) },
		{ FRigDispatch_CoreEquals::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_CoreEquals_Statics::NewStructOps, TEXT("RigDispatch_CoreEquals"), &Z_Registration_Info_UScriptStruct_RigDispatch_CoreEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_CoreEquals), 70492363U) },
		{ FRigDispatch_CoreNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_CoreNotEquals_Statics::NewStructOps, TEXT("RigDispatch_CoreNotEquals"), &Z_Registration_Info_UScriptStruct_RigDispatch_CoreNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_CoreNotEquals), 2889905465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_CoreDispatch_h_3598886631(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_CoreDispatch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_CoreDispatch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
