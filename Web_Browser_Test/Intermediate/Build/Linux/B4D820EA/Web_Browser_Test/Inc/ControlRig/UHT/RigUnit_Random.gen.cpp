// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Random() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_RandomFloat>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_RandomFloat cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat;
class UScriptStruct* FRigUnit_RandomFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RandomFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RandomFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RandomFloat_Execute;
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Seed"), TEXT("int32"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("LastResult"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("LastSeed"), TEXT("int32"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("BaseSeed"), TEXT("int32"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		Arguments_FRigUnit_RandomFloat_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RandomFloat::Execute"), &FRigUnit_RandomFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.OuterSingleton, Arguments_FRigUnit_RandomFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RandomFloat>()
{
	return FRigUnit_RandomFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n * Generates a random float between a min and a max\n */" },
		{ "DisplayName", "Random (Float)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "TemplateName", "Random" },
		{ "ToolTip", "Generates a random float between a min and a max" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RandomFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration at which the number won't change.\n\x09 * Use 0 for a different number every time.\n\x09 * A negative number (for ex: -1) results in an infinite duration.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "ToolTip", "The duration at which the number won't change.\nUse 0 for a different number every time.\nA negative number (for ex: -1) results in an infinite duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, LastResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastSeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastSeed = { "LastSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, LastSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_BaseSeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_BaseSeed = { "BaseSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, BaseSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_BaseSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_BaseSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomFloat, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_TimeLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_LastSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_BaseSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewProp_TimeLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_RandomFloat",
		sizeof(FRigUnit_RandomFloat),
		alignof(FRigUnit_RandomFloat),
		Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat.InnerSingleton;
	}

void FRigUnit_RandomFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Seed,
		Minimum,
		Maximum,
		Duration,
		Result,
		LastResult,
		LastSeed,
		BaseSeed,
		TimeLeft,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_RandomVector>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_RandomVector cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_RandomVector;
class UScriptStruct* FRigUnit_RandomVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RandomVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_RandomVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_RandomVector_Execute;
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Seed"), TEXT("int32"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("LastResult"), TEXT("FVector"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("LastSeed"), TEXT("int32"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("BaseSeed"), TEXT("int32"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("TimeLeft"), TEXT("float"));
		Arguments_FRigUnit_RandomVector_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_RandomVector::Execute"), &FRigUnit_RandomVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.OuterSingleton, Arguments_FRigUnit_RandomVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_RandomVector>()
{
	return FRigUnit_RandomVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Random" },
		{ "Comment", "/**\n * Generates a random vector between a min and a max\n */" },
		{ "DisplayName", "Random (Vector)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "TemplateName", "Random" },
		{ "ToolTip", "Generates a random vector between a min and a max" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_RandomVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, Seed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The duration at which the number won't change.\n\x09 * Use 0 for a different number every time.\n\x09 * A negative number (for ex: -1) results in an infinite duration.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "ToolTip", "The duration at which the number won't change.\nUse 0 for a different number every time.\nA negative number (for ex: -1) results in an infinite duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastResult_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, LastResult), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastSeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastSeed = { "LastSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, LastSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_BaseSeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_BaseSeed = { "BaseSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, BaseSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_BaseSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_BaseSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_RandomVector, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_TimeLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_LastSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_BaseSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewProp_TimeLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_RandomVector",
		sizeof(FRigUnit_RandomVector),
		alignof(FRigUnit_RandomVector),
		Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_RandomVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_RandomVector.InnerSingleton;
	}

void FRigUnit_RandomVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Seed,
		Minimum,
		Maximum,
		Duration,
		Result,
		LastResult,
		LastSeed,
		BaseSeed,
		TimeLeft,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_RandomFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics::NewStructOps, TEXT("RigUnit_RandomFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_RandomFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RandomFloat), 2618093773U) },
		{ FRigUnit_RandomVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics::NewStructOps, TEXT("RigUnit_RandomVector"), &Z_Registration_Info_UScriptStruct_RigUnit_RandomVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_RandomVector), 2871998574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_3871768794(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
