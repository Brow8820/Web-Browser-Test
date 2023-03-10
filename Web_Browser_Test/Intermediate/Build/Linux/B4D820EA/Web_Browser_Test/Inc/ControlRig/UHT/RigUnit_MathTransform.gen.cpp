// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathTransform.h"
#include "AnimationCore/Public/EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathTransform() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EBoneGetterSetterMode();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigClampSpatialMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMutableBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathTransformBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathTransformBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase;
class UScriptStruct* FRigUnit_MathTransformBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformBase>()
{
	return FRigUnit_MathTransformBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Transform" },
		{ "MenuDescSuffix", "(Transform)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathTransformBase",
		sizeof(FRigUnit_MathTransformBase),
		alignof(FRigUnit_MathTransformBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathTransformMutableBase>() == std::is_polymorphic<FRigUnit_MathMutableBase>(), "USTRUCT FRigUnit_MathTransformMutableBase cannot be polymorphic unless super FRigUnit_MathMutableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase;
class UScriptStruct* FRigUnit_MathTransformMutableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformMutableBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformMutableBase>()
{
	return FRigUnit_MathTransformMutableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Transform" },
		{ "MenuDescSuffix", "(Transform)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformMutableBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathMutableBase,
		&NewStructOps,
		"RigUnit_MathTransformMutableBase",
		sizeof(FRigUnit_MathTransformMutableBase),
		alignof(FRigUnit_MathTransformMutableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathTransformUnaryOp>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformUnaryOp cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp;
class UScriptStruct* FRigUnit_MathTransformUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformUnaryOp>()
{
	return FRigUnit_MathTransformUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformUnaryOp, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformUnaryOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformUnaryOp",
		sizeof(FRigUnit_MathTransformUnaryOp),
		alignof(FRigUnit_MathTransformUnaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathTransformBinaryOp>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformBinaryOp cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp;
class UScriptStruct* FRigUnit_MathTransformBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformBinaryOp>()
{
	return FRigUnit_MathTransformBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryOp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryOp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformBinaryOp",
		sizeof(FRigUnit_MathTransformBinaryOp),
		alignof(FRigUnit_MathTransformBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathTransformBinaryAggregateOp>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformBinaryAggregateOp cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp;
class UScriptStruct* FRigUnit_MathTransformBinaryAggregateOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformBinaryAggregateOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformBinaryAggregateOp>()
{
	return FRigUnit_MathTransformBinaryAggregateOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformBinaryAggregateOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryAggregateOp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryAggregateOp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformBinaryAggregateOp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformBinaryAggregateOp",
		sizeof(FRigUnit_MathTransformBinaryAggregateOp),
		alignof(FRigUnit_MathTransformBinaryAggregateOp),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathTransformFromEulerTransform>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformFromEulerTransform cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform;
class UScriptStruct* FRigUnit_MathTransformFromEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformFromEulerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformFromEulerTransform_Execute;
		Arguments_FRigUnit_MathTransformFromEulerTransform_Execute.Emplace(TEXT("EulerTransform"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_MathTransformFromEulerTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformFromEulerTransform_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformFromEulerTransform::Execute"), &FRigUnit_MathTransformFromEulerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.OuterSingleton, Arguments_FRigUnit_MathTransformFromEulerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformFromEulerTransform>()
{
	return FRigUnit_MathTransformFromEulerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion based transform from a euler based transform\n */" },
		{ "Deprecated", "5.0.1" },
		{ "DisplayName", "From Euler Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "FromEulerTransform" },
		{ "ToolTip", "Makes a quaternion based transform from a euler based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformFromEulerTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform = { "EulerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromEulerTransform, EulerTransform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform_MetaData)) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromEulerTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_EulerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformFromEulerTransform",
		sizeof(FRigUnit_MathTransformFromEulerTransform),
		alignof(FRigUnit_MathTransformFromEulerTransform),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform.InnerSingleton;
	}

void FRigUnit_MathTransformFromEulerTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		EulerTransform,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformFromEulerTransformV2>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformFromEulerTransformV2 cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2;
class UScriptStruct* FRigUnit_MathTransformFromEulerTransformV2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformFromEulerTransformV2"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformFromEulerTransformV2_Execute;
		Arguments_FRigUnit_MathTransformFromEulerTransformV2_Execute.Emplace(TEXT("Value"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_MathTransformFromEulerTransformV2_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformFromEulerTransformV2_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformFromEulerTransformV2::Execute"), &FRigUnit_MathTransformFromEulerTransformV2::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.OuterSingleton, Arguments_FRigUnit_MathTransformFromEulerTransformV2_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformFromEulerTransformV2>()
{
	return FRigUnit_MathTransformFromEulerTransformV2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion based transform from a euler based transform\n */" },
		{ "DisplayName", "To Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Makes a quaternion based transform from a euler based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformFromEulerTransformV2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromEulerTransformV2, Value), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Value_MetaData)) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromEulerTransformV2, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformFromEulerTransformV2",
		sizeof(FRigUnit_MathTransformFromEulerTransformV2),
		alignof(FRigUnit_MathTransformFromEulerTransformV2),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2.InnerSingleton;
	}

void FRigUnit_MathTransformFromEulerTransformV2::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformToEulerTransform>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformToEulerTransform cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform;
class UScriptStruct* FRigUnit_MathTransformToEulerTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformToEulerTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformToEulerTransform_Execute;
		Arguments_FRigUnit_MathTransformToEulerTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformToEulerTransform_Execute.Emplace(TEXT("Result"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_MathTransformToEulerTransform_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformToEulerTransform::Execute"), &FRigUnit_MathTransformToEulerTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.OuterSingleton, Arguments_FRigUnit_MathTransformToEulerTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformToEulerTransform>()
{
	return FRigUnit_MathTransformToEulerTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves a euler based transform from a quaternion based transform\n */" },
		{ "DisplayName", "To Euler Transform" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Retrieves a euler based transform from a quaternion based transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformToEulerTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformToEulerTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformToEulerTransform, Result), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Result_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformToEulerTransform",
		sizeof(FRigUnit_MathTransformToEulerTransform),
		alignof(FRigUnit_MathTransformToEulerTransform),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform.InnerSingleton;
	}

void FRigUnit_MathTransformToEulerTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformMul>() == std::is_polymorphic<FRigUnit_MathTransformBinaryAggregateOp>(), "USTRUCT FRigUnit_MathTransformMul cannot be polymorphic unless super FRigUnit_MathTransformBinaryAggregateOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul;
class UScriptStruct* FRigUnit_MathTransformMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformMul_Execute;
		Arguments_FRigUnit_MathTransformMul_Execute.Emplace(TEXT("A"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMul_Execute.Emplace(TEXT("B"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMul_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMul_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformMul::Execute"), &FRigUnit_MathTransformMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.OuterSingleton, Arguments_FRigUnit_MathTransformMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformMul>()
{
	return FRigUnit_MathTransformMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*,Global" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp,
		&NewStructOps,
		"RigUnit_MathTransformMul",
		sizeof(FRigUnit_MathTransformMul),
		alignof(FRigUnit_MathTransformMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul.InnerSingleton;
	}

void FRigUnit_MathTransformMul::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathTransformMakeRelative>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformMakeRelative cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative;
class UScriptStruct* FRigUnit_MathTransformMakeRelative::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformMakeRelative"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformMakeRelative_Execute;
		Arguments_FRigUnit_MathTransformMakeRelative_Execute.Emplace(TEXT("Global"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeRelative_Execute.Emplace(TEXT("Parent"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeRelative_Execute.Emplace(TEXT("Local"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeRelative_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformMakeRelative::Execute"), &FRigUnit_MathTransformMakeRelative::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.OuterSingleton, Arguments_FRigUnit_MathTransformMakeRelative_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformMakeRelative>()
{
	return FRigUnit_MathTransformMakeRelative::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the relative local transform within a parent's transform\n */" },
		{ "DisplayName", "Make Relative" },
		{ "Keywords", "Local,Global,Absolute" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Make Relative" },
		{ "ToolTip", "Returns the relative local transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformMakeRelative>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeRelative, Global), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Global_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeRelative, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeRelative, Local), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Local_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Global,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewProp_Local,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformMakeRelative",
		sizeof(FRigUnit_MathTransformMakeRelative),
		alignof(FRigUnit_MathTransformMakeRelative),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative.InnerSingleton;
	}

void FRigUnit_MathTransformMakeRelative::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Global,
		Parent,
		Local,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformMakeAbsolute>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformMakeAbsolute cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute;
class UScriptStruct* FRigUnit_MathTransformMakeAbsolute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformMakeAbsolute"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformMakeAbsolute_Execute;
		Arguments_FRigUnit_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Local"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Parent"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Global"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMakeAbsolute_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformMakeAbsolute::Execute"), &FRigUnit_MathTransformMakeAbsolute::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.OuterSingleton, Arguments_FRigUnit_MathTransformMakeAbsolute_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformMakeAbsolute>()
{
	return FRigUnit_MathTransformMakeAbsolute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Local_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Local;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the absolute global transform within a parent's transform\n */" },
		{ "DisplayName", "Make Absolute" },
		{ "Keywords", "Local,Global,Relative" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Make Absolute" },
		{ "ToolTip", "Returns the absolute global transform within a parent's transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformMakeAbsolute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeAbsolute, Local), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Local_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeAbsolute, Parent), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMakeAbsolute, Global), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Global_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewProp_Global,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformMakeAbsolute",
		sizeof(FRigUnit_MathTransformMakeAbsolute),
		alignof(FRigUnit_MathTransformMakeAbsolute),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute.InnerSingleton;
	}

void FRigUnit_MathTransformMakeAbsolute::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Local,
		Parent,
		Global,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformAccumulateArray>() == std::is_polymorphic<FRigUnit_MathTransformMutableBase>(), "USTRUCT FRigUnit_MathTransformAccumulateArray cannot be polymorphic unless super FRigUnit_MathTransformMutableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray;
class UScriptStruct* FRigUnit_MathTransformAccumulateArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformAccumulateArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformAccumulateArray_Execute;
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("TargetSpace"), TEXT("EBoneGetterSetterMode"));
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("Root"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("ParentIndices"), TEXT("TArray<int32>"));
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("ExecuteContext"), TEXT("FControlRigExecuteContext"));
		Arguments_FRigUnit_MathTransformAccumulateArray_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformAccumulateArray::Execute"), &FRigUnit_MathTransformAccumulateArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.OuterSingleton, Arguments_FRigUnit_MathTransformAccumulateArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformAccumulateArray>()
{
	return FRigUnit_MathTransformAccumulateArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Treats the provided transforms as a chain with global / local transforms, and\n* projects each transform into the target space. Optionally you can provide\n* a custom parent indices array, with which you can represent more than just chains.\n*/" },
		{ "DisplayName", "Make Transform Array Relative" },
		{ "Keywords", "Local,Global,Absolute,Array,Accumulate" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Treats the provided transforms as a chain with global / local transforms, and\nprojects each transform into the target space. Optionally you can provide\na custom parent indices array, with which you can represent more than just chains." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformAccumulateArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformAccumulateArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines the space to project to\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Defines the space to project to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace = { "TargetSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformAccumulateArray, TargetSpace), Z_Construct_UEnum_ControlRig_EBoneGetterSetterMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_MetaData)) }; // 899847808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Provides the parent transform for the root\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Provides the parent transform for the root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformAccumulateArray, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Root_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If this array is the same size as the transforms array the indices will be used\n\x09 * to look up each transform's parent. They are expected to be in order.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "If this array is the same size as the transforms array the indices will be used\nto look up each transform's parent. They are expected to be in order." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformAccumulateArray, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_TargetSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewProp_ParentIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase,
		&NewStructOps,
		"RigUnit_MathTransformAccumulateArray",
		sizeof(FRigUnit_MathTransformAccumulateArray),
		alignof(FRigUnit_MathTransformAccumulateArray),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray.InnerSingleton;
	}

void FRigUnit_MathTransformAccumulateArray::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const int32> ParentIndices_3_Array(ParentIndices);
	
	StaticExecute(
		RigVMExecuteContext,
		Transforms,
		TargetSpace,
		Root,
		ParentIndices_3_Array,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformInverse>() == std::is_polymorphic<FRigUnit_MathTransformUnaryOp>(), "USTRUCT FRigUnit_MathTransformInverse cannot be polymorphic unless super FRigUnit_MathTransformUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse;
class UScriptStruct* FRigUnit_MathTransformInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformInverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformInverse_Execute;
		Arguments_FRigUnit_MathTransformInverse_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformInverse_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformInverse_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformInverse::Execute"), &FRigUnit_MathTransformInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.OuterSingleton, Arguments_FRigUnit_MathTransformInverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformInverse>()
{
	return FRigUnit_MathTransformInverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Inverse" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformInverse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp,
		&NewStructOps,
		"RigUnit_MathTransformInverse",
		sizeof(FRigUnit_MathTransformInverse),
		alignof(FRigUnit_MathTransformInverse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse.InnerSingleton;
	}

void FRigUnit_MathTransformInverse::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformLerp>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformLerp cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp;
class UScriptStruct* FRigUnit_MathTransformLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformLerp_Execute;
		Arguments_FRigUnit_MathTransformLerp_Execute.Emplace(TEXT("A"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformLerp_Execute.Emplace(TEXT("B"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformLerp_Execute.Emplace(TEXT("T"), TEXT("float"));
		Arguments_FRigUnit_MathTransformLerp_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformLerp_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformLerp::Execute"), &FRigUnit_MathTransformLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.OuterSingleton, Arguments_FRigUnit_MathTransformLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformLerp>()
{
	return FRigUnit_MathTransformLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformLerp, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformLerp, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_T_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformLerp, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformLerp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformLerp",
		sizeof(FRigUnit_MathTransformLerp),
		alignof(FRigUnit_MathTransformLerp),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp.InnerSingleton;
	}

void FRigUnit_MathTransformLerp::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathTransformSelectBool>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformSelectBool cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool;
class UScriptStruct* FRigUnit_MathTransformSelectBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformSelectBool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformSelectBool_Execute;
		Arguments_FRigUnit_MathTransformSelectBool_Execute.Emplace(TEXT("Condition"), TEXT("bool"));
		Arguments_FRigUnit_MathTransformSelectBool_Execute.Emplace(TEXT("IfTrue"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformSelectBool_Execute.Emplace(TEXT("IfFalse"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformSelectBool_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformSelectBool_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformSelectBool::Execute"), &FRigUnit_MathTransformSelectBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.OuterSingleton, Arguments_FRigUnit_MathTransformSelectBool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformSelectBool>()
{
	return FRigUnit_MathTransformSelectBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfTrue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfFalse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Return one of the two values based on the condition\n */" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Pick,If" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Select" },
		{ "ToolTip", "Return one of the two values based on the condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformSelectBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FRigUnit_MathTransformSelectBool*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_MathTransformSelectBool), &Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfTrue = { "IfTrue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformSelectBool, IfTrue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfFalse = { "IfFalse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformSelectBool, IfFalse), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformSelectBool, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_IfFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformSelectBool",
		sizeof(FRigUnit_MathTransformSelectBool),
		alignof(FRigUnit_MathTransformSelectBool),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool.InnerSingleton;
	}

void FRigUnit_MathTransformSelectBool::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Condition,
		IfTrue,
		IfFalse,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformRotateVector>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformRotateVector cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector;
class UScriptStruct* FRigUnit_MathTransformRotateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformRotateVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformRotateVector_Execute;
		Arguments_FRigUnit_MathTransformRotateVector_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformRotateVector_Execute.Emplace(TEXT("Vector"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformRotateVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformRotateVector_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformRotateVector::Execute"), &FRigUnit_MathTransformRotateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.OuterSingleton, Arguments_FRigUnit_MathTransformRotateVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformRotateVector>()
{
	return FRigUnit_MathTransformRotateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotates a given vector (direction) by the transform\n */" },
		{ "DisplayName", "Rotate Vector" },
		{ "Keywords", "Transform,Direction,TransformDirection" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Rotate Vector" },
		{ "ToolTip", "Rotates a given vector (direction) by the transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformRotateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformRotateVector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformRotateVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformRotateVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformRotateVector",
		sizeof(FRigUnit_MathTransformRotateVector),
		alignof(FRigUnit_MathTransformRotateVector),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector.InnerSingleton;
	}

void FRigUnit_MathTransformRotateVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Transform,
		Vector,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformTransformVector>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformTransformVector cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector;
class UScriptStruct* FRigUnit_MathTransformTransformVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformTransformVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformTransformVector_Execute;
		Arguments_FRigUnit_MathTransformTransformVector_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformTransformVector_Execute.Emplace(TEXT("Location"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformTransformVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformTransformVector_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformTransformVector::Execute"), &FRigUnit_MathTransformTransformVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.OuterSingleton, Arguments_FRigUnit_MathTransformTransformVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformTransformVector>()
{
	return FRigUnit_MathTransformTransformVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiplies a given vector (location) by the transform\n */" },
		{ "DisplayName", "Transform Location" },
		{ "Keywords", "Multiply" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Multiplies a given vector (location) by the transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformTransformVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformTransformVector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformTransformVector, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformTransformVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformTransformVector",
		sizeof(FRigUnit_MathTransformTransformVector),
		alignof(FRigUnit_MathTransformTransformVector),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector.InnerSingleton;
	}

void FRigUnit_MathTransformTransformVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Transform,
		Location,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformFromSRT>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformFromSRT cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT;
class UScriptStruct* FRigUnit_MathTransformFromSRT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformFromSRT"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformFromSRT_Execute;
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("Location"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("Rotation"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("RotationOrder"), TEXT("EEulerRotationOrder"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("Scale"), TEXT("FVector"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("EulerTransform"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_MathTransformFromSRT_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformFromSRT::Execute"), &FRigUnit_MathTransformFromSRT::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.OuterSingleton, Arguments_FRigUnit_MathTransformFromSRT_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformFromSRT>()
{
	return FRigUnit_MathTransformFromSRT::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Composes a Transform (and Euler Transform) from its components.\n */" },
		{ "DisplayName", "Transform from SRT" },
		{ "Keywords", "EulerTransform,Scale,Rotation,Orientation,Translation,Location" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Composes a Transform (and Euler Transform) from its components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformFromSRT>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_EulerTransform = { "EulerTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformFromSRT, EulerTransform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_EulerTransform_MetaData)) }; // 3672886731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewProp_EulerTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformFromSRT",
		sizeof(FRigUnit_MathTransformFromSRT),
		alignof(FRigUnit_MathTransformFromSRT),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT.InnerSingleton;
	}

void FRigUnit_MathTransformFromSRT::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Location,
		Rotation,
		RotationOrder,
		Scale,
		Transform,
		EulerTransform,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformArrayToSRT>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformArrayToSRT cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT;
class UScriptStruct* FRigUnit_MathTransformArrayToSRT::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformArrayToSRT"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformArrayToSRT_Execute;
		Arguments_FRigUnit_MathTransformArrayToSRT_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_MathTransformArrayToSRT_Execute.Emplace(TEXT("Translations"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_MathTransformArrayToSRT_Execute.Emplace(TEXT("Rotations"), TEXT("TArray<FQuat>"));
		Arguments_FRigUnit_MathTransformArrayToSRT_Execute.Emplace(TEXT("Scales"), TEXT("TArray<FVector>"));
		Arguments_FRigUnit_MathTransformArrayToSRT_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformArrayToSRT::Execute"), &FRigUnit_MathTransformArrayToSRT::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.OuterSingleton, Arguments_FRigUnit_MathTransformArrayToSRT_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformArrayToSRT>()
{
	return FRigUnit_MathTransformArrayToSRT::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Translations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scales_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scales_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scales;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Decomposes a Transform Array to its components.\n */" },
		{ "DisplayName", "Transform Array to SRT" },
		{ "Keywords", "EulerTransform,Scale,Rotation,Orientation,Translation,Location" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "Decomposes a Transform Array to its components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformArrayToSRT>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformArrayToSRT, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations_Inner = { "Translations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations = { "Translations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformArrayToSRT, Translations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformArrayToSRT, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales_Inner = { "Scales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales = { "Scales", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformArrayToSRT, Scales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Translations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewProp_Scales,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformArrayToSRT",
		sizeof(FRigUnit_MathTransformArrayToSRT),
		alignof(FRigUnit_MathTransformArrayToSRT),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT.InnerSingleton;
	}

void FRigUnit_MathTransformArrayToSRT::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FTransform> Transforms_0_Array(Transforms);
	
	StaticExecute(
		RigVMExecuteContext,
		Transforms_0_Array,
		Translations,
		Rotations,
		Scales,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformClampSpatially>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformClampSpatially cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially;
class UScriptStruct* FRigUnit_MathTransformClampSpatially::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformClampSpatially"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformClampSpatially_Execute;
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Axis"), TEXT("EAxis::Type"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Type"), TEXT("EControlRigClampSpatialMode::Type"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Space"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("DebugColor"), TEXT("FLinearColor"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("DebugThickness"), TEXT("float"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformClampSpatially_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformClampSpatially::Execute"), &FRigUnit_MathTransformClampSpatially::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.OuterSingleton, Arguments_FRigUnit_MathTransformClampSpatially_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformClampSpatially>()
{
	return FRigUnit_MathTransformClampSpatially::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Clamps a position using a plane collision, cylindric collision or spherical collision.\n */" },
		{ "DisplayName", "Clamp Spatially" },
		{ "Keywords", "Collide,Collision" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "ClampSpatially" },
		{ "ToolTip", "Clamps a position using a plane collision, cylindric collision or spherical collision." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformClampSpatially>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Axis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Type), Z_Construct_UEnum_ControlRig_EControlRigClampSpatialMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Type_MetaData)) }; // 3710879811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The space this spatial clamp happens within.\n// The input position will be projected into this space.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "The space this spatial clamp happens within.\nThe input position will be projected into this space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Space), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigUnit_MathTransformClampSpatially*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_MathTransformClampSpatially), &Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, DebugThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformClampSpatially, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_DebugThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformClampSpatially",
		sizeof(FRigUnit_MathTransformClampSpatially),
		alignof(FRigUnit_MathTransformClampSpatially),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially.InnerSingleton;
	}

void FRigUnit_MathTransformClampSpatially::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Axis,
		Type,
		Minimum,
		Maximum,
		Space,
		bDrawDebug,
		DebugColor,
		DebugThickness,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathTransformMirrorTransform>() == std::is_polymorphic<FRigUnit_MathTransformBase>(), "USTRUCT FRigUnit_MathTransformMirrorTransform cannot be polymorphic unless super FRigUnit_MathTransformBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform;
class UScriptStruct* FRigUnit_MathTransformMirrorTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathTransformMirrorTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MathTransformMirrorTransform_Execute;
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("MirrorAxis"), TEXT("EAxis::Type"));
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("AxisToFlip"), TEXT("EAxis::Type"));
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("CentralTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_MathTransformMirrorTransform_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathTransformMirrorTransform::Execute"), &FRigUnit_MathTransformMirrorTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.OuterSingleton, Arguments_FRigUnit_MathTransformMirrorTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathTransformMirrorTransform>()
{
	return FRigUnit_MathTransformMirrorTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CentralTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CentralTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Mirror a transform about a central transform.\n */" },
		{ "DisplayName", "Mirror" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "TemplateName", "Mirror" },
		{ "ToolTip", "Mirror a transform about a central transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathTransformMirrorTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMirrorTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to mirror against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "the axis to mirror against" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMirrorTransform, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the axis to flip for rotations\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "the axis to flip for rotations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMirrorTransform, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform about which to mirror\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "ToolTip", "The transform about which to mirror" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_CentralTransform = { "CentralTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMirrorTransform, CentralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_CentralTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MathTransformMirrorTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_AxisToFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_CentralTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathTransformBase,
		&NewStructOps,
		"RigUnit_MathTransformMirrorTransform",
		sizeof(FRigUnit_MathTransformMirrorTransform),
		alignof(FRigUnit_MathTransformMirrorTransform),
		Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform.InnerSingleton;
	}

void FRigUnit_MathTransformMirrorTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		MirrorAxis,
		AxisToFlip,
		CentralTransform,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathTransformBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics::NewStructOps, TEXT("RigUnit_MathTransformBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformBase), 1775575521U) },
		{ FRigUnit_MathTransformMutableBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics::NewStructOps, TEXT("RigUnit_MathTransformMutableBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMutableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformMutableBase), 2585856597U) },
		{ FRigUnit_MathTransformUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics::NewStructOps, TEXT("RigUnit_MathTransformUnaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformUnaryOp), 1443306305U) },
		{ FRigUnit_MathTransformBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathTransformBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformBinaryOp), 391381127U) },
		{ FRigUnit_MathTransformBinaryAggregateOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryAggregateOp_Statics::NewStructOps, TEXT("RigUnit_MathTransformBinaryAggregateOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformBinaryAggregateOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformBinaryAggregateOp), 1468134206U) },
		{ FRigUnit_MathTransformFromEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics::NewStructOps, TEXT("RigUnit_MathTransformFromEulerTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformFromEulerTransform), 3251093393U) },
		{ FRigUnit_MathTransformFromEulerTransformV2::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransformV2_Statics::NewStructOps, TEXT("RigUnit_MathTransformFromEulerTransformV2"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromEulerTransformV2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformFromEulerTransformV2), 2088417658U) },
		{ FRigUnit_MathTransformToEulerTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics::NewStructOps, TEXT("RigUnit_MathTransformToEulerTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformToEulerTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformToEulerTransform), 764829389U) },
		{ FRigUnit_MathTransformMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics::NewStructOps, TEXT("RigUnit_MathTransformMul"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformMul), 938531432U) },
		{ FRigUnit_MathTransformMakeRelative::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics::NewStructOps, TEXT("RigUnit_MathTransformMakeRelative"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeRelative, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformMakeRelative), 873157682U) },
		{ FRigUnit_MathTransformMakeAbsolute::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics::NewStructOps, TEXT("RigUnit_MathTransformMakeAbsolute"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMakeAbsolute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformMakeAbsolute), 3560404713U) },
		{ FRigUnit_MathTransformAccumulateArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics::NewStructOps, TEXT("RigUnit_MathTransformAccumulateArray"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformAccumulateArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformAccumulateArray), 926195338U) },
		{ FRigUnit_MathTransformInverse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics::NewStructOps, TEXT("RigUnit_MathTransformInverse"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformInverse), 2864018068U) },
		{ FRigUnit_MathTransformLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics::NewStructOps, TEXT("RigUnit_MathTransformLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformLerp), 2469082894U) },
		{ FRigUnit_MathTransformSelectBool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics::NewStructOps, TEXT("RigUnit_MathTransformSelectBool"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformSelectBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformSelectBool), 12612099U) },
		{ FRigUnit_MathTransformRotateVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics::NewStructOps, TEXT("RigUnit_MathTransformRotateVector"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformRotateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformRotateVector), 3549456321U) },
		{ FRigUnit_MathTransformTransformVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics::NewStructOps, TEXT("RigUnit_MathTransformTransformVector"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformTransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformTransformVector), 3472451530U) },
		{ FRigUnit_MathTransformFromSRT::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics::NewStructOps, TEXT("RigUnit_MathTransformFromSRT"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformFromSRT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformFromSRT), 3522114463U) },
		{ FRigUnit_MathTransformArrayToSRT::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformArrayToSRT_Statics::NewStructOps, TEXT("RigUnit_MathTransformArrayToSRT"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformArrayToSRT, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformArrayToSRT), 621945608U) },
		{ FRigUnit_MathTransformClampSpatially::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics::NewStructOps, TEXT("RigUnit_MathTransformClampSpatially"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformClampSpatially, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformClampSpatially), 3841136248U) },
		{ FRigUnit_MathTransformMirrorTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathTransformMirrorTransform_Statics::NewStructOps, TEXT("RigUnit_MathTransformMirrorTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathTransformMirrorTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathTransformMirrorTransform), 869242560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_597939228(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
