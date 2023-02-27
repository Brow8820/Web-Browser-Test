// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSamplePhysicsField.h"
#include "Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSamplePhysicsField() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSamplePhysicsVectorField::StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsVectorField);
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Material expresions to sample the global field\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ToolTip", "Material expresions to sample the global field" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsVectorField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldVectorType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget_MetaData)) }; // 2863513637
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsVectorField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsVectorField>()
	{
		return UMaterialExpressionSamplePhysicsVectorField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsVectorField);
	UMaterialExpressionSamplePhysicsVectorField::~UMaterialExpressionSamplePhysicsVectorField() {}
	void UMaterialExpressionSamplePhysicsScalarField::StaticRegisterNativesUMaterialExpressionSamplePhysicsScalarField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsScalarField);
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsScalarField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldScalarType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget_MetaData)) }; // 54299443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsScalarField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsScalarField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsScalarField>()
	{
		return UMaterialExpressionSamplePhysicsScalarField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsScalarField);
	UMaterialExpressionSamplePhysicsScalarField::~UMaterialExpressionSamplePhysicsScalarField() {}
	void UMaterialExpressionSamplePhysicsIntegerField::StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSamplePhysicsIntegerField);
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_NoRegister()
	{
		return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData[] = {
		{ "Category", "Field Setup" },
		{ "Comment", "/** Target Type to be accessed */" },
		{ "DisplayName", "Target Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSamplePhysicsField.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Target Type to be accessed" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget = { "FieldTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSamplePhysicsIntegerField, FieldTarget), Z_Construct_UEnum_Chaos_EFieldIntegerType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget_MetaData)) }; // 3115369961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::NewProp_FieldTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSamplePhysicsIntegerField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams = {
		&UMaterialExpressionSamplePhysicsIntegerField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSamplePhysicsIntegerField>()
	{
		return UMaterialExpressionSamplePhysicsIntegerField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSamplePhysicsIntegerField);
	UMaterialExpressionSamplePhysicsIntegerField::~UMaterialExpressionSamplePhysicsIntegerField() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsVectorField, UMaterialExpressionSamplePhysicsVectorField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsVectorField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsVectorField), 3465612241U) },
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsScalarField, UMaterialExpressionSamplePhysicsScalarField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsScalarField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsScalarField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsScalarField), 1993705511U) },
		{ Z_Construct_UClass_UMaterialExpressionSamplePhysicsIntegerField, UMaterialExpressionSamplePhysicsIntegerField::StaticClass, TEXT("UMaterialExpressionSamplePhysicsIntegerField"), &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSamplePhysicsIntegerField), 1156830772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_365525067(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSamplePhysicsField_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
