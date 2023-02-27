// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction_Wait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_PawnAction_Wait_generated_h
#error "PawnAction_Wait.generated.h already included, missing '#pragma once' in PawnAction_Wait.h"
#endif
#define AIMODULE_PawnAction_Wait_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnAction_Wait(); \
	friend struct Z_Construct_UClass_UPawnAction_Wait_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_Wait, UPawnAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Wait)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPawnAction_Wait(); \
	friend struct Z_Construct_UClass_UPawnAction_Wait_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_Wait, UPawnAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_Wait)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Wait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Wait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Wait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_Wait(UPawnAction_Wait&&); \
	NO_API UPawnAction_Wait(const UPawnAction_Wait&); \
public: \
	NO_API virtual ~UPawnAction_Wait();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_Wait(UPawnAction_Wait&&); \
	NO_API UPawnAction_Wait(const UPawnAction_Wait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_Wait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_Wait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_Wait) \
	NO_API virtual ~UPawnAction_Wait();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction_Wait."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnAction_Wait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Wait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
