// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/LevelInstance/LevelInstanceLevelStreaming.h"
#include "Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceLevelStreaming() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstance();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingLevelInstance::StaticRegisterNativesULevelStreamingLevelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingLevelInstance);
	UClass* Z_Construct_UClass_ULevelStreamingLevelInstance_NoRegister()
	{
		return ULevelStreamingLevelInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingLevelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreamingDynamic,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceLevelStreaming.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceLevelStreaming.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingLevelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::ClassParams = {
		&ULevelStreamingLevelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009010A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingLevelInstance()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton, Z_Construct_UClass_ULevelStreamingLevelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelStreamingLevelInstance>()
	{
		return ULevelStreamingLevelInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingLevelInstance);
	ULevelStreamingLevelInstance::~ULevelStreamingLevelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingLevelInstance, ULevelStreamingLevelInstance::StaticClass, TEXT("ULevelStreamingLevelInstance"), &Z_Registration_Info_UClass_ULevelStreamingLevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingLevelInstance), 2265241491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_829759672(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceLevelStreaming_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
