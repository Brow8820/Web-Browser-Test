// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_InverseExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_InverseExecution_generated_h
#error "RigUnit_InverseExecution.generated.h already included, missing '#pragma once' in RigUnit_InverseExecution.h"
#endif
#define CONTROLRIG_RigUnit_InverseExecution_generated_h


#define FRigUnit_InverseExecution_Execute() \
	void FRigUnit_InverseExecution::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_InverseExecution_Statics; \
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


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_InverseExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_InverseExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
