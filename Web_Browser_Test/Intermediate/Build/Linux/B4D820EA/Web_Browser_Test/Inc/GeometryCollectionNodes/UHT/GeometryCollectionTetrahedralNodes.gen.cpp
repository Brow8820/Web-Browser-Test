// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionTetrahedralNodes.h"
#include "Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionTetrahedralNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGenerateTetrahedralCollectionDataflowNodes>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateTetrahedralCollectionDataflowNodes cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes;
class UScriptStruct* FGenerateTetrahedralCollectionDataflowNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes, Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GenerateTetrahedralCollectionDataflowNodes"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGenerateTetrahedralCollectionDataflowNodes>()
{
	return FGenerateTetrahedralCollectionDataflowNodes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTetrahedralNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateTetrahedralCollectionDataflowNodes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionTetrahedralNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateTetrahedralCollectionDataflowNodes, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateTetrahedralCollectionDataflowNodes",
		sizeof(FGenerateTetrahedralCollectionDataflowNodes),
		alignof(FGenerateTetrahedralCollectionDataflowNodes),
		Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton, Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTetrahedralNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTetrahedralNodes_h_Statics::ScriptStructInfo[] = {
		{ FGenerateTetrahedralCollectionDataflowNodes::StaticStruct, Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics::NewStructOps, TEXT("GenerateTetrahedralCollectionDataflowNodes"), &Z_Registration_Info_UScriptStruct_GenerateTetrahedralCollectionDataflowNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateTetrahedralCollectionDataflowNodes), 3340283564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTetrahedralNodes_h_1062881842(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTetrahedralNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionTetrahedralNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
