// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Math/RigUnit_Noise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Noise_generated_h
#error "RigUnit_Noise.generated.h already included, missing '#pragma once' in RigUnit_Noise.h"
#endif
#define CONTROLRIG_RigUnit_Noise_generated_h


#define FRigUnit_NoiseFloat_Execute() \
	void FRigUnit_NoiseFloat::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Speed = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Frequency = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Time = *(float*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseFloat>();


#define FRigUnit_NoiseDouble_Execute() \
	void FRigUnit_NoiseDouble::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseDouble_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double Speed = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Frequency = *(double*)RigVMMemoryHandles[2].GetData(false); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[5].GetData(false); \
		double& Time = *(double*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseDouble>();


#define FRigUnit_NoiseVector_Execute() \
	void FRigUnit_NoiseVector::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Position, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseVector>();


#define FRigUnit_NoiseVector2_Execute() \
	void FRigUnit_NoiseVector2::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseVector2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseVector2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
