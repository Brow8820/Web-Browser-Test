// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSceneColor.h"
#include "Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneColor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode;
	static UEnum* EMaterialSceneAttributeInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialSceneAttributeInputMode"));
		}
		return Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialSceneAttributeInputMode::Type>()
	{
		return EMaterialSceneAttributeInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enumerators[] = {
		{ "EMaterialSceneAttributeInputMode::Coordinates", (int64)EMaterialSceneAttributeInputMode::Coordinates },
		{ "EMaterialSceneAttributeInputMode::OffsetFraction", (int64)EMaterialSceneAttributeInputMode::OffsetFraction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enum_MetaDataParams[] = {
		{ "Coordinates.Name", "EMaterialSceneAttributeInputMode::Coordinates" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "OffsetFraction.Name", "EMaterialSceneAttributeInputMode::OffsetFraction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialSceneAttributeInputMode",
		"EMaterialSceneAttributeInputMode::Type",
		Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode()
	{
		if (!Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode.InnerSingleton;
	}
	void UMaterialExpressionSceneColor::StaticRegisterNativesUMaterialExpressionSceneColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneColor);
	UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister()
	{
		return UMaterialExpressionSceneColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFraction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "MaterialExpressionSceneColor" },
		{ "Comment", "/**\n\x09* Coordinates - UV coordinates to apply to the scene color lookup.\n\x09* OffsetFraction - \x09""An offset to apply to the scene color lookup in a 2d fraction of the screen.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Coordinates - UV coordinates to apply to the scene color lookup.\nOffsetFraction -      An offset to apply to the scene color lookup in a 2d fraction of the screen." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode_MetaData)) }; // 2971743664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction = { "OffsetFraction", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, OffsetFraction_DEPRECATED), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput_MetaData[] = {
		{ "Category", "MaterialExpressionSceneColor" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
		{ "OverridingInputProperty", "Input" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput = { "ConstInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_OffsetFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::NewProp_ConstInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::ClassParams = {
		&UMaterialExpressionSceneColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneColor()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSceneColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneColor>()
	{
		return UMaterialExpressionSceneColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneColor);
	UMaterialExpressionSceneColor::~UMaterialExpressionSceneColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::EnumInfo[] = {
		{ EMaterialSceneAttributeInputMode_StaticEnum, TEXT("EMaterialSceneAttributeInputMode"), &Z_Registration_Info_UEnum_EMaterialSceneAttributeInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2971743664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneColor, UMaterialExpressionSceneColor::StaticClass, TEXT("UMaterialExpressionSceneColor"), &Z_Registration_Info_UClass_UMaterialExpressionSceneColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneColor), 3417223062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_42021365(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
