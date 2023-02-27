// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stub/Public/Iris/ReplicationSystem/ObjectReplicationBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReplicationBridge() {}
// Cross Module References
	IRISSTUB_API UClass* Z_Construct_UClass_UObjectReplicationBridge();
	IRISSTUB_API UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister();
	IRISSTUB_API UClass* Z_Construct_UClass_UReplicationBridge();
	UPackage* Z_Construct_UPackage__Script_IrisStub();
// End Cross Module References
	void UObjectReplicationBridge::StaticRegisterNativesUObjectReplicationBridge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReplicationBridge);
	UClass* Z_Construct_UClass_UObjectReplicationBridge_NoRegister()
	{
		return UObjectReplicationBridge::StaticClass();
	}
	struct Z_Construct_UClass_UObjectReplicationBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectReplicationBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationBridge,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisStub,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/ObjectReplicationBridge.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/ObjectReplicationBridge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectReplicationBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReplicationBridge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams = {
		&UObjectReplicationBridge::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReplicationBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectReplicationBridge()
	{
		if (!Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton, Z_Construct_UClass_UObjectReplicationBridge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectReplicationBridge.OuterSingleton;
	}
	template<> IRISSTUB_API UClass* StaticClass<UObjectReplicationBridge>()
	{
		return UObjectReplicationBridge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReplicationBridge);
	UObjectReplicationBridge::~UObjectReplicationBridge() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReplicationBridge, UObjectReplicationBridge::StaticClass, TEXT("UObjectReplicationBridge"), &Z_Registration_Info_UClass_UObjectReplicationBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReplicationBridge), 807687568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_3532335130(TEXT("/Script/IrisStub"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_ReplicationSystem_ObjectReplicationBridge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
