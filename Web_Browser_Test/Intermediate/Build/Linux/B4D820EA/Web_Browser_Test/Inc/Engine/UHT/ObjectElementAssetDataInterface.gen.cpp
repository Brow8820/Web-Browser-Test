// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Object/ObjectElementAssetDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementAssetDataInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementAssetDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementAssetDataInterface_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UObjectElementAssetDataInterface::StaticRegisterNativesUObjectElementAssetDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementAssetDataInterface);
	UClass* Z_Construct_UClass_UObjectElementAssetDataInterface_NoRegister()
	{
		return UObjectElementAssetDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UObjectElementAssetDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementAssetDataInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementAssetDataInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementAssetDataInterface, ITypedElementAssetDataInterface), false },  // 1064511925
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementAssetDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::ClassParams = {
		&UObjectElementAssetDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectElementAssetDataInterface()
	{
		if (!Z_Registration_Info_UClass_UObjectElementAssetDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_UObjectElementAssetDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectElementAssetDataInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UObjectElementAssetDataInterface>()
	{
		return UObjectElementAssetDataInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementAssetDataInterface);
	UObjectElementAssetDataInterface::~UObjectElementAssetDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementAssetDataInterface, UObjectElementAssetDataInterface::StaticClass, TEXT("UObjectElementAssetDataInterface"), &Z_Registration_Info_UClass_UObjectElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementAssetDataInterface), 4083914972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_2462095657(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementAssetDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
