// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnitContext() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigState();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigState;
	static UEnum* EControlRigState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigState, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigState"));
		}
		return Z_Registration_Info_UEnum_EControlRigState.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigState>()
	{
		return EControlRigState_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators[] = {
		{ "EControlRigState::Init", (int64)EControlRigState::Init },
		{ "EControlRigState::Update", (int64)EControlRigState::Update },
		{ "EControlRigState::Invalid", (int64)EControlRigState::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Current state of rig\n*\x09What  state Control Rig currently is\n*/" },
		{ "Init.Name", "EControlRigState::Init" },
		{ "Invalid.Name", "EControlRigState::Invalid" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "ToolTip", "Current state of rig\n    What  state Control Rig currently is" },
		{ "Update.Name", "EControlRigState::Update" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigState",
		"EControlRigState",
		Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigState()
	{
		if (!Z_Registration_Info_UEnum_EControlRigState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigState.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigInteractionType;
	static UEnum* EControlRigInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigInteractionType, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigInteractionType"));
		}
		return Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigInteractionType>()
	{
		return EControlRigInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators[] = {
		{ "EControlRigInteractionType::None", (int64)EControlRigInteractionType::None },
		{ "EControlRigInteractionType::Translate", (int64)EControlRigInteractionType::Translate },
		{ "EControlRigInteractionType::Rotate", (int64)EControlRigInteractionType::Rotate },
		{ "EControlRigInteractionType::Scale", (int64)EControlRigInteractionType::Scale },
		{ "EControlRigInteractionType::All", (int64)EControlRigInteractionType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EControlRigInteractionType::All" },
		{ "Comment", "/**\n * The type of interaction happening on a rig\n */" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "None.Name", "EControlRigInteractionType::None" },
		{ "Rotate.Name", "EControlRigInteractionType::Rotate" },
		{ "Scale.Name", "EControlRigInteractionType::Scale" },
		{ "ToolTip", "The type of interaction happening on a rig" },
		{ "Translate.Name", "EControlRigInteractionType::Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigInteractionType",
		"EControlRigInteractionType",
		Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchySettings;
class UScriptStruct* FRigHierarchySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchySettings, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchySettings>()
{
	return FRigHierarchySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralElementLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProceduralElementLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData[] = {
		{ "Category", "Hierarchy Settings" },
		{ "Comment", "// Sets the limit for the number of elements to create procedurally\n" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "ToolTip", "Sets the limit for the number of elements to create procedurally" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit = { "ProceduralElementLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchySettings, ProceduralElementLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchySettings",
		sizeof(FRigHierarchySettings),
		alignof(FRigHierarchySettings),
		Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo[] = {
		{ EControlRigState_StaticEnum, TEXT("EControlRigState"), &Z_Registration_Info_UEnum_EControlRigState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2776213756U) },
		{ EControlRigInteractionType_StaticEnum, TEXT("EControlRigInteractionType"), &Z_Registration_Info_UEnum_EControlRigInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666209751U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo[] = {
		{ FRigHierarchySettings::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewStructOps, TEXT("RigHierarchySettings"), &Z_Registration_Info_UScriptStruct_RigHierarchySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchySettings), 460636539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_3682489776(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
