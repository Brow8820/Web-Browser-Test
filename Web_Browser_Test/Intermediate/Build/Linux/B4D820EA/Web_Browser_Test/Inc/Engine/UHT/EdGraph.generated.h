// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraph_generated_h
#error "EdGraph.generated.h already included, missing '#pragma once' in EdGraph.h"
#endif
#define ENGINE_EdGraph_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGraphReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGraphReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UEdGraph, NO_API)


#else
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraph(); \
	friend struct Z_Construct_UClass_UEdGraph_Statics; \
public: \
	DECLARE_CLASS(UEdGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraph) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraph(); \
	friend struct Z_Construct_UClass_UEdGraph_Statics; \
public: \
	DECLARE_CLASS(UEdGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraph) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraph(UEdGraph&&); \
	NO_API UEdGraph(const UEdGraph&); \
public: \
	NO_API virtual ~UEdGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraph(UEdGraph&&); \
	NO_API UEdGraph(const UEdGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph) \
	NO_API virtual ~UEdGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
