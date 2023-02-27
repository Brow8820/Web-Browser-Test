// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ScriptViewportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ScriptViewportClient_generated_h
#error "ScriptViewportClient.generated.h already included, missing '#pragma once' in ScriptViewportClient.h"
#endif
#define ENGINE_ScriptViewportClient_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptViewportClient(); \
	friend struct Z_Construct_UClass_UScriptViewportClient_Statics; \
public: \
	DECLARE_CLASS(UScriptViewportClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScriptViewportClient)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUScriptViewportClient(); \
	friend struct Z_Construct_UClass_UScriptViewportClient_Statics; \
public: \
	DECLARE_CLASS(UScriptViewportClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScriptViewportClient)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptViewportClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptViewportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptViewportClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptViewportClient(UScriptViewportClient&&); \
	NO_API UScriptViewportClient(const UScriptViewportClient&); \
public: \
	NO_API virtual ~UScriptViewportClient();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptViewportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptViewportClient(UScriptViewportClient&&); \
	NO_API UScriptViewportClient(const UScriptViewportClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptViewportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptViewportClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptViewportClient) \
	NO_API virtual ~UScriptViewportClient();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptViewportClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UScriptViewportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ScriptViewportClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
