// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Core/RigUnit_String.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_String() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_FromString();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_ToString();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigDispatchFactory();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringConcat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringContains();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringEndsWith();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringFind();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringJoin();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringLeft();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringLength();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringMiddle();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringPadInteger();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringReplace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringReverse();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringRight();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringSplit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringStartsWith();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringToLowercase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringToUppercase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringTruncate();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_StringBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_StringBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringBase;
class UScriptStruct* FRigUnit_StringBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringBase>()
{
	return FRigUnit_StringBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core|String" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_StringBase",
		sizeof(FRigUnit_StringBase),
		alignof(FRigUnit_StringBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_StringConcat>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringConcat cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringConcat;
class UScriptStruct* FRigUnit_StringConcat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringConcat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringConcat"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringConcat_Execute;
		Arguments_FRigUnit_StringConcat_Execute.Emplace(TEXT("A"), TEXT("FString"));
		Arguments_FRigUnit_StringConcat_Execute.Emplace(TEXT("B"), TEXT("FString"));
		Arguments_FRigUnit_StringConcat_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringConcat_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringConcat::Execute"), &FRigUnit_StringConcat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.OuterSingleton, Arguments_FRigUnit_StringConcat_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringConcat>()
{
	return FRigUnit_StringConcat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Concatenates two strings together to make a new string\n */" },
		{ "DisplayName", "Concat" },
		{ "Keywords", "Add,+,Combine,Merge,Append" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "Concat" },
		{ "ToolTip", "Concatenates two strings together to make a new string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringConcat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringConcat, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringConcat, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_Result_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringConcat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringConcat",
		sizeof(FRigUnit_StringConcat),
		alignof(FRigUnit_StringConcat),
		Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringConcat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringConcat.InnerSingleton;
	}

void FRigUnit_StringConcat::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_StringTruncate>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringTruncate cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate;
class UScriptStruct* FRigUnit_StringTruncate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringTruncate, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringTruncate"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringTruncate_Execute;
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("FromEnd"), TEXT("bool"));
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("Remainder"), TEXT("FString"));
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("Chopped"), TEXT("FString"));
		Arguments_FRigUnit_StringTruncate_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringTruncate::Execute"), &FRigUnit_StringTruncate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.OuterSingleton, Arguments_FRigUnit_StringTruncate_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringTruncate>()
{
	return FRigUnit_StringTruncate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromEnd_MetaData[];
#endif
		static void NewProp_FromEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FromEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Remainder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Remainder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chopped_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Chopped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the left or right most characters from the string chopping the given number of characters from the start or the end\n */" },
		{ "DisplayName", "Chop" },
		{ "Keywords", "Truncate,-,Remove,Subtract,Split" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "Chop" },
		{ "ToolTip", "Returns the left or right most characters from the string chopping the given number of characters from the start or the end" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringTruncate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTruncate, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Number of characters to remove from left or right\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Number of characters to remove from left or right" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTruncate, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if set to true the characters will be removed from the end\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "if set to true the characters will be removed from the end" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd_SetBit(void* Obj)
	{
		((FRigUnit_StringTruncate*)Obj)->FromEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd = { "FromEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_StringTruncate), &Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Remainder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the string without the chopped characters\n" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the string without the chopped characters" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTruncate, Remainder), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Remainder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Remainder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Chopped_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the part of the name that has been chopped off\n" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the name that has been chopped off" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Chopped = { "Chopped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTruncate, Chopped), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Chopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Chopped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_FromEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Remainder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewProp_Chopped,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringTruncate",
		sizeof(FRigUnit_StringTruncate),
		alignof(FRigUnit_StringTruncate),
		Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringTruncate()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate.InnerSingleton;
	}

void FRigUnit_StringTruncate::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Name,
		Count,
		FromEnd,
		Remainder,
		Chopped,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringReplace>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringReplace cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringReplace;
class UScriptStruct* FRigUnit_StringReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringReplace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringReplace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringReplace_Execute;
		Arguments_FRigUnit_StringReplace_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigUnit_StringReplace_Execute.Emplace(TEXT("Old"), TEXT("FString"));
		Arguments_FRigUnit_StringReplace_Execute.Emplace(TEXT("New"), TEXT("FString"));
		Arguments_FRigUnit_StringReplace_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringReplace_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringReplace::Execute"), &FRigUnit_StringReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.OuterSingleton, Arguments_FRigUnit_StringReplace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringReplace>()
{
	return FRigUnit_StringReplace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Old;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_New;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replace all occurrences of a substring in this string\n */" },
		{ "DisplayName", "Replace" },
		{ "Keywords", "Search,Emplace,Find" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "Replace" },
		{ "ToolTip", "Replace all occurrences of a substring in this string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringReplace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReplace, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReplace, Old), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Old_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReplace, New), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_New_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReplace, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Old,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_New,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringReplace",
		sizeof(FRigUnit_StringReplace),
		alignof(FRigUnit_StringReplace),
		Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringReplace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringReplace.InnerSingleton;
	}

void FRigUnit_StringReplace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Name,
		Old,
		New,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringEndsWith>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringEndsWith cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith;
class UScriptStruct* FRigUnit_StringEndsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringEndsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringEndsWith_Execute;
		Arguments_FRigUnit_StringEndsWith_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigUnit_StringEndsWith_Execute.Emplace(TEXT("Ending"), TEXT("FString"));
		Arguments_FRigUnit_StringEndsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		Arguments_FRigUnit_StringEndsWith_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringEndsWith::Execute"), &FRigUnit_StringEndsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.OuterSingleton, Arguments_FRigUnit_StringEndsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringEndsWith>()
{
	return FRigUnit_StringEndsWith::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ending_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tests whether this string ends with given string\n */" },
		{ "DisplayName", "Ends With" },
		{ "Keywords", "Right" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "EndsWith" },
		{ "ToolTip", "Tests whether this string ends with given string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringEndsWith>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringEndsWith, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Ending_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Ending = { "Ending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringEndsWith, Ending), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Ending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Ending_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_StringEndsWith*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_StringEndsWith), &Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Ending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringEndsWith",
		sizeof(FRigUnit_StringEndsWith),
		alignof(FRigUnit_StringEndsWith),
		Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringEndsWith()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith.InnerSingleton;
	}

void FRigUnit_StringEndsWith::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Name,
		Ending,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringStartsWith>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringStartsWith cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith;
class UScriptStruct* FRigUnit_StringStartsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringStartsWith"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringStartsWith_Execute;
		Arguments_FRigUnit_StringStartsWith_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigUnit_StringStartsWith_Execute.Emplace(TEXT("Start"), TEXT("FString"));
		Arguments_FRigUnit_StringStartsWith_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		Arguments_FRigUnit_StringStartsWith_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringStartsWith::Execute"), &FRigUnit_StringStartsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.OuterSingleton, Arguments_FRigUnit_StringStartsWith_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringStartsWith>()
{
	return FRigUnit_StringStartsWith::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tests whether this string starts with given string\n */" },
		{ "DisplayName", "Starts With" },
		{ "Keywords", "Left" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "StartsWith" },
		{ "ToolTip", "Tests whether this string starts with given string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringStartsWith>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringStartsWith, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringStartsWith, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_StringStartsWith*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_StringStartsWith), &Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringStartsWith",
		sizeof(FRigUnit_StringStartsWith),
		alignof(FRigUnit_StringStartsWith),
		Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringStartsWith()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith.InnerSingleton;
	}

void FRigUnit_StringStartsWith::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Name,
		Start,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringContains>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringContains cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringContains;
class UScriptStruct* FRigUnit_StringContains::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringContains.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringContains.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringContains, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringContains"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringContains_Execute;
		Arguments_FRigUnit_StringContains_Execute.Emplace(TEXT("Name"), TEXT("FString"));
		Arguments_FRigUnit_StringContains_Execute.Emplace(TEXT("Search"), TEXT("FString"));
		Arguments_FRigUnit_StringContains_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		Arguments_FRigUnit_StringContains_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringContains::Execute"), &FRigUnit_StringContains::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringContains.OuterSingleton, Arguments_FRigUnit_StringContains_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringContains.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringContains>()
{
	return FRigUnit_StringContains::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Search;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true or false if a given name exists in another given name\n */" },
		{ "DisplayName", "Contains" },
		{ "Keywords", "Contains,Find,Has,Search" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "TemplateName", "Contains" },
		{ "ToolTip", "Returns true or false if a given name exists in another given name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringContains>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringContains, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Search_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringContains, Search), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Search_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Search_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_StringContains*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_StringContains), &Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Search,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringContains",
		sizeof(FRigUnit_StringContains),
		alignof(FRigUnit_StringContains),
		Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringContains()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringContains.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringContains.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringContains.InnerSingleton;
	}

void FRigUnit_StringContains::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Name,
		Search,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringLength>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringLength cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringLength;
class UScriptStruct* FRigUnit_StringLength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringLength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringLength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringLength, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringLength"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringLength_Execute;
		Arguments_FRigUnit_StringLength_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringLength_Execute.Emplace(TEXT("Length"), TEXT("int32"));
		Arguments_FRigUnit_StringLength_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringLength::Execute"), &FRigUnit_StringLength::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringLength.OuterSingleton, Arguments_FRigUnit_StringLength_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringLength.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringLength>()
{
	return FRigUnit_StringLength::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the length of a string \n */" },
		{ "DisplayName", "Length" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Returns the length of a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringLength>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringLength, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringLength, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringLength",
		sizeof(FRigUnit_StringLength),
		alignof(FRigUnit_StringLength),
		Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringLength()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringLength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringLength.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringLength.InnerSingleton;
	}

void FRigUnit_StringLength::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Length,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringTrimWhitespace>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringTrimWhitespace cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace;
class UScriptStruct* FRigUnit_StringTrimWhitespace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringTrimWhitespace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringTrimWhitespace_Execute;
		Arguments_FRigUnit_StringTrimWhitespace_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringTrimWhitespace_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringTrimWhitespace_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringTrimWhitespace::Execute"), &FRigUnit_StringTrimWhitespace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.OuterSingleton, Arguments_FRigUnit_StringTrimWhitespace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringTrimWhitespace>()
{
	return FRigUnit_StringTrimWhitespace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Trims the whitespace from a string (start and end)\n */" },
		{ "DisplayName", "Trim Whitespace" },
		{ "Keywords", "Space,WhiteSpace,Remove,Truncate" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Trims the whitespace from a string (start and end)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringTrimWhitespace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTrimWhitespace, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringTrimWhitespace, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringTrimWhitespace",
		sizeof(FRigUnit_StringTrimWhitespace),
		alignof(FRigUnit_StringTrimWhitespace),
		Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace.InnerSingleton;
	}

void FRigUnit_StringTrimWhitespace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringToUppercase>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringToUppercase cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase;
class UScriptStruct* FRigUnit_StringToUppercase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringToUppercase"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringToUppercase_Execute;
		Arguments_FRigUnit_StringToUppercase_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringToUppercase_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringToUppercase_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringToUppercase::Execute"), &FRigUnit_StringToUppercase::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.OuterSingleton, Arguments_FRigUnit_StringToUppercase_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringToUppercase>()
{
	return FRigUnit_StringToUppercase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts the string to upper case\n */" },
		{ "DisplayName", "To Uppercase" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Converts the string to upper case" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringToUppercase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringToUppercase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringToUppercase, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringToUppercase",
		sizeof(FRigUnit_StringToUppercase),
		alignof(FRigUnit_StringToUppercase),
		Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringToUppercase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase.InnerSingleton;
	}

void FRigUnit_StringToUppercase::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringToLowercase>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringToLowercase cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase;
class UScriptStruct* FRigUnit_StringToLowercase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringToLowercase"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringToLowercase_Execute;
		Arguments_FRigUnit_StringToLowercase_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringToLowercase_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringToLowercase_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringToLowercase::Execute"), &FRigUnit_StringToLowercase::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.OuterSingleton, Arguments_FRigUnit_StringToLowercase_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringToLowercase>()
{
	return FRigUnit_StringToLowercase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts the string to lower case\n */" },
		{ "DisplayName", "To Lowercase" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Converts the string to lower case" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringToLowercase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringToLowercase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringToLowercase, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringToLowercase",
		sizeof(FRigUnit_StringToLowercase),
		alignof(FRigUnit_StringToLowercase),
		Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringToLowercase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase.InnerSingleton;
	}

void FRigUnit_StringToLowercase::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringReverse>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringReverse cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringReverse;
class UScriptStruct* FRigUnit_StringReverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringReverse, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringReverse"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringReverse_Execute;
		Arguments_FRigUnit_StringReverse_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringReverse_Execute.Emplace(TEXT("Reverse"), TEXT("FString"));
		Arguments_FRigUnit_StringReverse_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringReverse::Execute"), &FRigUnit_StringReverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.OuterSingleton, Arguments_FRigUnit_StringReverse_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringReverse>()
{
	return FRigUnit_StringReverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reverse_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the reverse of the input string\n */" },
		{ "DisplayName", "Reverse" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Returns the reverse of the input string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringReverse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReverse, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Reverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringReverse, Reverse), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Reverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Reverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewProp_Reverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringReverse",
		sizeof(FRigUnit_StringReverse),
		alignof(FRigUnit_StringReverse),
		Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringReverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringReverse.InnerSingleton;
	}

void FRigUnit_StringReverse::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Reverse,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringLeft>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringLeft cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringLeft;
class UScriptStruct* FRigUnit_StringLeft::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringLeft, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringLeft"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringLeft_Execute;
		Arguments_FRigUnit_StringLeft_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringLeft_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_StringLeft_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringLeft_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringLeft::Execute"), &FRigUnit_StringLeft::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.OuterSingleton, Arguments_FRigUnit_StringLeft_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringLeft>()
{
	return FRigUnit_StringLeft::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the left most characters of a string\n */" },
		{ "DisplayName", "Left" },
		{ "Keywords", "Start,Begin" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Returns the left most characters of a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringLeft>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringLeft, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringLeft, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringLeft, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringLeft",
		sizeof(FRigUnit_StringLeft),
		alignof(FRigUnit_StringLeft),
		Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringLeft()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringLeft.InnerSingleton;
	}

void FRigUnit_StringLeft::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Count,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringRight>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringRight cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringRight;
class UScriptStruct* FRigUnit_StringRight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringRight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringRight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringRight, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringRight"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringRight_Execute;
		Arguments_FRigUnit_StringRight_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringRight_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_StringRight_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringRight_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringRight::Execute"), &FRigUnit_StringRight::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringRight.OuterSingleton, Arguments_FRigUnit_StringRight_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringRight.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringRight>()
{
	return FRigUnit_StringRight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the right most characters of a string\n */" },
		{ "DisplayName", "Right" },
		{ "Keywords", "End" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Returns the right most characters of a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringRight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringRight, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringRight, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringRight, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringRight",
		sizeof(FRigUnit_StringRight),
		alignof(FRigUnit_StringRight),
		Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringRight()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringRight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringRight.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringRight.InnerSingleton;
	}

void FRigUnit_StringRight::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Count,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringMiddle>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringMiddle cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle;
class UScriptStruct* FRigUnit_StringMiddle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringMiddle, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringMiddle"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringMiddle_Execute;
		Arguments_FRigUnit_StringMiddle_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringMiddle_Execute.Emplace(TEXT("Start"), TEXT("int32"));
		Arguments_FRigUnit_StringMiddle_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_StringMiddle_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringMiddle_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringMiddle::Execute"), &FRigUnit_StringMiddle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.OuterSingleton, Arguments_FRigUnit_StringMiddle_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringMiddle>()
{
	return FRigUnit_StringMiddle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the middle section of a string\n */" },
		{ "DisplayName", "Middle" },
		{ "Keywords", "Within,Center" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Returns the middle section of a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringMiddle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringMiddle, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// the index of the first character\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "the index of the first character" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringMiddle, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// if count is set to -1 all character from Start will be returned \n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "if count is set to -1 all character from Start will be returned" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringMiddle, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringMiddle, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringMiddle",
		sizeof(FRigUnit_StringMiddle),
		alignof(FRigUnit_StringMiddle),
		Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringMiddle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle.InnerSingleton;
	}

void FRigUnit_StringMiddle::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Start,
		Count,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringFind>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringFind cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringFind;
class UScriptStruct* FRigUnit_StringFind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringFind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringFind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringFind, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringFind"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringFind_Execute;
		Arguments_FRigUnit_StringFind_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringFind_Execute.Emplace(TEXT("Search"), TEXT("FString"));
		Arguments_FRigUnit_StringFind_Execute.Emplace(TEXT("Found"), TEXT("bool"));
		Arguments_FRigUnit_StringFind_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		Arguments_FRigUnit_StringFind_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringFind::Execute"), &FRigUnit_StringFind::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringFind.OuterSingleton, Arguments_FRigUnit_StringFind_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringFind.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringFind>()
{
	return FRigUnit_StringFind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Search;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Found_MetaData[];
#endif
		static void NewProp_Found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Found;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Finds a string within another string\n */" },
		{ "DisplayName", "Find" },
		{ "Keywords", "IndexOf" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Finds a string within another string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringFind>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringFind, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Search_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringFind, Search), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Search_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Search_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found_SetBit(void* Obj)
	{
		((FRigUnit_StringFind*)Obj)->Found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_StringFind), &Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringFind, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Search,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringFind",
		sizeof(FRigUnit_StringFind),
		alignof(FRigUnit_StringFind),
		Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringFind()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringFind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringFind.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringFind.InnerSingleton;
	}

void FRigUnit_StringFind::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Search,
		Found,
		Index,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringSplit>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringSplit cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringSplit;
class UScriptStruct* FRigUnit_StringSplit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringSplit, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringSplit"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringSplit_Execute;
		Arguments_FRigUnit_StringSplit_Execute.Emplace(TEXT("Value"), TEXT("FString"));
		Arguments_FRigUnit_StringSplit_Execute.Emplace(TEXT("Separator"), TEXT("FString"));
		Arguments_FRigUnit_StringSplit_Execute.Emplace(TEXT("Result"), TEXT("TArray<FString>"));
		Arguments_FRigUnit_StringSplit_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringSplit::Execute"), &FRigUnit_StringSplit::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.OuterSingleton, Arguments_FRigUnit_StringSplit_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringSplit>()
{
	return FRigUnit_StringSplit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Splits a string into multiple sections given a separator\n */" },
		{ "DisplayName", "Split" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Splits a string into multiple sections given a separator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringSplit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringSplit, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Separator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringSplit, Separator), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Separator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Separator_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringSplit, Result), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringSplit",
		sizeof(FRigUnit_StringSplit),
		alignof(FRigUnit_StringSplit),
		Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringSplit()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringSplit.InnerSingleton;
	}

void FRigUnit_StringSplit::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Separator,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringJoin>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringJoin cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringJoin;
class UScriptStruct* FRigUnit_StringJoin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringJoin, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringJoin"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringJoin_Execute;
		Arguments_FRigUnit_StringJoin_Execute.Emplace(TEXT("Values"), TEXT("TArray<FString>"));
		Arguments_FRigUnit_StringJoin_Execute.Emplace(TEXT("Separator"), TEXT("FString"));
		Arguments_FRigUnit_StringJoin_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringJoin_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringJoin::Execute"), &FRigUnit_StringJoin::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.OuterSingleton, Arguments_FRigUnit_StringJoin_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringJoin>()
{
	return FRigUnit_StringJoin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Separator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Joins a string into multiple sections given a separator\n */" },
		{ "DisplayName", "Join" },
		{ "Keywords", "Combine" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Joins a string into multiple sections given a separator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringJoin>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringJoin, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Separator_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringJoin, Separator), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Separator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Separator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringJoin, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringJoin",
		sizeof(FRigUnit_StringJoin),
		alignof(FRigUnit_StringJoin),
		Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringJoin()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringJoin.InnerSingleton;
	}

void FRigUnit_StringJoin::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FString> Values_0_Array(Values);
	
	StaticExecute(
		RigVMExecuteContext,
		Values_0_Array,
		Separator,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StringPadInteger>() == std::is_polymorphic<FRigUnit_StringBase>(), "USTRUCT FRigUnit_StringPadInteger cannot be polymorphic unless super FRigUnit_StringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger;
class UScriptStruct* FRigUnit_StringPadInteger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StringPadInteger"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_StringPadInteger_Execute;
		Arguments_FRigUnit_StringPadInteger_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigUnit_StringPadInteger_Execute.Emplace(TEXT("Digits"), TEXT("int32"));
		Arguments_FRigUnit_StringPadInteger_Execute.Emplace(TEXT("Result"), TEXT("FString"));
		Arguments_FRigUnit_StringPadInteger_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StringPadInteger::Execute"), &FRigUnit_StringPadInteger::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.OuterSingleton, Arguments_FRigUnit_StringPadInteger_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StringPadInteger>()
{
	return FRigUnit_StringPadInteger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Digits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Digits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts an integer number to a string with padding\n */" },
		{ "DisplayName", "Pad Integer" },
		{ "Keywords", "FromInt,Number,LeadingZeroes" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "ToolTip", "Converts an integer number to a string with padding" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StringPadInteger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringPadInteger, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Digits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Digits = { "Digits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringPadInteger, Digits), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Digits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Digits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_StringPadInteger, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Digits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_StringBase,
		&NewStructOps,
		"RigUnit_StringPadInteger",
		sizeof(FRigUnit_StringPadInteger),
		alignof(FRigUnit_StringPadInteger),
		Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StringPadInteger()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger.InnerSingleton;
	}

void FRigUnit_StringPadInteger::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		Value,
		Digits,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigDispatch_ToString>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_ToString cannot be polymorphic unless super FRigDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_ToString;
class UScriptStruct* FRigDispatch_ToString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_ToString, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_ToString"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_ToString.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_ToString>()
{
	return FRigDispatch_ToString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Converts any value to string\n */" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "* Converts any value to string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_ToString>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatchFactory,
		&NewStructOps,
		"RigDispatch_ToString",
		sizeof(FRigDispatch_ToString),
		alignof(FRigDispatch_ToString),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_ToString()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_ToString.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigDispatch_FromString>() == std::is_polymorphic<FRigDispatchFactory>(), "USTRUCT FRigDispatch_FromString cannot be polymorphic unless super FRigDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigDispatch_FromString;
class UScriptStruct* FRigDispatch_FromString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_FromString, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigDispatch_FromString"));
	}
	return Z_Registration_Info_UScriptStruct_RigDispatch_FromString.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigDispatch_FromString>()
{
	return FRigDispatch_FromString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Converts a string into any value\n */" },
		{ "DisplayName", "From String" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_String.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "* Converts a string into any value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigDispatch_FromString>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigDispatchFactory,
		&NewStructOps,
		"RigDispatch_FromString",
		sizeof(FRigDispatch_FromString),
		alignof(FRigDispatch_FromString),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigDispatch_FromString()
	{
		if (!Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton, Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigDispatch_FromString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_StringBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics::NewStructOps, TEXT("RigUnit_StringBase"), &Z_Registration_Info_UScriptStruct_RigUnit_StringBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringBase), 1944420320U) },
		{ FRigUnit_StringConcat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics::NewStructOps, TEXT("RigUnit_StringConcat"), &Z_Registration_Info_UScriptStruct_RigUnit_StringConcat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringConcat), 4231103757U) },
		{ FRigUnit_StringTruncate::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics::NewStructOps, TEXT("RigUnit_StringTruncate"), &Z_Registration_Info_UScriptStruct_RigUnit_StringTruncate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringTruncate), 1096034176U) },
		{ FRigUnit_StringReplace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics::NewStructOps, TEXT("RigUnit_StringReplace"), &Z_Registration_Info_UScriptStruct_RigUnit_StringReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringReplace), 308958676U) },
		{ FRigUnit_StringEndsWith::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics::NewStructOps, TEXT("RigUnit_StringEndsWith"), &Z_Registration_Info_UScriptStruct_RigUnit_StringEndsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringEndsWith), 4135562769U) },
		{ FRigUnit_StringStartsWith::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics::NewStructOps, TEXT("RigUnit_StringStartsWith"), &Z_Registration_Info_UScriptStruct_RigUnit_StringStartsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringStartsWith), 4184334854U) },
		{ FRigUnit_StringContains::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics::NewStructOps, TEXT("RigUnit_StringContains"), &Z_Registration_Info_UScriptStruct_RigUnit_StringContains, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringContains), 3617586053U) },
		{ FRigUnit_StringLength::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics::NewStructOps, TEXT("RigUnit_StringLength"), &Z_Registration_Info_UScriptStruct_RigUnit_StringLength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringLength), 3419278655U) },
		{ FRigUnit_StringTrimWhitespace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics::NewStructOps, TEXT("RigUnit_StringTrimWhitespace"), &Z_Registration_Info_UScriptStruct_RigUnit_StringTrimWhitespace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringTrimWhitespace), 1121466770U) },
		{ FRigUnit_StringToUppercase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics::NewStructOps, TEXT("RigUnit_StringToUppercase"), &Z_Registration_Info_UScriptStruct_RigUnit_StringToUppercase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringToUppercase), 1496750210U) },
		{ FRigUnit_StringToLowercase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics::NewStructOps, TEXT("RigUnit_StringToLowercase"), &Z_Registration_Info_UScriptStruct_RigUnit_StringToLowercase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringToLowercase), 3555415729U) },
		{ FRigUnit_StringReverse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics::NewStructOps, TEXT("RigUnit_StringReverse"), &Z_Registration_Info_UScriptStruct_RigUnit_StringReverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringReverse), 152804128U) },
		{ FRigUnit_StringLeft::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics::NewStructOps, TEXT("RigUnit_StringLeft"), &Z_Registration_Info_UScriptStruct_RigUnit_StringLeft, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringLeft), 21290544U) },
		{ FRigUnit_StringRight::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics::NewStructOps, TEXT("RigUnit_StringRight"), &Z_Registration_Info_UScriptStruct_RigUnit_StringRight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringRight), 968020651U) },
		{ FRigUnit_StringMiddle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics::NewStructOps, TEXT("RigUnit_StringMiddle"), &Z_Registration_Info_UScriptStruct_RigUnit_StringMiddle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringMiddle), 2477326775U) },
		{ FRigUnit_StringFind::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics::NewStructOps, TEXT("RigUnit_StringFind"), &Z_Registration_Info_UScriptStruct_RigUnit_StringFind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringFind), 3819021163U) },
		{ FRigUnit_StringSplit::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics::NewStructOps, TEXT("RigUnit_StringSplit"), &Z_Registration_Info_UScriptStruct_RigUnit_StringSplit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringSplit), 3685240066U) },
		{ FRigUnit_StringJoin::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics::NewStructOps, TEXT("RigUnit_StringJoin"), &Z_Registration_Info_UScriptStruct_RigUnit_StringJoin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringJoin), 991255493U) },
		{ FRigUnit_StringPadInteger::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics::NewStructOps, TEXT("RigUnit_StringPadInteger"), &Z_Registration_Info_UScriptStruct_RigUnit_StringPadInteger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StringPadInteger), 669258088U) },
		{ FRigDispatch_ToString::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics::NewStructOps, TEXT("RigDispatch_ToString"), &Z_Registration_Info_UScriptStruct_RigDispatch_ToString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_ToString), 2551093017U) },
		{ FRigDispatch_FromString::StaticStruct, Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics::NewStructOps, TEXT("RigDispatch_FromString"), &Z_Registration_Info_UScriptStruct_RigDispatch_FromString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigDispatch_FromString), 667503794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_1207484745(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
