// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Simulation/RigUnit_Timeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Timeline_generated_h
#error "RigUnit_Timeline.generated.h already included, missing '#pragma once' in RigUnit_Timeline.h"
#endif
#define CONTROLRIG_RigUnit_Timeline_generated_h


#define FRigUnit_Timeline_Execute() \
	void FRigUnit_Timeline::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Speed, \
		float& Time, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Time = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Speed, \
			Time, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Timeline>();


#define FRigUnit_TimeLoop_Execute() \
	void FRigUnit_TimeLoop::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TimeLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Speed, \
		const float Duration, \
		const bool Normalize, \
		float& Absolute, \
		float& Relative, \
		float& FlipFlop, \
		bool& Even, \
		float& AccumulatedAbsolute, \
		float& AccumulatedRelative, \
		int32& NumIterations, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Speed = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool Normalize = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Absolute = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Relative = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& FlipFlop = *(float*)RigVMMemoryHandles[5].GetData(false); \
		bool& Even = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		float& AccumulatedAbsolute = *(float*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedRelative = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& NumIterations = *(int32*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Speed, \
			Duration, \
			Normalize, \
			Absolute, \
			Relative, \
			FlipFlop, \
			Even, \
			AccumulatedAbsolute, \
			AccumulatedRelative, \
			NumIterations, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TimeLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
