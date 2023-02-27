// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume();
	ENGINE_API UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADEPRECATED_WorldPartitionVolume::StaticRegisterNativesADEPRECATED_WorldPartitionVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADEPRECATED_WorldPartitionVolume);
	UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_NoRegister()
	{
		return ADEPRECATED_WorldPartitionVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "WorldPartitionVolume has been replaced by LocationVolume" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WorldPartition/WorldPartitionVolume.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_WorldPartitionVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::ClassParams = {
		&ADEPRECATED_WorldPartitionVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x029002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume()
	{
		if (!Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton, Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ADEPRECATED_WorldPartitionVolume>()
	{
		return ADEPRECATED_WorldPartitionVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_WorldPartitionVolume);
	ADEPRECATED_WorldPartitionVolume::~ADEPRECATED_WorldPartitionVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADEPRECATED_WorldPartitionVolume, ADEPRECATED_WorldPartitionVolume::StaticClass, TEXT("ADEPRECATED_WorldPartitionVolume"), &Z_Registration_Info_UClass_ADEPRECATED_WorldPartitionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADEPRECATED_WorldPartitionVolume), 3937118816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_301794488(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
