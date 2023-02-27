// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Math/RigUnit_MathDouble.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathDouble_generated_h
#error "RigUnit_MathDouble.generated.h already included, missing '#pragma once' in RigUnit_MathDouble.h"
#endif
#define CONTROLRIG_RigUnit_MathDouble_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleConstant>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleBinaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleBinaryAggregateOp>();


#define FRigUnit_MathDoubleConstPi_Execute() \
	void FRigUnit_MathDoubleConstPi::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleConstPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleConstPi>();


#define FRigUnit_MathDoubleConstHalfPi_Execute() \
	void FRigUnit_MathDoubleConstHalfPi::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleConstHalfPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleConstHalfPi>();


#define FRigUnit_MathDoubleConstTwoPi_Execute() \
	void FRigUnit_MathDoubleConstTwoPi::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleConstTwoPi_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleConstTwoPi>();


#define FRigUnit_MathDoubleConstE_Execute() \
	void FRigUnit_MathDoubleConstE::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleConstE_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		double& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		double& Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleConstE>();


#define FRigUnit_MathDoubleAdd_Execute() \
	void FRigUnit_MathDoubleAdd::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleAdd>();


#define FRigUnit_MathDoubleSub_Execute() \
	void FRigUnit_MathDoubleSub::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleSub>();


#define FRigUnit_MathDoubleMul_Execute() \
	void FRigUnit_MathDoubleMul::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleMul>();


#define FRigUnit_MathDoubleDiv_Execute() \
	void FRigUnit_MathDoubleDiv::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleDiv>();


#define FRigUnit_MathDoubleMod_Execute() \
	void FRigUnit_MathDoubleMod::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleMod>();


#define FRigUnit_MathDoubleMin_Execute() \
	void FRigUnit_MathDoubleMin::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleMin>();


#define FRigUnit_MathDoubleMax_Execute() \
	void FRigUnit_MathDoubleMax::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryAggregateOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleMax>();


#define FRigUnit_MathDoublePow_Execute() \
	void FRigUnit_MathDoublePow::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_241_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoublePow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoublePow>();


#define FRigUnit_MathDoubleSqrt_Execute() \
	void FRigUnit_MathDoubleSqrt::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleSqrt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleSqrt>();


#define FRigUnit_MathDoubleNegate_Execute() \
	void FRigUnit_MathDoubleNegate::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_271_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleNegate>();


#define FRigUnit_MathDoubleAbs_Execute() \
	void FRigUnit_MathDoubleAbs::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_283_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleAbs>();


#define FRigUnit_MathDoubleFloor_Execute() \
	void FRigUnit_MathDoubleFloor::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleFloor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Int, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleFloor>();


#define FRigUnit_MathDoubleCeil_Execute() \
	void FRigUnit_MathDoubleCeil::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_322_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleCeil_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Int, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleCeil>();


#define FRigUnit_MathDoubleRound_Execute() \
	void FRigUnit_MathDoubleRound::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleRound_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Int, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleRound>();


#define FRigUnit_MathDoubleToInt_Execute() \
	void FRigUnit_MathDoubleToInt::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_376_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleToInt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
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
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleToInt>();


#define FRigUnit_MathDoubleSign_Execute() \
	void FRigUnit_MathDoubleSign::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleSign>();


#define FRigUnit_MathDoubleClamp_Execute() \
	void FRigUnit_MathDoubleClamp::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_412_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
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
		const double Minimum = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Minimum, \
			Maximum, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleClamp>();


#define FRigUnit_MathDoubleLerp_Execute() \
	void FRigUnit_MathDoubleLerp::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_441_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double T = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleLerp>();


#define FRigUnit_MathDoubleRemap_Execute() \
	void FRigUnit_MathDoubleRemap::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_471_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleRemap_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result, \
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
		const double SourceMinimum = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double SourceMaximum = *(double*)RigVMMemoryHandles[2].GetData(false); \
		const double TargetMinimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double TargetMaximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			bClamp, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleRemap>();


#define FRigUnit_MathDoubleEquals_Execute() \
	void FRigUnit_MathDoubleEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_512_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleEquals>();


#define FRigUnit_MathDoubleNotEquals_Execute() \
	void FRigUnit_MathDoubleNotEquals::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_541_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleNotEquals>();


#define FRigUnit_MathDoubleGreater_Execute() \
	void FRigUnit_MathDoubleGreater::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_570_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleGreater_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleGreater>();


#define FRigUnit_MathDoubleLess_Execute() \
	void FRigUnit_MathDoubleLess::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_597_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleLess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleLess>();


#define FRigUnit_MathDoubleGreaterEqual_Execute() \
	void FRigUnit_MathDoubleGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_624_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleGreaterEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleGreaterEqual>();


#define FRigUnit_MathDoubleLessEqual_Execute() \
	void FRigUnit_MathDoubleLessEqual::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_651_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleLessEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleLessEqual>();


#define FRigUnit_MathDoubleIsNearlyZero_Execute() \
	void FRigUnit_MathDoubleIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Tolerance, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_678_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleIsNearlyZero_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		const double Tolerance, \
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
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double Tolerance = *(double*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Tolerance, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleIsNearlyZero>();


#define FRigUnit_MathDoubleIsNearlyEqual_Execute() \
	void FRigUnit_MathDoubleIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_705_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleIsNearlyEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
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
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Tolerance = *(double*)RigVMMemoryHandles[2].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Tolerance, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleIsNearlyEqual>();


#define FRigUnit_MathDoubleDeg_Execute() \
	void FRigUnit_MathDoubleDeg::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_735_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleDeg_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleDeg>();


#define FRigUnit_MathDoubleRad_Execute() \
	void FRigUnit_MathDoubleRad::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_747_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleRad_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleRad>();


#define FRigUnit_MathDoubleSin_Execute() \
	void FRigUnit_MathDoubleSin::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_759_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleSin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleSin>();


#define FRigUnit_MathDoubleCos_Execute() \
	void FRigUnit_MathDoubleCos::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_771_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleCos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleCos>();


#define FRigUnit_MathDoubleTan_Execute() \
	void FRigUnit_MathDoubleTan::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_783_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleTan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleTan>();


#define FRigUnit_MathDoubleAsin_Execute() \
	void FRigUnit_MathDoubleAsin::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_795_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleAsin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleAsin>();


#define FRigUnit_MathDoubleAcos_Execute() \
	void FRigUnit_MathDoubleAcos::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_807_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleAcos_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleAcos>();


#define FRigUnit_MathDoubleAtan_Execute() \
	void FRigUnit_MathDoubleAtan::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_819_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleAtan_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleAtan>();


#define FRigUnit_MathDoubleLawOfCosine_Execute() \
	void FRigUnit_MathDoubleLawOfCosine::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_831_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleLawOfCosine_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const double A = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double B = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double C = *(double*)RigVMMemoryHandles[2].GetData(false); \
		double& AlphaAngle = *(double*)RigVMMemoryHandles[3].GetData(false); \
		double& BetaAngle = *(double*)RigVMMemoryHandles[4].GetData(false); \
		double& GammaAngle = *(double*)RigVMMemoryHandles[5].GetData(false); \
		bool& bValid = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			C, \
			AlphaAngle, \
			BetaAngle, \
			GammaAngle, \
			bValid, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleLawOfCosine>();


#define FRigUnit_MathDoubleExponential_Execute() \
	void FRigUnit_MathDoubleExponential::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h_870_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathDoubleExponential_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const double Value, \
		double& Result, \
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
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathDoubleUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathDoubleExponential>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathDouble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
