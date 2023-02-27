// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Execution/RigUnit_UserDefinedEvent.h"
#include "ControlRig/Public/ControlRigDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_UserDefinedEvent() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_UserDefinedEvent>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_UserDefinedEvent cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent;
class UScriptStruct* FRigUnit_UserDefinedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_UserDefinedEvent"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_UserDefinedEvent_Execute;
		Arguments_FRigUnit_UserDefinedEvent_Execute.Emplace(TEXT("ExecuteContext"), TEXT("FControlRigExecuteContext"));
		Arguments_FRigUnit_UserDefinedEvent_Execute.Emplace(TEXT("EventName"), TEXT("FName"));
		Arguments_FRigUnit_UserDefinedEvent_Execute.Emplace(TEXT("Context"), TEXT("const FRigUnitContext &"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_UserDefinedEvent::Execute"), &FRigUnit_UserDefinedEvent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.OuterSingleton, Arguments_FRigUnit_UserDefinedEvent_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_UserDefinedEvent>()
{
	return FRigUnit_UserDefinedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * User Defined Event for running custom logic\n */" },
		{ "DisplayName", "User Defined Event" },
		{ "Keywords", "Event,Entry,MyEvent" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_UserDefinedEvent.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "User Defined Event for running custom logic" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_UserDefinedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "UserDefinedEvent" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_UserDefinedEvent.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UserDefinedEvent, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_ExecuteContext_MetaData)) }; // 1688564855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "UserDefinedEvent" },
		{ "Comment", "// True if the current interaction is a rotation\n" },
		{ "Constant", "" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_UserDefinedEvent.h" },
		{ "ToolTip", "True if the current interaction is a rotation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UserDefinedEvent, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewProp_EventName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_UserDefinedEvent",
		sizeof(FRigUnit_UserDefinedEvent),
		alignof(FRigUnit_UserDefinedEvent),
		Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent.InnerSingleton;
	}

void FRigUnit_UserDefinedEvent::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	StaticExecute(
		RigVMExecuteContext,
		ExecuteContext,
		EventName,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_UserDefinedEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_UserDefinedEvent_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_UserDefinedEvent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_UserDefinedEvent_Statics::NewStructOps, TEXT("RigUnit_UserDefinedEvent"), &Z_Registration_Info_UScriptStruct_RigUnit_UserDefinedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_UserDefinedEvent), 4229439174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_UserDefinedEvent_h_16729404(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_UserDefinedEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_UserDefinedEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
