// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureRenderTarget2DArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2DArray() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArray();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureRenderTarget2DArray::StaticRegisterNativesUTextureRenderTarget2DArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget2DArray);
	UClass* Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister()
	{
		return UTextureRenderTarget2DArray::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTarget2DArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTarget2DArray\n *\n * 2D Array render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular 2DArray texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Engine/TextureRenderTarget2DArray.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "TextureRenderTarget2DArray\n\n2D Array render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular 2DArray texture resource." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The width of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArray, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The height of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The height of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArray, SizeY), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** The slices of the texture.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "The slices of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices = { "Slices", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArray, Slices), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArray, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from bHDR, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "Normally the format is derived from bHDR, this allows code to set the format explicitly." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArray, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat_MetaData)) }; // 404292459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_MetaData[] = {
		{ "Category", "TextureRenderTarget2DArray" },
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTarget2DArray*)Obj)->bHDR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2DArray), &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2DArray.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTarget2DArray*)Obj)->bForceLinearGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2DArray), &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_Slices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_OverrideFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2DArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::ClassParams = {
		&UTextureRenderTarget2DArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTarget2DArray()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget2DArray>()
	{
		return UTextureRenderTarget2DArray::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2DArray);
	UTextureRenderTarget2DArray::~UTextureRenderTarget2DArray() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget2DArray, UTextureRenderTarget2DArray::StaticClass, TEXT("UTextureRenderTarget2DArray"), &Z_Registration_Info_UClass_UTextureRenderTarget2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget2DArray), 1702180682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_3857429696(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
