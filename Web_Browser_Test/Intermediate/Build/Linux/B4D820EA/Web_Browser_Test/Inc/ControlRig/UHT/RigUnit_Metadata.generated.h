// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_Metadata.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Metadata_generated_h
#error "RigUnit_Metadata.generated.h already included, missing '#pragma once' in RigUnit_Metadata.h"
#endif
#define CONTROLRIG_RigUnit_Metadata_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_MetadataBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_MetadataBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_GetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_GetMetadata>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_SetMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatch_MetadataBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_SetMetadata>();


#define FRigUnit_RemoveMetadata_Execute() \
	void FRigUnit_RemoveMetadata::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
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
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Name, \
			Removed, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadata>();


#define FRigUnit_RemoveAllMetadata_Execute() \
	void FRigUnit_RemoveAllMetadata::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveAllMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
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
		bool& Removed = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Removed, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveAllMetadata>();


#define FRigUnit_HasMetadata_Execute() \
	void FRigUnit_HasMetadata::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_248_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Name, \
		const ERigMetadataType Type, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
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
		const FName& Name = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[2].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Name, \
			Type, \
			Found, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadata>();


#define FRigUnit_FindItemsWithMetadata_Execute() \
	void FRigUnit_FindItemsWithMetadata::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadata_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const ERigMetadataType Type, \
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
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigMetadataType Type = *(ERigMetadataType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Type, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadata>();


#define FRigUnit_GetMetadataTags_Execute() \
	void FRigUnit_GetMetadataTags::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		TArray<FName>& Tags, \
		FCachedRigElement& CachedIndex, \
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
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tags, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetMetadataTags>();


#define FRigUnit_SetMetadataTag_Execute() \
	void FRigUnit_SetMetadataTag::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		FCachedRigElement& CachedIndex, \
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
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tag, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTag>();


#define FRigUnit_SetMetadataTagArray_Execute() \
	void FRigUnit_SetMetadataTagArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_396_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		FCachedRigElement& CachedIndex, \
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
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tags, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMetadataTagArray>();


#define FRigUnit_RemoveMetadataTag_Execute() \
	void FRigUnit_RemoveMetadataTag::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RemoveMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Removed, \
		FCachedRigElement& CachedIndex, \
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
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Removed = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tag, \
			Removed, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RemoveMetadataTag>();


#define FRigUnit_HasMetadataTag_Execute() \
	void FRigUnit_HasMetadataTag::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_471_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Tag, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
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
		const FName& Tag = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tag, \
			Found, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTag>();


#define FRigUnit_HasMetadataTagArray_Execute() \
	void FRigUnit_HasMetadataTagArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_510_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HasMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const TArrayView<const FName>& Tags, \
		bool& Found, \
		FCachedRigElement& CachedIndex, \
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
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Item, \
			Tags, \
			Found, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HasMetadataTagArray>();


#define FRigUnit_FindItemsWithMetadataTag_Execute() \
	void FRigUnit_FindItemsWithMetadataTag::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Tag, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_549_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Tag, \
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
		const FName& Tag = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Tag, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTag>();


#define FRigUnit_FindItemsWithMetadataTagArray_Execute() \
	void FRigUnit_FindItemsWithMetadataTagArray::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FName>& Tags, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_576_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FindItemsWithMetadataTagArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FName>& Tags, \
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
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Tags, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FindItemsWithMetadataTagArray>();


#define FRigUnit_FilterItemsByMetadataTags_Execute() \
	void FRigUnit_FilterItemsByMetadataTags::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h_603_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FilterItemsByMetadataTags_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const TArrayView<const FName>& Tags, \
		const bool Inclusive, \
		TArray<FRigElementKey>& Result, \
		TArray<FCachedRigElement>& CachedIndices, \
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
		TArray<FName>& Tags = *(TArray<FName>*)RigVMMemoryHandles[1].GetData(false); \
		const bool Inclusive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FCachedRigElement>& CachedIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Items, \
			Tags, \
			Inclusive, \
			Result, \
			CachedIndices, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FilterItemsByMetadataTags>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_Metadata_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
