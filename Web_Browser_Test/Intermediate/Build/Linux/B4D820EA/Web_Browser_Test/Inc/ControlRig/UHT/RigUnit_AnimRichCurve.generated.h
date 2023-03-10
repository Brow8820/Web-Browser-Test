// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Animation/RigUnit_AnimRichCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AnimRichCurve_generated_h
#error "RigUnit_AnimRichCurve.generated.h already included, missing '#pragma once' in RigUnit_AnimRichCurve.h"
#endif
#define CONTROLRIG_RigUnit_AnimRichCurve_generated_h


#define FRigUnit_AnimRichCurve_Execute() \
	void FRigUnit_AnimRichCurve::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRuntimeFloatCurve& Curve, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FRuntimeFloatCurve& Curve, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRuntimeFloatCurve& Curve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Curve, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AnimRichCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
