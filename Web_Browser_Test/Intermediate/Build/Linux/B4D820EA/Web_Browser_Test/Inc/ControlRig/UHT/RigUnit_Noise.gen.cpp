// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_Noise.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Noise() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseDouble();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseVector2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_NoiseFloat>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_NoiseFloat cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat;
class UScriptStruct* FRigUnit_NoiseFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NoiseFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_NoiseFloat_Execute;
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Speed"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Frequency"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Time"), TEXT("float"));
		Arguments_FRigUnit_NoiseFloat_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NoiseFloat::Execute"), &FRigUnit_NoiseFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.OuterSingleton, Arguments_FRigUnit_NoiseFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NoiseFloat>()
{
	return FRigUnit_NoiseFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a float through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Float)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a float through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NoiseFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseFloat, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_NoiseFloat",
		sizeof(FRigUnit_NoiseFloat),
		alignof(FRigUnit_NoiseFloat),
		Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat.InnerSingleton;
	}

void FRigUnit_NoiseFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_NoiseDouble>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_NoiseDouble cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble;
class UScriptStruct* FRigUnit_NoiseDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NoiseDouble"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_NoiseDouble_Execute;
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Value"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Speed"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Frequency"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Minimum"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Maximum"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Result"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Time"), TEXT("double"));
		Arguments_FRigUnit_NoiseDouble_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NoiseDouble::Execute"), &FRigUnit_NoiseDouble::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.OuterSingleton, Arguments_FRigUnit_NoiseDouble_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NoiseDouble>()
{
	return FRigUnit_NoiseDouble::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a float through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Double)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a float through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NoiseDouble>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseDouble, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_NoiseDouble",
		sizeof(FRigUnit_NoiseDouble),
		alignof(FRigUnit_NoiseDouble),
		Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseDouble()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble.InnerSingleton;
	}

void FRigUnit_NoiseDouble::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_NoiseVector>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_NoiseVector cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector;
class UScriptStruct* FRigUnit_NoiseVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NoiseVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NoiseVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_NoiseVector_Execute;
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Position"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Frequency"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Time"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NoiseVector::Execute"), &FRigUnit_NoiseVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.OuterSingleton, Arguments_FRigUnit_NoiseVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NoiseVector>()
{
	return FRigUnit_NoiseVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a vector through a noise fluctuation process between a min and a max through speed\n */" },
		{ "Deprecated", "5.0.0" },
		{ "DisplayName", "Noise (Vector)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a vector through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NoiseVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Frequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector, Time), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_NoiseVector",
		sizeof(FRigUnit_NoiseVector),
		alignof(FRigUnit_NoiseVector),
		Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector.InnerSingleton;
	}

void FRigUnit_NoiseVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Position,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_NoiseVector2>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_NoiseVector2 cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2;
class UScriptStruct* FRigUnit_NoiseVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NoiseVector2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_NoiseVector2_Execute;
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Speed"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Frequency"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Minimum"), TEXT("double"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Maximum"), TEXT("double"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Time"), TEXT("FVector"));
		Arguments_FRigUnit_NoiseVector2_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NoiseVector2::Execute"), &FRigUnit_NoiseVector2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.OuterSingleton, Arguments_FRigUnit_NoiseVector2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NoiseVector2>()
{
	return FRigUnit_NoiseVector2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Noise" },
		{ "Comment", "/**\n * Generates a vector through a noise fluctuation process between a min and a max through speed\n */" },
		{ "DisplayName", "Noise (Vector)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "TemplateName", "Noise" },
		{ "ToolTip", "Generates a vector through a noise fluctuation process between a min and a max through speed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NoiseVector2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Speed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Frequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_Noise.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_NoiseVector2, Time), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_NoiseVector2",
		sizeof(FRigUnit_NoiseVector2),
		alignof(FRigUnit_NoiseVector2),
		Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NoiseVector2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2.InnerSingleton;
	}

void FRigUnit_NoiseVector2::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Speed,
		Frequency,
		Minimum,
		Maximum,
		Result,
		Time,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_NoiseFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics::NewStructOps, TEXT("RigUnit_NoiseFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_NoiseFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NoiseFloat), 339910261U) },
		{ FRigUnit_NoiseDouble::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics::NewStructOps, TEXT("RigUnit_NoiseDouble"), &Z_Registration_Info_UScriptStruct_RigUnit_NoiseDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NoiseDouble), 3757798287U) },
		{ FRigUnit_NoiseVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics::NewStructOps, TEXT("RigUnit_NoiseVector"), &Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NoiseVector), 41246124U) },
		{ FRigUnit_NoiseVector2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics::NewStructOps, TEXT("RigUnit_NoiseVector2"), &Z_Registration_Info_UScriptStruct_RigUnit_NoiseVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NoiseVector2), 3596607285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_2273127069(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
