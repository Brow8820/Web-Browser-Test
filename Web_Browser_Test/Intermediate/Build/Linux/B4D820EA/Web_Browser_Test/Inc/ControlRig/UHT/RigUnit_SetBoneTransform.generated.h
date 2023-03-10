// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetBoneTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetBoneTransform_generated_h
#error "RigUnit_SetBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_SetBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetBoneTransform_generated_h


#define FRigUnit_SetBoneTransform_Execute() \
	void FRigUnit_SetBoneTransform::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		FTransform& Result, \
		const EBoneGetterSetterMode Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetBoneTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		FTransform& Result, \
		const EBoneGetterSetterMode Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
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
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Bone, \
			Transform, \
			Result, \
			Space, \
			Weight, \
			bPropagateToChildren, \
			CachedBone, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetBoneTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
