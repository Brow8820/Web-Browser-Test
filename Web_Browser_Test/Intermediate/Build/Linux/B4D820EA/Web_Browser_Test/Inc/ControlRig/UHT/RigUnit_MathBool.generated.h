// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Math/RigUnit_MathBool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathBool_generated_h
#error "RigUnit_MathBool.generated.h already included, missing '#pragma once' in RigUnit_MathBool.h"
#endif
#define CONTROLRIG_RigUnit_MathBool_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstant>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolBinaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolBinaryAggregateOp>();


#define FRigUnit_MathBoolConstTrue_Execute() \
	void FRigUnit_MathBoolConstTrue::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstTrue>();


#define FRigUnit_MathBoolConstFalse_Execute() \
	void FRigUnit_MathBoolConstFalse::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstFalse>();


#define FRigUnit_MathBoolNot_Execute() \
	void FRigUnit_MathBoolNot::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
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
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNot>();


#define FRigUnit_MathBoolAnd_Execute() \
	void FRigUnit_MathBoolAnd::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolAnd>();


#define FRigUnit_MathBoolNand_Execute() \
	void FRigUnit_MathBoolNand::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNand>();


#define FRigUnit_MathBoolNand2_Execute() \
	void FRigUnit_MathBoolNand2::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNand2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNand2>();


#define FRigUnit_MathBoolOr_Execute() \
	void FRigUnit_MathBoolOr::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolOr>();


#define FRigUnit_MathBoolEquals_Execute() \
	void FRigUnit_MathBoolEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolEquals>();


#define FRigUnit_MathBoolNotEquals_Execute() \
	void FRigUnit_MathBoolNotEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNotEquals>();


#define FRigUnit_MathBoolToggled_Execute() \
	void FRigUnit_MathBoolToggled::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Toggled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Initialized = *(bool*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Toggled, \
			Initialized, \
			LastValue, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolToggled>();


#define FRigUnit_MathBoolFlipFlop_Execute() \
	void FRigUnit_MathBoolFlipFlop::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolFlipFlop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool StartValue = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			StartValue, \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolFlipFlop>();


#define FRigUnit_MathBoolOnce_Execute() \
	void FRigUnit_MathBoolOnce::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_312_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolOnce_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Duration = *(float*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolOnce>();


#define FRigUnit_MathBoolToFloat_Execute() \
	void FRigUnit_MathBoolToFloat::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolToFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
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
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolToFloat>();


#define FRigUnit_MathBoolToInteger_Execute() \
	void FRigUnit_MathBoolToInteger::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_368_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolToInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolToInteger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
