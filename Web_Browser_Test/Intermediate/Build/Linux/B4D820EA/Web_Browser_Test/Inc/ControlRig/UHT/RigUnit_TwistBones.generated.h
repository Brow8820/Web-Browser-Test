// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_TwistBones.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TwistBones_generated_h
#error "RigUnit_TwistBones.generated.h already included, missing '#pragma once' in RigUnit_TwistBones.h"
#endif
#define CONTROLRIG_RigUnit_TwistBones_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwistBones_WorkData>();


#define FRigUnit_TwistBones_Execute() \
	void FRigUnit_TwistBones::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const EControlRigAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwistBones_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const EControlRigAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData, \
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
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& PoleAxis = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const EControlRigAnimEasingType TwistEaseType = *(EControlRigAnimEasingType*)RigVMMemoryHandles[4].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_TwistBones_WorkData& WorkData = *(FRigUnit_TwistBones_WorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			StartBone, \
			EndBone, \
			TwistAxis, \
			PoleAxis, \
			TwistEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwistBones>();


#define FRigUnit_TwistBonesPerItem_Execute() \
	void FRigUnit_TwistBonesPerItem::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const EControlRigAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwistBonesPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FVector& TwistAxis, \
		const FVector& PoleAxis, \
		const EControlRigAnimEasingType TwistEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FRigUnit_TwistBones_WorkData& WorkData, \
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
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& PoleAxis = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const EControlRigAnimEasingType TwistEaseType = *(EControlRigAnimEasingType*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FRigUnit_TwistBones_WorkData& WorkData = *(FRigUnit_TwistBones_WorkData*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			TwistAxis, \
			PoleAxis, \
			TwistEaseType, \
			Weight, \
			bPropagateToChildren, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwistBonesPerItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwistBones_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
