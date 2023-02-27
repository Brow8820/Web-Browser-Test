// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Stub/Public/Iris/Serialization/NetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerializer() {}
// Cross Module References
	IRISSTUB_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisStub();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetSerializerConfig;
class UScriptStruct* FNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializerConfig, Z_Construct_UPackage__Script_IrisStub(), TEXT("NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NetSerializerConfig.OuterSingleton;
}
template<> IRISSTUB_API UScriptStruct* StaticStruct<FNetSerializerConfig>()
{
	return FNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/NetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisStub,
		nullptr,
		&NewStructOps,
		"NetSerializerConfig",
		sizeof(FNetSerializerConfig),
		alignof(FNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_Serialization_NetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_Serialization_NetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNetSerializerConfig_Statics::NewStructOps, TEXT("NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetSerializerConfig), 3842217427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_Serialization_NetSerializer_h_3509697573(TEXT("/Script/IrisStub"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_Serialization_NetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Stub_Public_Iris_Serialization_NetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
