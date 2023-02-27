// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Collection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Collection_generated_h
#error "RigUnit_Collection.generated.h already included, missing '#pragma once' in RigUnit_Collection.h"
#endif
#define CONTROLRIG_RigUnit_Collection_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBaseMutable>();


#define FRigUnit_CollectionChain_Execute() \
	void FRigUnit_CollectionChain::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			FirstItem, \
			LastItem, \
			Reverse, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChain>();


#define FRigUnit_CollectionChainArray_Execute() \
	void FRigUnit_CollectionChainArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			FirstItem, \
			LastItem, \
			Reverse, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChainArray>();


#define FRigUnit_CollectionNameSearch_Execute() \
	void FRigUnit_CollectionNameSearch::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			PartialName, \
			TypeToSearch, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearch>();


#define FRigUnit_CollectionNameSearchArray_Execute() \
	void FRigUnit_CollectionNameSearchArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			PartialName, \
			TypeToSearch, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearchArray>();


#define FRigUnit_CollectionChildren_Execute() \
	void FRigUnit_CollectionChildren::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildren>();


#define FRigUnit_CollectionChildrenArray_Execute() \
	void FRigUnit_CollectionChildrenArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildrenArray>();


#define FRigUnit_CollectionGetAll_Execute() \
	void FRigUnit_CollectionGetAll::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			TypeToSearch, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetAll>();


#define FRigUnit_CollectionReplaceItems_Execute() \
	void FRigUnit_CollectionReplaceItems::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
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
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItems>();


#define FRigUnit_CollectionReplaceItemsArray_Execute() \
	void FRigUnit_CollectionReplaceItemsArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItemsArray>();


#define FRigUnit_CollectionItems_Execute() \
	void FRigUnit_CollectionItems::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_326_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			bAllowDuplicates, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItems>();


#define FRigUnit_CollectionGetItems_Execute() \
	void FRigUnit_CollectionGetItems::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetItems>();


#define FRigUnit_CollectionGetParentIndices_Execute() \
	void FRigUnit_CollectionGetParentIndices::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_378_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			ParentIndices, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndices>();


#define FRigUnit_CollectionGetParentIndicesItemArray_Execute() \
	void FRigUnit_CollectionGetParentIndicesItemArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			ParentIndices, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndicesItemArray>();


#define FRigUnit_CollectionUnion_Execute() \
	void FRigUnit_CollectionUnion::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_429_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			bAllowDuplicates, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionUnion>();


#define FRigUnit_CollectionIntersection_Execute() \
	void FRigUnit_CollectionIntersection::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_462_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionIntersection>();


#define FRigUnit_CollectionDifference_Execute() \
	void FRigUnit_CollectionDifference::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_491_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionDifference>();


#define FRigUnit_CollectionReverse_Execute() \
	void FRigUnit_CollectionReverse::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_519_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKeyCollection& Reversed = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Reversed, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReverse>();


#define FRigUnit_CollectionCount_Execute() \
	void FRigUnit_CollectionCount::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_544_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Count, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionCount>();


#define FRigUnit_CollectionItemAtIndex_Execute() \
	void FRigUnit_CollectionItemAtIndex::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_571_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Index = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Index, \
			Item, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItemAtIndex>();


#define FRigUnit_CollectionLoop_Execute() \
	void FRigUnit_CollectionLoop::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_602_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
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
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[4].GetData(false); \
		bool& Continue = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& Completed = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Item, \
			Index, \
			Count, \
			Ratio, \
			Continue, \
			Completed, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionLoop>();


#define FRigUnit_CollectionAddItem_Execute() \
	void FRigUnit_CollectionAddItem::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_655_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Result = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Collection, \
			Item, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionAddItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
