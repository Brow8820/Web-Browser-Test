// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionGIReplace.h"
#include "Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGIReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGIReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionGIReplace::StaticRegisterNativesUMaterialExpressionGIReplace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGIReplace);
	UClass* Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister()
	{
		return UMaterialExpressionGIReplace::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionGIReplace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticIndirect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticIndirect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicIndirect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicIndirect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionGIReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_Default_MetaData[] = {
		{ "Comment", "/** Used for direct lighting computations e.g. real-time shaders */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
		{ "ToolTip", "Used for direct lighting computations e.g. real-time shaders" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_Default_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_StaticIndirect_MetaData[] = {
		{ "Comment", "/** Used for baked indirect lighting e.g. Lightmass */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
		{ "ToolTip", "Used for baked indirect lighting e.g. Lightmass" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_StaticIndirect = { "StaticIndirect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, StaticIndirect), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_StaticIndirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_StaticIndirect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_DynamicIndirect_MetaData[] = {
		{ "Comment", "/** Used for dynamic indirect lighting e.g. Light Propagation Volumes */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGIReplace.h" },
		{ "ToolTip", "Used for dynamic indirect lighting e.g. Light Propagation Volumes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_DynamicIndirect = { "DynamicIndirect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGIReplace, DynamicIndirect), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_DynamicIndirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_DynamicIndirect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_StaticIndirect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::NewProp_DynamicIndirect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGIReplace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::ClassParams = {
		&UMaterialExpressionGIReplace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionGIReplace()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionGIReplace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGIReplace.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGIReplace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionGIReplace.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGIReplace>()
	{
		return UMaterialExpressionGIReplace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGIReplace);
	UMaterialExpressionGIReplace::~UMaterialExpressionGIReplace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGIReplace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGIReplace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGIReplace, UMaterialExpressionGIReplace::StaticClass, TEXT("UMaterialExpressionGIReplace"), &Z_Registration_Info_UClass_UMaterialExpressionGIReplace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGIReplace), 3900027083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGIReplace_h_3499070125(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGIReplace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGIReplace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
