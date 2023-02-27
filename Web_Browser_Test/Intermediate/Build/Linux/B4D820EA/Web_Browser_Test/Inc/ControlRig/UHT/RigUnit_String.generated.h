// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Core/RigUnit_String.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_String_generated_h
#error "RigUnit_String.generated.h already included, missing '#pragma once' in RigUnit_String.h"
#endif
#define CONTROLRIG_RigUnit_String_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringBase>();


#define FRigUnit_StringConcat_Execute() \
	void FRigUnit_StringConcat::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringConcat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& A = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& B = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringConcat>();


#define FRigUnit_StringTruncate_Execute() \
	void FRigUnit_StringTruncate::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringTruncate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FString& Remainder = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		FString& Chopped = *(FString*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Count, \
			FromEnd, \
			Remainder, \
			Chopped, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringTruncate>();


#define FRigUnit_StringReplace_Execute() \
	void FRigUnit_StringReplace::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringReplace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Old = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		const FString& New = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Old, \
			New, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringReplace>();


#define FRigUnit_StringEndsWith_Execute() \
	void FRigUnit_StringEndsWith::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringEndsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
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
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Ending = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Ending, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringEndsWith>();


#define FRigUnit_StringStartsWith_Execute() \
	void FRigUnit_StringStartsWith::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Start, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringStartsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Start, \
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
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Start = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Start, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringStartsWith>();


#define FRigUnit_StringContains_Execute() \
	void FRigUnit_StringContains::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Search, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringContains_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Name, \
		const FString& Search, \
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
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Name, \
			Search, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringContains>();


#define FRigUnit_StringLength_Execute() \
	void FRigUnit_StringLength::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		int32& Length, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		int32& Length, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		int32& Length = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Length, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringLength>();


#define FRigUnit_StringTrimWhitespace_Execute() \
	void FRigUnit_StringTrimWhitespace::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringTrimWhitespace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringTrimWhitespace>();


#define FRigUnit_StringToUppercase_Execute() \
	void FRigUnit_StringToUppercase::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringToUppercase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringToUppercase>();


#define FRigUnit_StringToLowercase_Execute() \
	void FRigUnit_StringToLowercase::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringToLowercase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringToLowercase>();


#define FRigUnit_StringReverse_Execute() \
	void FRigUnit_StringReverse::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Reverse, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringReverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		FString& Reverse, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Reverse = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Reverse, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringReverse>();


#define FRigUnit_StringLeft_Execute() \
	void FRigUnit_StringLeft::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringLeft_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Count, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringLeft>();


#define FRigUnit_StringRight_Execute() \
	void FRigUnit_StringRight::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_338_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringRight_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Count, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringRight>();


#define FRigUnit_StringMiddle_Execute() \
	void FRigUnit_StringMiddle::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_365_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringMiddle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Start = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Start, \
			Count, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringMiddle>();


#define FRigUnit_StringFind_Execute() \
	void FRigUnit_StringFind::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_398_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringFind_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Search, \
			Found, \
			Index, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringFind>();


#define FRigUnit_StringSplit_Execute() \
	void FRigUnit_StringSplit::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_429_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringSplit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FString>& Result = *(TArray<FString>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Separator, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringSplit>();


#define FRigUnit_StringJoin_Execute() \
	void FRigUnit_StringJoin::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_455_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringJoin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FString>& Values = *(TArray<FString>*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Values, \
			Separator, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringJoin>();


#define FRigUnit_StringPadInteger_Execute() \
	void FRigUnit_StringPadInteger::StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_481_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StringPadInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		const FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Digits = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.PublicData, \
			Value, \
			Digits, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_StringBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StringPadInteger>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_ToString>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h_528_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigDispatchFactory Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigDispatch_FromString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_String_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
