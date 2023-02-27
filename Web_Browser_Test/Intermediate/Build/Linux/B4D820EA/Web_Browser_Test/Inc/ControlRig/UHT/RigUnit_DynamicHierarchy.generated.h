// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_DynamicHierarchy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DynamicHierarchy_generated_h
#error "RigUnit_DynamicHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DynamicHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DynamicHierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBaseMutable>();


#define FRigUnit_AddParent_Execute() \
	void FRigUnit_AddParent::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
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
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			Parent, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AddParent>();


#define FRigUnit_SetDefaultParent_Execute() \
	void FRigUnit_SetDefaultParent::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
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
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			Parent, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetDefaultParent>();


#define FRigUnit_SwitchParent_Execute() \
	void FRigUnit_SwitchParent::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal, \
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
		const ERigSwitchParentMode Mode = *(ERigSwitchParentMode*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMaintainGlobal = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Mode, \
			Child, \
			Parent, \
			bMaintainGlobal, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SwitchParent>();


#define FRigUnit_HierarchyGetParentWeights_Execute() \
	void FRigUnit_HierarchyGetParentWeights::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents, \
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
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			Weights, \
			Parents, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeights>();


#define FRigUnit_HierarchyGetParentWeightsArray_Execute() \
	void FRigUnit_HierarchyGetParentWeightsArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents, \
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
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			Weights, \
			Parents, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeightsArray>();


#define FRigUnit_HierarchySetParentWeights_Execute() \
	void FRigUnit_HierarchySetParentWeights::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights, \
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
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Child, \
			Weights, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetParentWeights>();


#define FRigUnit_HierarchyReset_Execute() \
	void FRigUnit_HierarchyReset::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyReset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
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
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyReset>();


#define FRigUnit_HierarchyImportFromSkeleton_Execute() \
	void FRigUnit_HierarchyImportFromSkeleton::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		TArray<FRigElementKey>& Items, \
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
		const FName& NameSpace = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeCurves = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			NameSpace, \
			bIncludeCurves, \
			Items, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyImportFromSkeleton>();


#define FRigUnit_HierarchyRemoveElement_Execute() \
	void FRigUnit_HierarchyRemoveElement::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyRemoveElement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess, \
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
		bool& bSuccess = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			bSuccess, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyRemoveElement>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddElement>();


#define FRigUnit_HierarchyAddBone_Execute() \
	void FRigUnit_HierarchyAddBone::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_354_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddBone>();


#define FRigUnit_HierarchyAddNull_Execute() \
	void FRigUnit_HierarchyAddNull::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddNull_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddNull>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_414_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_Settings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_Settings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_ShapeSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControl_ProxySettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_479_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_506_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat_Settings>();


#define FRigUnit_HierarchyAddControlFloat_Execute() \
	void FRigUnit_HierarchyAddControlFloat::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_536_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings = *(FRigUnit_HierarchyAddControlFloat_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_570_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_597_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger_Settings>();


#define FRigUnit_HierarchyAddControlInteger_Execute() \
	void FRigUnit_HierarchyAddControlInteger::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_627_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings = *(FRigUnit_HierarchyAddControlInteger_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlInteger>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_661_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_692_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D_Settings>();


#define FRigUnit_HierarchyAddControlVector2D_Execute() \
	void FRigUnit_HierarchyAddControlVector2D::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_722_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings = *(FRigUnit_HierarchyAddControlVector2D_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector2D>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_756_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_791_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector_Settings>();


#define FRigUnit_HierarchyAddControlVector_Execute() \
	void FRigUnit_HierarchyAddControlVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_821_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings = *(FRigUnit_HierarchyAddControlVector_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlVector>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_855_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_LimitSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator_LimitSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_890_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator_Settings>();


#define FRigUnit_HierarchyAddControlRotator_Execute() \
	void FRigUnit_HierarchyAddControlRotator::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_916_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings = *(FRigUnit_HierarchyAddControlRotator_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlRotator>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_950_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlTransform_Settings>();


#define FRigUnit_HierarchyAddControlTransform_Execute() \
	void FRigUnit_HierarchyAddControlTransform::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_973_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& OffsetTransform, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings = *(FRigUnit_HierarchyAddControlTransform_Settings*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			OffsetTransform, \
			InitialValue, \
			Settings, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddControlTransform>();


#define FRigUnit_HierarchyAddAnimationChannelBool_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelBool::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1011_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const bool InitialValue = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool MinimumValue = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool MaximumValue = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelBool>();


#define FRigUnit_HierarchyAddAnimationChannelFloat_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelFloat::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1050_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float MinimumValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaximumValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelFloat>();


#define FRigUnit_HierarchyAddAnimationChannelInteger_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelInteger::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1089_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 MinimumValue = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 MaximumValue = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelInteger>();


#define FRigUnit_HierarchyAddAnimationChannelVector2D_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector2D::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[0].GetData(false); \
		const FVector2D& MinimumValue = *(FVector2D*)RigVMMemoryHandles[1].GetData(false); \
		const FVector2D& MaximumValue = *(FVector2D*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelVector2D>();


#define FRigUnit_HierarchyAddAnimationChannelVector_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& MinimumValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& MaximumValue = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelVector>();


#define FRigUnit_HierarchyAddAnimationChannelRotator_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelRotator::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_1206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item, \
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
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		const FRotator& MinimumValue = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		const FRotator& MaximumValue = *(FRotator*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Name = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			Parent, \
			Name, \
			Item, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyAddAnimationChannelRotator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h


#define FOREACH_ENUM_ERIGSWITCHPARENTMODE(op) \
	op(ERigSwitchParentMode::World) \
	op(ERigSwitchParentMode::DefaultParent) \
	op(ERigSwitchParentMode::ParentItem) 

enum class ERigSwitchParentMode : uint8;
template<> struct TIsUEnumClass<ERigSwitchParentMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<ERigSwitchParentMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
