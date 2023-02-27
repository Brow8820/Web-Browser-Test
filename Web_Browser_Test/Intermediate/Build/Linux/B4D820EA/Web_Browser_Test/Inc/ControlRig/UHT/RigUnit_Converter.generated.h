// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Converter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Converter_generated_h
#error "RigUnit_Converter.generated.h already included, missing '#pragma once' in RigUnit_Converter.h"
#endif
#define CONTROLRIG_RigUnit_Converter_generated_h


#define FRigUnit_ConvertTransform_Execute() \
	void FRigUnit_ConvertTransform::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Input, \
		FEulerTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Input, \
		FEulerTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Input = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FEulerTransform& Result = *(FEulerTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertTransform>();


#define FRigUnit_ConvertEulerTransform_Execute() \
	void FRigUnit_ConvertEulerTransform::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FEulerTransform& Input, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FEulerTransform& Input, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FEulerTransform& Input = *(FEulerTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertEulerTransform>();


#define FRigUnit_ConvertRotation_Execute() \
	void FRigUnit_ConvertRotation::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Input, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Input, \
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
		const FRotator& Input = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertRotation>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_ConvertRotation Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertVectorRotation>();


#define FRigUnit_ConvertQuaternion_Execute() \
	void FRigUnit_ConvertQuaternion::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
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
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertQuaternion>();


#define FRigUnit_ConvertVectorToRotation_Execute() \
	void FRigUnit_ConvertVectorToRotation::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Input, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Input, \
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
		const FVector& Input = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertVectorToRotation>();


#define FRigUnit_ConvertVectorToQuaternion_Execute() \
	void FRigUnit_ConvertVectorToQuaternion::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Input, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Input, \
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
		const FVector& Input = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertVectorToQuaternion>();


#define FRigUnit_ConvertRotationToVector_Execute() \
	void FRigUnit_ConvertRotationToVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Input, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Input, \
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
		const FRotator& Input = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertRotationToVector>();


#define FRigUnit_ConvertQuaternionToVector_Execute() \
	void FRigUnit_ConvertQuaternionToVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
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
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Input, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ConvertQuaternionToVector>();


#define FRigUnit_ToSwingAndTwist_Execute() \
	void FRigUnit_ToSwingAndTwist::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics; \
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
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToSwingAndTwist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Converter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
