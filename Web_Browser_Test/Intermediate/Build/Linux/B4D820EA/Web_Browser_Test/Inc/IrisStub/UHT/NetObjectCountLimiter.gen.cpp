// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stub/Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectCountLimiter() {}
// Cross Module References
	IRISSTUB_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig();
	IRISSTUB_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister();
	IRISSTUB_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisStub();
// End Cross Module References
	void UNetObjectCountLimiterConfig::StaticRegisterNativesUNetObjectCountLimiterConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectCountLimiterConfig);
	UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister()
	{
		return UNetObjectCountLimiterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizerConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisStub,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectCountLimiterConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams = {
		&UNetObjectCountLimiterConfig::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig()
	{
		if (!Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton;
	}
	template<> IRISSTUB_API UClass* StaticClass<UNetObjectCountLimiterConfig>()
	{
		return UNetObjectCountLimiterConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectCountLimiterConfig);
	UNetObjectCountLimiterConfig::~UNetObjectCountLimiterConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectCountLimiterConfig, UNetObjectCountLimiterConfig::StaticClass, TEXT("UNetObjectCountLimiterConfig"), &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectCountLimiterConfig), 881644010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_1004027378(TEXT("/Script/IrisStub"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
