// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_AnimEvalRichCurve.h"
#include "Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimEvalRichCurve() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimEvalRichCurve>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_AnimEvalRichCurve cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve;
class UScriptStruct* FRigUnit_AnimEvalRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AnimEvalRichCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimEvalRichCurve_Execute;
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("Curve"), TEXT("FRuntimeFloatCurve"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("SourceMinimum"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("SourceMaximum"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("TargetMinimum"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("TargetMaximum"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_AnimEvalRichCurve_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimEvalRichCurve::Execute"), &FRigUnit_AnimEvalRichCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.OuterSingleton, Arguments_FRigUnit_AnimEvalRichCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AnimEvalRichCurve>()
{
	return FRigUnit_AnimEvalRichCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Evaluates the provided curve. Values are normalized between 0 and 1\n */" },
		{ "DisplayName", "Evaluate Curve" },
		{ "Keywords", "Curve,Profile" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
		{ "ToolTip", "Evaluates the provided curve. Values are normalized between 0 and 1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimEvalRichCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Curve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMinimum = { "SourceMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, SourceMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMaximum = { "SourceMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, SourceMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMinimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMinimum = { "TargetMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, TargetMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMaximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMaximum = { "TargetMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, TargetMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEvalRichCurve.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimEvalRichCurve, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_SourceMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_TargetMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_AnimEvalRichCurve",
		sizeof(FRigUnit_AnimEvalRichCurve),
		alignof(FRigUnit_AnimEvalRichCurve),
		Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve.InnerSingleton;
	}

void FRigUnit_AnimEvalRichCurve::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Curve,
		SourceMinimum,
		SourceMaximum,
		TargetMinimum,
		TargetMaximum,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEvalRichCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEvalRichCurve_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimEvalRichCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimEvalRichCurve_Statics::NewStructOps, TEXT("RigUnit_AnimEvalRichCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimEvalRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimEvalRichCurve), 1475227734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEvalRichCurve_h_1811137324(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEvalRichCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEvalRichCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
