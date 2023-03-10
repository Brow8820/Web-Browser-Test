// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/PawnAction_BlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef AIMODULE_PawnAction_BlueprintBase_generated_h
#error "PawnAction_BlueprintBase.generated.h already included, missing '#pragma once' in PawnAction_BlueprintBase.h"
#endif
#define AIMODULE_PawnAction_BlueprintBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnAction_BlueprintBase(); \
	friend struct Z_Construct_UClass_UPawnAction_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_BlueprintBase, UPawnAction, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPawnAction_BlueprintBase(); \
	friend struct Z_Construct_UClass_UPawnAction_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UPawnAction_BlueprintBase, UPawnAction, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_BlueprintBase(UPawnAction_BlueprintBase&&); \
	NO_API UPawnAction_BlueprintBase(const UPawnAction_BlueprintBase&); \
public: \
	NO_API virtual ~UPawnAction_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction_BlueprintBase(UPawnAction_BlueprintBase&&); \
	NO_API UPawnAction_BlueprintBase(const UPawnAction_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction_BlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction_BlueprintBase) \
	NO_API virtual ~UPawnAction_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnAction_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
