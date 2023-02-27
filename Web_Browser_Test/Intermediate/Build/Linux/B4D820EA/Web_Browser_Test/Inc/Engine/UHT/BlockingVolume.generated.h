// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/BlockingVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlockingVolume_generated_h
#error "BlockingVolume.generated.h already included, missing '#pragma once' in BlockingVolume.h"
#endif
#define ENGINE_BlockingVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockingVolume(); \
	friend struct Z_Construct_UClass_ABlockingVolume_Statics; \
public: \
	DECLARE_CLASS(ABlockingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABlockingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlockingVolume(); \
	friend struct Z_Construct_UClass_ABlockingVolume_Statics; \
public: \
	DECLARE_CLASS(ABlockingVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ABlockingVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABlockingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABlockingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockingVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ABlockingVolume(ABlockingVolume&&); \
	ENGINE_API ABlockingVolume(const ABlockingVolume&); \
public: \
	ENGINE_API virtual ~ABlockingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ABlockingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ABlockingVolume(ABlockingVolume&&); \
	ENGINE_API ABlockingVolume(const ABlockingVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ABlockingVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockingVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockingVolume) \
	ENGINE_API virtual ~ABlockingVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlockingVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABlockingVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_BlockingVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS