// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlColor_generated_h
#error "RigUnit_SetControlColor.generated.h already included, missing '#pragma once' in RigUnit_SetControlColor.h"
#endif
#define CONTROLRIG_RigUnit_SetControlColor_generated_h


#define FRigUnit_GetControlColor_Execute() \
	void FRigUnit_GetControlColor::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		FLinearColor& Color, \
		FCachedRigElement& CachedControlIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlColor_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		FLinearColor& Color, \
		FCachedRigElement& CachedControlIndex, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Control, \
			Color, \
			CachedControlIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlColor>();


#define FRigUnit_SetControlColor_Execute() \
	void FRigUnit_SetControlColor::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const FLinearColor& Color, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlColor_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const FLinearColor& Color, \
		FCachedRigElement& CachedControlIndex, \
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
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Control, \
			Color, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
