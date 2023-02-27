// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_AimBone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AimBone_generated_h
#error "RigUnit_AimBone.generated.h already included, missing '#pragma once' in RigUnit_AimBone.h"
#endif
#define CONTROLRIG_RigUnit_AimBone_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone_Target>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimItem_Target>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone_DebugSettings>();


#define FRigUnit_AimBoneMath_Execute() \
	void FRigUnit_AimBoneMath::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& InputTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InputTransform, \
			Primary, \
			Secondary, \
			Weight, \
			Result, \
			DebugSettings, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBoneMath>();


#define FRigUnit_AimBone_Execute() \
	void FRigUnit_AimBone::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
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
		const FRigUnit_AimBone_Target& Primary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimBone_Target& Secondary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedBoneIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Bone, \
			Primary, \
			Secondary, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedBoneIndex, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone>();


#define FRigUnit_AimItem_Execute() \
	void FRigUnit_AimItem::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
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
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Primary, \
			Secondary, \
			Weight, \
			DebugSettings, \
			CachedItem, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorldUp_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimConstraint_WorldUp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_AdvancedSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimConstraint_AdvancedSettings>();


#define FRigUnit_AimConstraintLocalSpaceOffset_Execute() \
	void FRigUnit_AimConstraintLocalSpaceOffset::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const FVector& AimAxis, \
		const FVector& UpAxis, \
		const FRigUnit_AimConstraint_WorldUp& WorldUp, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& WorldUpSpaceCache, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimConstraintLocalSpaceOffset_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bMaintainOffset, \
		const FFilterOptionPerAxis& Filter, \
		const FVector& AimAxis, \
		const FVector& UpAxis, \
		const FRigUnit_AimConstraint_WorldUp& WorldUp, \
		const TArrayView<const FConstraintParent>& Parents, \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings, \
		const float Weight, \
		FCachedRigElement& WorldUpSpaceCache, \
		FCachedRigElement& ChildCache, \
		TArray<FCachedRigElement>& ParentCaches, \
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
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bMaintainOffset = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FFilterOptionPerAxis& Filter = *(FFilterOptionPerAxis*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& AimAxis = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& UpAxis = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_AimConstraint_WorldUp& WorldUp = *(FRigUnit_AimConstraint_WorldUp*)RigVMMemoryHandles[5].GetData(false); \
		TArray<FConstraintParent>& Parents = *(TArray<FConstraintParent>*)RigVMMemoryHandles[6].GetData(false); \
		const FRigUnit_AimConstraint_AdvancedSettings& AdvancedSettings = *(FRigUnit_AimConstraint_AdvancedSettings*)RigVMMemoryHandles[7].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[8].GetData(false); \
		FCachedRigElement& WorldUpSpaceCache = *(FCachedRigElement*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& ChildCache = *(FCachedRigElement*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& ParentCaches = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[12].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			bMaintainOffset, \
			Filter, \
			AimAxis, \
			UpAxis, \
			WorldUp, \
			Parents, \
			AdvancedSettings, \
			Weight, \
			WorldUpSpaceCache, \
			ChildCache, \
			ParentCaches, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimConstraintLocalSpaceOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
