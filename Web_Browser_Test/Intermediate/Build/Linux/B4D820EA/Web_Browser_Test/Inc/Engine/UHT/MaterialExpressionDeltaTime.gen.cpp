// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDeltaTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDeltaTime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDeltaTime::StaticRegisterNativesUMaterialExpressionDeltaTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDeltaTime);
	UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister()
	{
		return UMaterialExpressionDeltaTime::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDeltaTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDeltaTime.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDeltaTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::ClassParams = {
		&UMaterialExpressionDeltaTime::StaticClass,
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
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDeltaTime.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDeltaTime>()
	{
		return UMaterialExpressionDeltaTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDeltaTime);
	UMaterialExpressionDeltaTime::~UMaterialExpressionDeltaTime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDeltaTime, UMaterialExpressionDeltaTime::StaticClass, TEXT("UMaterialExpressionDeltaTime"), &Z_Registration_Info_UClass_UMaterialExpressionDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDeltaTime), 3757069446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_3977492354(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDeltaTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
