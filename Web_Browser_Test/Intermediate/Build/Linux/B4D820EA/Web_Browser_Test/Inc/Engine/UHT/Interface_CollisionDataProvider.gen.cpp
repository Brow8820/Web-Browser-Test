// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_CollisionDataProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_CollisionDataProvider::StaticRegisterNativesUInterface_CollisionDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_CollisionDataProvider);
	UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister()
	{
		return UInterface_CollisionDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_CollisionDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_CollisionDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams = {
		&UInterface_CollisionDataProvider::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_CollisionDataProvider()
	{
		if (!Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton, Z_Construct_UClass_UInterface_CollisionDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterface_CollisionDataProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterface_CollisionDataProvider>()
	{
		return UInterface_CollisionDataProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_CollisionDataProvider);
	UInterface_CollisionDataProvider::~UInterface_CollisionDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_CollisionDataProvider, UInterface_CollisionDataProvider::StaticClass, TEXT("UInterface_CollisionDataProvider"), &Z_Registration_Info_UClass_UInterface_CollisionDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_CollisionDataProvider), 1866130202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_1385408521(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
