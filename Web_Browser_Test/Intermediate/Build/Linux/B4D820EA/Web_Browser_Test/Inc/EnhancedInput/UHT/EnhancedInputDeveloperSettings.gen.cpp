// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputDeveloperSettings.h"
#include "DeveloperSettings/Public/Engine/PlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputDeveloperSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	void UEnhancedInputDeveloperSettings::StaticRegisterNativesUEnhancedInputDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputDeveloperSettings);
	UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings_NoRegister()
	{
		return UEnhancedInputDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldOnlyTriggerLastActionInChord_MetaData[];
#endif
		static void NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOnlyTriggerLastActionInChord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Developer settings for Enhanced Input */" },
		{ "DisplayName", "Enhanced Input" },
		{ "IncludePath", "EnhancedInputDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Developer settings for Enhanced Input" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * Platform specific settings for Enhanced Input.\n\x09 * @see UEnhancedInputPlatformSettings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "Platform specific settings for Enhanced Input.\n@see UEnhancedInputPlatformSettings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings = { "PlatformSettings", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputDeveloperSettings, PlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings_MetaData)) }; // 145519765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "Comment", "/**\n\x09 * If true, then only the last action in a ChordedAction trigger will be fired.\n\x09 * This means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\x09 * \n\x09 * Default value is true.\n\x09 */" },
		{ "ConsoleVariable", "EnhancedInput.OnlyTriggerLastActionInChord" },
		{ "ModuleRelativePath", "Public/EnhancedInputDeveloperSettings.h" },
		{ "ToolTip", "If true, then only the last action in a ChordedAction trigger will be fired.\nThis means that only the action that has the ChordedTrigger on it will be fired, not the individual steps.\n\nDefault value is true." },
	};
#endif
	void Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit(void* Obj)
	{
		((UEnhancedInputDeveloperSettings*)Obj)->bShouldOnlyTriggerLastActionInChord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord = { "bShouldOnlyTriggerLastActionInChord", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnhancedInputDeveloperSettings), &Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_PlatformSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::NewProp_bShouldOnlyTriggerLastActionInChord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams = {
		&UEnhancedInputDeveloperSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::PropPointers),
		0,
		0x009000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton, Z_Construct_UClass_UEnhancedInputDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputDeveloperSettings>()
	{
		return UEnhancedInputDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputDeveloperSettings);
	UEnhancedInputDeveloperSettings::~UEnhancedInputDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputDeveloperSettings, UEnhancedInputDeveloperSettings::StaticClass, TEXT("UEnhancedInputDeveloperSettings"), &Z_Registration_Info_UClass_UEnhancedInputDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputDeveloperSettings), 1086782446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_4635204(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
