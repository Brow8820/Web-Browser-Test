// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Collision/RigUnit_WorldCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_WorldCollision_generated_h
#error "RigUnit_WorldCollision.generated.h already included, missing '#pragma once' in RigUnit_WorldCollision.h"
#endif
#define CONTROLRIG_RigUnit_WorldCollision_generated_h


#define FRigUnit_SphereTraceWorld_Execute() \
	void FRigUnit_SphereTraceWorld::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const ECollisionChannel Channel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const ECollisionChannel Channel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const ECollisionChannel Channel = *(ECollisionChannel*)RigVMMemoryHandles[2].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetData(false); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Start, \
			End, \
			Channel, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SphereTraceWorld>();


#define FRigUnit_SphereTraceByTraceChannel_Execute() \
	void FRigUnit_SphereTraceByTraceChannel::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const ETraceTypeQuery TraceChannel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const ETraceTypeQuery TraceChannel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const ETraceTypeQuery TraceChannel = *(ETraceTypeQuery*)RigVMMemoryHandles[2].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetData(false); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Start, \
			End, \
			TraceChannel, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SphereTraceByTraceChannel>();


#define FRigUnit_SphereTraceByObjectTypes_Execute() \
	void FRigUnit_SphereTraceByObjectTypes::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery> >& ObjectTypes, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery> >& ObjectTypes, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		TArray<TEnumAsByte<EObjectTypeQuery> >& ObjectTypes = *(TArray<TEnumAsByte<EObjectTypeQuery> >*)RigVMMemoryHandles[2].GetData(false); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetData(false); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Start, \
			End, \
			ObjectTypes, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SphereTraceByObjectTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
