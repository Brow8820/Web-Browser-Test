// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputSubsystems() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UFunction* Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate that will be called when control mappings have been rebuilt this frame. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "A delegate that will be called when control mappings have been rebuilt this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, nullptr, "OnControlMappingsRebuilt__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEnhancedInputLocalPlayerSubsystem::StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputLocalPlayerSubsystem);
	UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister()
	{
		return UEnhancedInputLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlMappingsRebuiltDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ControlMappingsRebuiltDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature, "OnControlMappingsRebuilt__DelegateSignature" }, // 1891501157
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Per local player input subsystem\n" },
		{ "IncludePath", "EnhancedInputSubsystems.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Per local player input subsystem" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Blueprint Event that is called at the end of any frame that Control Mappings have been rebuilt.\n\x09 */" },
		{ "DisplayName", "OnControlMappingsRebuilt" },
		{ "ModuleRelativePath", "Public/EnhancedInputSubsystems.h" },
		{ "ToolTip", "Blueprint Event that is called at the end of any frame that Control Mappings have been rebuilt." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate = { "ControlMappingsRebuiltDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputLocalPlayerSubsystem, ControlMappingsRebuiltDelegate), Z_Construct_UDelegateFunction_UEnhancedInputLocalPlayerSubsystem_OnControlMappingsRebuilt__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate_MetaData)) }; // 1891501157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::NewProp_ControlMappingsRebuiltDelegate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputLocalPlayerSubsystem, IEnhancedInputSubsystemInterface), false },  // 1085429372
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputLocalPlayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams = {
		&UEnhancedInputLocalPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UEnhancedInputLocalPlayerSubsystem>()
	{
		return UEnhancedInputLocalPlayerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputLocalPlayerSubsystem);
	UEnhancedInputLocalPlayerSubsystem::~UEnhancedInputLocalPlayerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, UEnhancedInputLocalPlayerSubsystem::StaticClass, TEXT("UEnhancedInputLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputLocalPlayerSubsystem), 2609152218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_3587881424(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
