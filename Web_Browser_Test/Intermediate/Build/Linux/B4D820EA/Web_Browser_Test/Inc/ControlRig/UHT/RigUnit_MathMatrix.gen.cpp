// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathMatrix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathMatrix() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathMatrixBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathMatrixBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase;
class UScriptStruct* FRigUnit_MathMatrixBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixBase>()
{
	return FRigUnit_MathMatrixBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Matrix" },
		{ "MenuDescSuffix", "(Matrix)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathMatrixBase",
		sizeof(FRigUnit_MathMatrixBase),
		alignof(FRigUnit_MathMatrixBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathMatrixUnaryOp>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixUnaryOp cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp;
class UScriptStruct* FRigUnit_MathMatrixUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixUnaryOp>()
{
	return FRigUnit_MathMatrixUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixUnaryOp, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixUnaryOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixUnaryOp",
		sizeof(FRigUnit_MathMatrixUnaryOp),
		alignof(FRigUnit_MathMatrixUnaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathMatrixBinaryOp>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixBinaryOp cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp;
class UScriptStruct* FRigUnit_MathMatrixBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixBinaryOp>()
{
	return FRigUnit_MathMatrixBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryOp, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryOp, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixBinaryOp",
		sizeof(FRigUnit_MathMatrixBinaryOp),
		alignof(FRigUnit_MathMatrixBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathMatrixBinaryAggregateOp>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixBinaryAggregateOp cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp;
class UScriptStruct* FRigUnit_MathMatrixBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixBinaryAggregateOp>()
{
	return FRigUnit_MathMatrixBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryAggregateOp, A), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryAggregateOp, B), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixBinaryAggregateOp",
		sizeof(FRigUnit_MathMatrixBinaryAggregateOp),
		alignof(FRigUnit_MathMatrixBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathMatrixToTransform>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixToTransform cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform;
class UScriptStruct* FRigUnit_MathMatrixToTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixToTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixToTransform_Execute;
		Arguments_FRigUnit_MathMatrixToTransform_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixToTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathMatrixToTransform_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixToTransform::Execute"), &FRigUnit_MathMatrixToTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.OuterSingleton, Arguments_FRigUnit_MathMatrixToTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixToTransform>()
{
	return FRigUnit_MathMatrixToTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Makes a transform from a matrix\n*/" },
		{ "DisplayName", "To Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a transform from a matrix" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixToTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToTransform, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixToTransform",
		sizeof(FRigUnit_MathMatrixToTransform),
		alignof(FRigUnit_MathMatrixToTransform),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform.InnerSingleton;
	}

void FRigUnit_MathMatrixToTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathMatrixFromTransform>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixFromTransform cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform;
class UScriptStruct* FRigUnit_MathMatrixFromTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixFromTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixFromTransform_Execute;
		Arguments_FRigUnit_MathMatrixFromTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_MathMatrixFromTransform_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixFromTransform_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixFromTransform::Execute"), &FRigUnit_MathMatrixFromTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.OuterSingleton, Arguments_FRigUnit_MathMatrixFromTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixFromTransform>()
{
	return FRigUnit_MathMatrixFromTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a matrix from a transform\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "ToolTip", "Makes a matrix from a transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixFromTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromTransform, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixFromTransform",
		sizeof(FRigUnit_MathMatrixFromTransform),
		alignof(FRigUnit_MathMatrixFromTransform),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform.InnerSingleton;
	}

void FRigUnit_MathMatrixFromTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Transform,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathMatrixFromTransformV2>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixFromTransformV2 cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2;
class UScriptStruct* FRigUnit_MathMatrixFromTransformV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixFromTransformV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixFromTransformV2_Execute;
		Arguments_FRigUnit_MathMatrixFromTransformV2_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_MathMatrixFromTransformV2_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixFromTransformV2_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixFromTransformV2::Execute"), &FRigUnit_MathMatrixFromTransformV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.OuterSingleton, Arguments_FRigUnit_MathMatrixFromTransformV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixFromTransformV2>()
{
	return FRigUnit_MathMatrixFromTransformV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a matrix from a transform\n */" },
		{ "DisplayName", "From Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a matrix from a transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixFromTransformV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromTransformV2, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromTransformV2, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixFromTransformV2",
		sizeof(FRigUnit_MathMatrixFromTransformV2),
		alignof(FRigUnit_MathMatrixFromTransformV2),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2.InnerSingleton;
	}

void FRigUnit_MathMatrixFromTransformV2::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathMatrixToVectors>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixToVectors cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors;
class UScriptStruct* FRigUnit_MathMatrixToVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixToVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixToVectors_Execute;
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("Origin"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("X"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("Y"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("Z"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixToVectors_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixToVectors::Execute"), &FRigUnit_MathMatrixToVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.OuterSingleton, Arguments_FRigUnit_MathMatrixToVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixToVectors>()
{
	return FRigUnit_MathMatrixToVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts the matrix to its vectors\n */" },
		{ "DisplayName", "To Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "ToolTip", "Converts the matrix to its vectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixToVectors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToVectors, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToVectors, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToVectors, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToVectors, Y), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixToVectors, Z), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixToVectors",
		sizeof(FRigUnit_MathMatrixToVectors),
		alignof(FRigUnit_MathMatrixToVectors),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors.InnerSingleton;
	}

void FRigUnit_MathMatrixToVectors::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Origin,
		X,
		Y,
		Z,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathMatrixFromVectors>() == std::is_polymorphic<FRigUnit_MathMatrixBase>(), "USTRUCT FRigUnit_MathMatrixFromVectors cannot be polymorphic unless super FRigUnit_MathMatrixBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors;
class UScriptStruct* FRigUnit_MathMatrixFromVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixFromVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixFromVectors_Execute;
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("Origin"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("X"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("Y"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("Z"), TEXT("FVector"));
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixFromVectors_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixFromVectors::Execute"), &FRigUnit_MathMatrixFromVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.OuterSingleton, Arguments_FRigUnit_MathMatrixFromVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixFromVectors>()
{
	return FRigUnit_MathMatrixFromVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Makes a matrix from its vectors\n*/" },
		{ "DisplayName", "From Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "ToolTip", "Makes a matrix from its vectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixFromVectors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromVectors, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromVectors, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromVectors, Y), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromVectors, Z), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathMatrixFromVectors, Result), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase,
		&NewStructOps,
		"RigUnit_MathMatrixFromVectors",
		sizeof(FRigUnit_MathMatrixFromVectors),
		alignof(FRigUnit_MathMatrixFromVectors),
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors.InnerSingleton;
	}

void FRigUnit_MathMatrixFromVectors::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Origin,
		X,
		Y,
		Z,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathMatrixMul>() == std::is_polymorphic<FRigUnit_MathMatrixBinaryAggregateOp>(), "USTRUCT FRigUnit_MathMatrixMul cannot be polymorphic unless super FRigUnit_MathMatrixBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul;
class UScriptStruct* FRigUnit_MathMatrixMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixMul_Execute;
		Arguments_FRigUnit_MathMatrixMul_Execute.Emplace(TEXT("A"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixMul_Execute.Emplace(TEXT("B"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixMul_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixMul_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixMul::Execute"), &FRigUnit_MathMatrixMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.OuterSingleton, Arguments_FRigUnit_MathMatrixMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixMul>()
{
	return FRigUnit_MathMatrixMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*,Global" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp,
		&NewStructOps,
		"RigUnit_MathMatrixMul",
		sizeof(FRigUnit_MathMatrixMul),
		alignof(FRigUnit_MathMatrixMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul.InnerSingleton;
	}

void FRigUnit_MathMatrixMul::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathMatrixInverse>() == std::is_polymorphic<FRigUnit_MathMatrixUnaryOp>(), "USTRUCT FRigUnit_MathMatrixInverse cannot be polymorphic unless super FRigUnit_MathMatrixUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse;
class UScriptStruct* FRigUnit_MathMatrixInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMatrixInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathMatrixInverse_Execute;
		Arguments_FRigUnit_MathMatrixInverse_Execute.Emplace(TEXT("Value"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixInverse_Execute.Emplace(TEXT("Result"), TEXT("FMatrix"));
		Arguments_FRigUnit_MathMatrixInverse_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathMatrixInverse::Execute"), &FRigUnit_MathMatrixInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.OuterSingleton, Arguments_FRigUnit_MathMatrixInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMatrixInverse>()
{
	return FRigUnit_MathMatrixInverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the inverse value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathMatrix.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the inverse value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMatrixInverse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp,
		&NewStructOps,
		"RigUnit_MathMatrixInverse",
		sizeof(FRigUnit_MathMatrixInverse),
		alignof(FRigUnit_MathMatrixInverse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse.InnerSingleton;
	}

void FRigUnit_MathMatrixInverse::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathMatrixBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics::NewStructOps, TEXT("RigUnit_MathMatrixBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixBase), 1098328260U) },
		{ FRigUnit_MathMatrixUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics::NewStructOps, TEXT("RigUnit_MathMatrixUnaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixUnaryOp), 678104270U) },
		{ FRigUnit_MathMatrixBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathMatrixBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixBinaryOp), 3662677909U) },
		{ FRigUnit_MathMatrixBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryAggregateOp_Statics::NewStructOps, TEXT("RigUnit_MathMatrixBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixBinaryAggregateOp), 4128365462U) },
		{ FRigUnit_MathMatrixToTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics::NewStructOps, TEXT("RigUnit_MathMatrixToTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixToTransform), 2500014056U) },
		{ FRigUnit_MathMatrixFromTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics::NewStructOps, TEXT("RigUnit_MathMatrixFromTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixFromTransform), 1278491483U) },
		{ FRigUnit_MathMatrixFromTransformV2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransformV2_Statics::NewStructOps, TEXT("RigUnit_MathMatrixFromTransformV2"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromTransformV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixFromTransformV2), 498997947U) },
		{ FRigUnit_MathMatrixToVectors::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics::NewStructOps, TEXT("RigUnit_MathMatrixToVectors"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixToVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixToVectors), 1045516527U) },
		{ FRigUnit_MathMatrixFromVectors::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics::NewStructOps, TEXT("RigUnit_MathMatrixFromVectors"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixFromVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixFromVectors), 1375198467U) },
		{ FRigUnit_MathMatrixMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics::NewStructOps, TEXT("RigUnit_MathMatrixMul"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixMul), 1223948109U) },
		{ FRigUnit_MathMatrixInverse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics::NewStructOps, TEXT("RigUnit_MathMatrixInverse"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMatrixInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMatrixInverse), 4238003800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_305661834(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
