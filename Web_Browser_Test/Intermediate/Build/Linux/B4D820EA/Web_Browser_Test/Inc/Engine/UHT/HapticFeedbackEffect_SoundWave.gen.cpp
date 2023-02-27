// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Haptics/HapticFeedbackEffect_SoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_SoundWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHapticFeedbackEffect_SoundWave::StaticRegisterNativesUHapticFeedbackEffect_SoundWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffect_SoundWave);
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister()
	{
		return UHapticFeedbackEffect_SoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStereo_MetaData[];
#endif
		static void NewProp_bUseStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStereo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_SoundWave.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_SoundWave" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_SoundWave, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_SoundWave" },
		{ "Comment", "/** If true on a vr controller the left and right stereo channels would be applied to the left and right controller, respectively. */" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
		{ "ToolTip", "If true on a vr controller the left and right stereo channels would be applied to the left and right controller, respectively." },
	};
#endif
	void Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo_SetBit(void* Obj)
	{
		((UHapticFeedbackEffect_SoundWave*)Obj)->bUseStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo = { "bUseStereo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHapticFeedbackEffect_SoundWave), &Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_bUseStereo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_SoundWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::ClassParams = {
		&UHapticFeedbackEffect_SoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave()
	{
		if (!Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_SoundWave>()
	{
		return UHapticFeedbackEffect_SoundWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_SoundWave);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_SoundWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_SoundWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffect_SoundWave, UHapticFeedbackEffect_SoundWave::StaticClass, TEXT("UHapticFeedbackEffect_SoundWave"), &Z_Registration_Info_UClass_UHapticFeedbackEffect_SoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffect_SoundWave), 3864119754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_SoundWave_h_4085993911(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_SoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_SoundWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
