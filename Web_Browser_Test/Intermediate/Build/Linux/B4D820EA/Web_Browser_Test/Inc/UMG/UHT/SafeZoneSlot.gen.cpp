// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SafeZoneSlot.h"
#include "SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USafeZoneSlot);
	UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister()
	{
		return USafeZoneSlot::StaticClass();
	}
	struct Z_Construct_UClass_USafeZoneSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTitleSafe_MetaData[];
#endif
		static void NewProp_bIsTitleSafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTitleSafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeAreaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeAreaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZoneSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SafeZoneSlot.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	void Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit(void* Obj)
	{
		((USafeZoneSlot*)Obj)->bIsTitleSafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe = { "bIsTitleSafe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USafeZoneSlot), &Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale = { "SafeAreaScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USafeZoneSlot, SafeAreaScale), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USafeZoneSlot, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USafeZoneSlot, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USafeZoneSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZoneSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZoneSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams = {
		&USafeZoneSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZoneSlot()
	{
		if (!Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton, Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USafeZoneSlot>()
	{
		return USafeZoneSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneSlot);
	USafeZoneSlot::~USafeZoneSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USafeZoneSlot, USafeZoneSlot::StaticClass, TEXT("USafeZoneSlot"), &Z_Registration_Info_UClass_USafeZoneSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USafeZoneSlot), 419666461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_4212671437(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
