// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_InteractionExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_InteractionExecution_generated_h
#error "RigUnit_InteractionExecution.generated.h already included, missing '#pragma once' in RigUnit_InteractionExecution.h"
#endif
#define CONTROLRIG_RigUnit_InteractionExecution_generated_h


#define FRigUnit_InteractionExecution_Execute() \
	void FRigUnit_InteractionExecution::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_InteractionExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_InteractionExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InteractionExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
