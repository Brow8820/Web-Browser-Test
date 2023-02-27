// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_Timeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Timeline() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Timeline();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeLoop();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_Timeline>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_Timeline cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Timeline;
class UScriptStruct* FRigUnit_Timeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Timeline, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Timeline"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Timeline_Execute;
		Arguments_FRigUnit_Timeline_Execute.Emplace(TEXT("Speed"), TEXT("float"));
		Arguments_FRigUnit_Timeline_Execute.Emplace(TEXT("Time"), TEXT("float"));
		Arguments_FRigUnit_Timeline_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("float"));
		Arguments_FRigUnit_Timeline_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Timeline::Execute"), &FRigUnit_Timeline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton, Arguments_FRigUnit_Timeline_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Timeline>()
{
	return FRigUnit_Timeline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Accumulate" },
		{ "Comment", "/**\n * Simulates a time value - can act as a timeline playing back\n */" },
		{ "DisplayName", "Accumulated Time" },
		{ "Keywords", "Playback,Pause,Timeline" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "ToolTip", "Simulates a time value - can act as a timeline playing back" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Timeline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Timeline, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Timeline, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Timeline, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_Timeline",
		sizeof(FRigUnit_Timeline),
		alignof(FRigUnit_Timeline),
		Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Timeline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton;
	}

void FRigUnit_Timeline::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Speed,
		Time,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_TimeLoop>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_TimeLoop cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop;
class UScriptStruct* FRigUnit_TimeLoop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TimeLoop, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TimeLoop"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TimeLoop_Execute;
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Speed"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Duration"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Normalize"), TEXT("bool"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Absolute"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Relative"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("FlipFlop"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Even"), TEXT("bool"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("AccumulatedAbsolute"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("AccumulatedRelative"), TEXT("float"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("NumIterations"), TEXT("int32"));
		Arguments_FRigUnit_TimeLoop_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TimeLoop::Execute"), &FRigUnit_TimeLoop::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.OuterSingleton, Arguments_FRigUnit_TimeLoop_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TimeLoop>()
{
	return FRigUnit_TimeLoop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normalize_MetaData[];
#endif
		static void NewProp_Normalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Normalize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absolute_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Absolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Relative_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Relative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipFlop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipFlop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Even_MetaData[];
#endif
		static void NewProp_Even_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Even;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedAbsolute_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedRelative_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedRelative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Accumulate" },
		{ "Comment", "/**\n * Simulates a time value - and outputs loop information\n */" },
		{ "DisplayName", "Time Loop" },
		{ "Keywords", "Playback,Pause,Timeline" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "ToolTip", "Simulates a time value - and outputs loop information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TimeLoop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the duration of a single loop in seconds\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "ToolTip", "the duration of a single loop in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if set to true the output relative and flipflop\n// will be normalized over the duration.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "ToolTip", "if set to true the output relative and flipflop\nwill be normalized over the duration." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize_SetBit(void* Obj)
	{
		((FRigUnit_TimeLoop*)Obj)->Normalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize = { "Normalize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TimeLoop), &Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Absolute_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the overall time in seconds\n" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
		{ "ToolTip", "the overall time in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Absolute = { "Absolute", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, Absolute), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Absolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Absolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Relative_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the relative time in seconds (within the loop)\n" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
		{ "ToolTip", "the relative time in seconds (within the loop)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Relative = { "Relative", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, Relative), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Relative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Relative_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_FlipFlop_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the relative time in seconds (within the loop),\n// going from 0 to duration and then back from duration to 0,\n// or 0 to 1 and 1 to 0 if Normalize is turned on\n" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
		{ "ToolTip", "the relative time in seconds (within the loop),\ngoing from 0 to duration and then back from duration to 0,\nor 0 to 1 and 1 to 0 if Normalize is turned on" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_FlipFlop = { "FlipFlop", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, FlipFlop), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_FlipFlop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_FlipFlop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// true if the iteration of the loop is even\n" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
		{ "ToolTip", "true if the iteration of the loop is even" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even_SetBit(void* Obj)
	{
		((FRigUnit_TimeLoop*)Obj)->Even = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even = { "Even", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TimeLoop), &Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedAbsolute_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedAbsolute = { "AccumulatedAbsolute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, AccumulatedAbsolute), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedRelative_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedRelative = { "AccumulatedRelative", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, AccumulatedRelative), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedRelative_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_NumIterations_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TimeLoop, NumIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_NumIterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Normalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Absolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Relative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_FlipFlop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_Even,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_AccumulatedRelative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewProp_NumIterations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_TimeLoop",
		sizeof(FRigUnit_TimeLoop),
		alignof(FRigUnit_TimeLoop),
		Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeLoop()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop.InnerSingleton;
	}

void FRigUnit_TimeLoop::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Speed,
		Duration,
		Normalize,
		Absolute,
		Relative,
		FlipFlop,
		Even,
		AccumulatedAbsolute,
		AccumulatedRelative,
		NumIterations,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_Timeline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewStructOps, TEXT("RigUnit_Timeline"), &Z_Registration_Info_UScriptStruct_RigUnit_Timeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Timeline), 3228167402U) },
		{ FRigUnit_TimeLoop::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics::NewStructOps, TEXT("RigUnit_TimeLoop"), &Z_Registration_Info_UScriptStruct_RigUnit_TimeLoop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TimeLoop), 2307556598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_2016117719(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
