// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Math/RigUnit_MathQuaternion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathQuaternion_generated_h
#error "RigUnit_MathQuaternion.generated.h already included, missing '#pragma once' in RigUnit_MathQuaternion.h"
#endif
#define CONTROLRIG_RigUnit_MathQuaternion_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionBinaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionBinaryAggregateOp>();


#define FRigUnit_MathQuaternionFromAxisAndAngle_Execute() \
	void FRigUnit_MathQuaternionFromAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Angle = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Axis, \
			Angle, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromAxisAndAngle>();


#define FRigUnit_MathQuaternionFromEuler_Execute() \
	void FRigUnit_MathQuaternionFromEuler::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Euler = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Euler, \
			RotationOrder, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromEuler>();


#define FRigUnit_MathQuaternionFromRotator_Execute() \
	void FRigUnit_MathQuaternionFromRotator::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Rotator, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromRotator>();


#define FRigUnit_MathQuaternionFromRotatorV2_Execute() \
	void FRigUnit_MathQuaternionFromRotatorV2::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotatorV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromRotatorV2>();


#define FRigUnit_MathQuaternionFromTwoVectors_Execute() \
	void FRigUnit_MathQuaternionFromTwoVectors::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromTwoVectors>();


#define FRigUnit_MathQuaternionToAxisAndAngle_Execute() \
	void FRigUnit_MathQuaternionToAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Axis, \
			Angle, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToAxisAndAngle>();


#define FRigUnit_MathQuaternionScale_Execute() \
	void FRigUnit_MathQuaternionScale::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FQuat& Value, \
		const float Scale, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		FQuat& Value, \
		const float Scale, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Scale, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionScale>();


#define FRigUnit_MathQuaternionScaleV2_Execute() \
	void FRigUnit_MathQuaternionScaleV2::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScaleV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Factor = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Factor, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionScaleV2>();


#define FRigUnit_MathQuaternionToEuler_Execute() \
	void FRigUnit_MathQuaternionToEuler::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			RotationOrder, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToEuler>();


#define FRigUnit_MathQuaternionToRotator_Execute() \
	void FRigUnit_MathQuaternionToRotator::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_322_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToRotator>();


#define FRigUnit_MathQuaternionMul_Execute() \
	void FRigUnit_MathQuaternionMul::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionMul>();


#define FRigUnit_MathQuaternionInverse_Execute() \
	void FRigUnit_MathQuaternionInverse::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionInverse>();


#define FRigUnit_MathQuaternionSlerp_Execute() \
	void FRigUnit_MathQuaternionSlerp::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			T, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSlerp>();


#define FRigUnit_MathQuaternionEquals_Execute() \
	void FRigUnit_MathQuaternionEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_398_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionEquals>();


#define FRigUnit_MathQuaternionNotEquals_Execute() \
	void FRigUnit_MathQuaternionNotEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_428_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionNotEquals>();


#define FRigUnit_MathQuaternionSelectBool_Execute() \
	void FRigUnit_MathQuaternionSelectBool::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_458_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& IfTrue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& IfFalse = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSelectBool>();


#define FRigUnit_MathQuaternionDot_Execute() \
	void FRigUnit_MathQuaternionDot::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_491_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionDot>();


#define FRigUnit_MathQuaternionUnit_Execute() \
	void FRigUnit_MathQuaternionUnit::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_518_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionUnit>();


#define FRigUnit_MathQuaternionRotateVector_Execute() \
	void FRigUnit_MathQuaternionRotateVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_529_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Transform = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Transform, \
			Vector, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionRotateVector>();


#define FRigUnit_MathQuaternionGetAxis_Execute() \
	void FRigUnit_MathQuaternionGetAxis::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const EAxis::Type Axis, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_556_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const EAxis::Type Axis, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Quaternion = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EAxis::Type Axis = *(EAxis::Type*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Quaternion, \
			Axis, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionGetAxis>();


#define FRigUnit_MathQuaternionSwingTwist_Execute() \
	void FRigUnit_MathQuaternionSwingTwist::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_585_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Swing = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Twist = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			TwistAxis, \
			Swing, \
			Twist, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSwingTwist>();


#define FRigUnit_MathQuaternionRotationOrder_Execute() \
	void FRigUnit_MathQuaternionRotationOrder::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		EEulerRotationOrder& RotationOrder, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_615_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		EEulerRotationOrder& RotationOrder, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		EEulerRotationOrder& RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			RotationOrder, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionRotationOrder>();


#define FRigUnit_MathQuaternionMakeRelative_Execute() \
	void FRigUnit_MathQuaternionMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_636_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMakeRelative_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Global = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Local = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Global, \
			Parent, \
			Local, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionMakeRelative>();


#define FRigUnit_MathQuaternionMakeAbsolute_Execute() \
	void FRigUnit_MathQuaternionMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_662_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMakeAbsolute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Local = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Local, \
			Parent, \
			Global, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionMakeAbsolute>();


#define FRigUnit_MathQuaternionMirrorTransform_Execute() \
	void FRigUnit_MathQuaternionMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EAxis::Type MirrorAxis, \
		const EAxis::Type AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_688_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMirrorTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EAxis::Type MirrorAxis, \
		const EAxis::Type AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EAxis::Type MirrorAxis = *(EAxis::Type*)RigVMMemoryHandles[1].GetData(false); \
		const EAxis::Type AxisToFlip = *(EAxis::Type*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			MirrorAxis, \
			AxisToFlip, \
			CentralTransform, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionMirrorTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
