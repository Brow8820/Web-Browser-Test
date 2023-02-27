// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Public/LandscapeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeSettings::StaticRegisterNativesULandscapeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSettings);
	UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister()
	{
		return ULandscapeSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideResolutionLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SideResolutionLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLandscapeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerInfoObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLayerInfoObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictiveMode_MetaData[];
#endif
		static void NewProp_bRestrictiveMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictiveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Landscape" },
		{ "IncludePath", "LandscapeSettings.h" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "This option controls the maximum editing layers that can be added to a Landscape" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers = { "MaxNumberOfLayers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSettings, MaxNumberOfLayers), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit = { "SideResolutionLimit", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSettings, SideResolutionLimit), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Default Landscape Material will be prefilled when creating a new landscape." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial = { "DefaultLandscapeMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSettings, DefaultLandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "Default Layer Info Object" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject = { "DefaultLayerInfoObject", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeSettings, DefaultLayerInfoObject), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_SetBit(void* Obj)
	{
		((ULandscapeSettings*)Obj)->bRestrictiveMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode = { "bRestrictiveMode", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeSettings), &Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_SideResolutionLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLandscapeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_DefaultLayerInfoObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_bRestrictiveMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams = {
		&ULandscapeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSettings()
	{
		if (!Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton, Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeSettings.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSettings>()
	{
		return ULandscapeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSettings);
	ULandscapeSettings::~ULandscapeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSettings, ULandscapeSettings::StaticClass, TEXT("ULandscapeSettings"), &Z_Registration_Info_UClass_ULandscapeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSettings), 4154846234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_2215876659(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
