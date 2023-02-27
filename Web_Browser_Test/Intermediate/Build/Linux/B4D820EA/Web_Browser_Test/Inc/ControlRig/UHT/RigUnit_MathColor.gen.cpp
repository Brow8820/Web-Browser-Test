// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathColor() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorAdd();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorSub();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathColorBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathColorBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase;
class UScriptStruct* FRigUnit_MathColorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorBase>()
{
	return FRigUnit_MathColorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Color" },
		{ "MenuDescSuffix", "(Color)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathColorBase",
		sizeof(FRigUnit_MathColorBase),
		alignof(FRigUnit_MathColorBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathColorBinaryOp>() == std::is_polymorphic<FRigUnit_MathColorBase>(), "USTRUCT FRigUnit_MathColorBinaryOp cannot be polymorphic unless super FRigUnit_MathColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp;
class UScriptStruct* FRigUnit_MathColorBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorBinaryOp>()
{
	return FRigUnit_MathColorBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryOp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryOp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryOp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBase,
		&NewStructOps,
		"RigUnit_MathColorBinaryOp",
		sizeof(FRigUnit_MathColorBinaryOp),
		alignof(FRigUnit_MathColorBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathColorBinaryAggregateOp>() == std::is_polymorphic<FRigUnit_MathColorBase>(), "USTRUCT FRigUnit_MathColorBinaryAggregateOp cannot be polymorphic unless super FRigUnit_MathColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp;
class UScriptStruct* FRigUnit_MathColorBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorBinaryAggregateOp>()
{
	return FRigUnit_MathColorBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryAggregateOp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryAggregateOp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBase,
		&NewStructOps,
		"RigUnit_MathColorBinaryAggregateOp",
		sizeof(FRigUnit_MathColorBinaryAggregateOp),
		alignof(FRigUnit_MathColorBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathColorFromFloat>() == std::is_polymorphic<FRigUnit_MathColorBase>(), "USTRUCT FRigUnit_MathColorFromFloat cannot be polymorphic unless super FRigUnit_MathColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat;
class UScriptStruct* FRigUnit_MathColorFromFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorFromFloat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathColorFromFloat_Execute;
		Arguments_FRigUnit_MathColorFromFloat_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_MathColorFromFloat_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorFromFloat_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathColorFromFloat::Execute"), &FRigUnit_MathColorFromFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.OuterSingleton, Arguments_FRigUnit_MathColorFromFloat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorFromFloat>()
{
	return FRigUnit_MathColorFromFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a vector from a single float\n */" },
		{ "DisplayName", "From Float" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a vector from a single float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorFromFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorFromFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorFromFloat, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBase,
		&NewStructOps,
		"RigUnit_MathColorFromFloat",
		sizeof(FRigUnit_MathColorFromFloat),
		alignof(FRigUnit_MathColorFromFloat),
		Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat.InnerSingleton;
	}

void FRigUnit_MathColorFromFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathColorAdd>() == std::is_polymorphic<FRigUnit_MathColorBinaryAggregateOp>(), "USTRUCT FRigUnit_MathColorAdd cannot be polymorphic unless super FRigUnit_MathColorBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd;
class UScriptStruct* FRigUnit_MathColorAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorAdd, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorAdd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathColorAdd_Execute;
		Arguments_FRigUnit_MathColorAdd_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorAdd_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorAdd_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorAdd_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathColorAdd::Execute"), &FRigUnit_MathColorAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.OuterSingleton, Arguments_FRigUnit_MathColorAdd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorAdd>()
{
	return FRigUnit_MathColorAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sum of the two values\n */" },
		{ "DisplayName", "Add" },
		{ "Keywords", "Sum,+" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "TemplateName", "Add" },
		{ "ToolTip", "Returns the sum of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorAdd>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp,
		&NewStructOps,
		"RigUnit_MathColorAdd",
		sizeof(FRigUnit_MathColorAdd),
		alignof(FRigUnit_MathColorAdd),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd.InnerSingleton;
	}

void FRigUnit_MathColorAdd::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathColorSub>() == std::is_polymorphic<FRigUnit_MathColorBinaryOp>(), "USTRUCT FRigUnit_MathColorSub cannot be polymorphic unless super FRigUnit_MathColorBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub;
class UScriptStruct* FRigUnit_MathColorSub::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorSub, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorSub"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathColorSub_Execute;
		Arguments_FRigUnit_MathColorSub_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorSub_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorSub_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorSub_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathColorSub::Execute"), &FRigUnit_MathColorSub::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.OuterSingleton, Arguments_FRigUnit_MathColorSub_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorSub>()
{
	return FRigUnit_MathColorSub::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the difference of the two values\n */" },
		{ "DisplayName", "Subtract" },
		{ "Keywords", "-" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "TemplateName", "Subtract" },
		{ "ToolTip", "Returns the difference of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorSub>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp,
		&NewStructOps,
		"RigUnit_MathColorSub",
		sizeof(FRigUnit_MathColorSub),
		alignof(FRigUnit_MathColorSub),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorSub()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub.InnerSingleton;
	}

void FRigUnit_MathColorSub::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathColorMul>() == std::is_polymorphic<FRigUnit_MathColorBinaryAggregateOp>(), "USTRUCT FRigUnit_MathColorMul cannot be polymorphic unless super FRigUnit_MathColorBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul;
class UScriptStruct* FRigUnit_MathColorMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathColorMul_Execute;
		Arguments_FRigUnit_MathColorMul_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorMul_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorMul_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorMul_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathColorMul::Execute"), &FRigUnit_MathColorMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.OuterSingleton, Arguments_FRigUnit_MathColorMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorMul>()
{
	return FRigUnit_MathColorMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp,
		&NewStructOps,
		"RigUnit_MathColorMul",
		sizeof(FRigUnit_MathColorMul),
		alignof(FRigUnit_MathColorMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul.InnerSingleton;
	}

void FRigUnit_MathColorMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathColorLerp>() == std::is_polymorphic<FRigUnit_MathColorBase>(), "USTRUCT FRigUnit_MathColorLerp cannot be polymorphic unless super FRigUnit_MathColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp;
class UScriptStruct* FRigUnit_MathColorLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathColorLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathColorLerp_Execute;
		Arguments_FRigUnit_MathColorLerp_Execute.Emplace(TEXT("A"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorLerp_Execute.Emplace(TEXT("B"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorLerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigUnit_MathColorLerp_Execute.Emplace(TEXT("Result"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathColorLerp_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathColorLerp::Execute"), &FRigUnit_MathColorLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.OuterSingleton, Arguments_FRigUnit_MathColorLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathColorLerp>()
{
	return FRigUnit_MathColorLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathColorLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorLerp, A), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorLerp, B), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorLerp, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathColor.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathColorLerp, Result), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathColorBase,
		&NewStructOps,
		"RigUnit_MathColorLerp",
		sizeof(FRigUnit_MathColorLerp),
		alignof(FRigUnit_MathColorLerp),
		Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathColorLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp.InnerSingleton;
	}

void FRigUnit_MathColorLerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		T,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathColorBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics::NewStructOps, TEXT("RigUnit_MathColorBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorBase), 1593091635U) },
		{ FRigUnit_MathColorBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathColorBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorBinaryOp), 705911526U) },
		{ FRigUnit_MathColorBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryAggregateOp_Statics::NewStructOps, TEXT("RigUnit_MathColorBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorBinaryAggregateOp), 1601988959U) },
		{ FRigUnit_MathColorFromFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics::NewStructOps, TEXT("RigUnit_MathColorFromFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorFromFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorFromFloat), 2510522377U) },
		{ FRigUnit_MathColorAdd::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics::NewStructOps, TEXT("RigUnit_MathColorAdd"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorAdd), 3179114125U) },
		{ FRigUnit_MathColorSub::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics::NewStructOps, TEXT("RigUnit_MathColorSub"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorSub, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorSub), 2845402477U) },
		{ FRigUnit_MathColorMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics::NewStructOps, TEXT("RigUnit_MathColorMul"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorMul), 4174183084U) },
		{ FRigUnit_MathColorLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics::NewStructOps, TEXT("RigUnit_MathColorLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathColorLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathColorLerp), 1899177388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_141099057(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
