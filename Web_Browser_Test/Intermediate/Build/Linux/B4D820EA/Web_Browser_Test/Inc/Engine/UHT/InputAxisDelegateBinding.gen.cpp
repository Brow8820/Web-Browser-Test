// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputAxisDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBlueprintInputAxisDelegateBinding>() == std::is_polymorphic<FBlueprintInputDelegateBinding>(), "USTRUCT FBlueprintInputAxisDelegateBinding cannot be polymorphic unless super FBlueprintInputDelegateBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding;
class UScriptStruct* FBlueprintInputAxisDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputAxisDelegateBinding>()
{
	return FBlueprintInputAxisDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisDelegateBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, InputAxisName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintInputAxisDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_InputAxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewProp_FunctionNameToBind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputAxisDelegateBinding",
		sizeof(FBlueprintInputAxisDelegateBinding),
		alignof(FBlueprintInputAxisDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding.InnerSingleton;
	}
	void UInputAxisDelegateBinding::StaticRegisterNativesUInputAxisDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAxisDelegateBinding);
	UClass* Z_Construct_UClass_UInputAxisDelegateBinding_NoRegister()
	{
		return UInputAxisDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputAxisDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputAxisDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputAxisDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputAxisDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputAxisDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_Inner = { "InputAxisDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 3242696838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings = { "InputAxisDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAxisDelegateBinding, InputAxisDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_MetaData)) }; // 3242696838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisDelegateBinding_Statics::NewProp_InputAxisDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputAxisDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisDelegateBinding_Statics::ClassParams = {
		&UInputAxisDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAxisDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputAxisDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton, Z_Construct_UClass_UInputAxisDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputAxisDelegateBinding.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputAxisDelegateBinding>()
	{
		return UInputAxisDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisDelegateBinding);
	UInputAxisDelegateBinding::~UInputAxisDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintInputAxisDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_Statics::NewStructOps, TEXT("BlueprintInputAxisDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintInputAxisDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintInputAxisDelegateBinding), 3242696838U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputAxisDelegateBinding, UInputAxisDelegateBinding::StaticClass, TEXT("UInputAxisDelegateBinding"), &Z_Registration_Info_UClass_UInputAxisDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAxisDelegateBinding), 3471072178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_742977128(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_InputAxisDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
