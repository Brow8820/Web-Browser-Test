// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stub/Public/Iris/DataStream/DataStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStream() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISSTUB_API UClass* Z_Construct_UClass_UDataStream();
	IRISSTUB_API UClass* Z_Construct_UClass_UDataStream_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisStub();
// End Cross Module References
	void UDataStream::StaticRegisterNativesUDataStream()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataStream);
	UClass* Z_Construct_UClass_UDataStream_NoRegister()
	{
		return UDataStream::StaticClass();
	}
	struct Z_Construct_UClass_UDataStream_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataStream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisStub,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStream_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/DataStream/DataStream.h" },
		{ "ModuleRelativePath", "Public/Iris/DataStream/DataStream.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataStream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStream>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataStream_Statics::ClassParams = {
		&UDataStream::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataStream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataStream()
	{
		if (!Z_Registration_Info_UClass_UDataStream.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataStream.OuterSingleton, Z_Construct_UClass_UDataStream_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataStream.OuterSingleton;
	}
	template<> IRISSTUB_API UClass* StaticClass<UDataStream>()
	{
		return UDataStream::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStream);
	UDataStream::~UDataStream() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_DataStream_DataStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_DataStream_DataStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataStream, UDataStream::StaticClass, TEXT("UDataStream"), &Z_Registration_Info_UClass_UDataStream, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataStream), 244325778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_DataStream_DataStream_h_1671861357(TEXT("/Script/IrisStub"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_DataStream_DataStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_DataStream_DataStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
