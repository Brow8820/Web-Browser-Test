// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsThruster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsThruster_generated_h
#error "PhysicsThruster.generated.h already included, missing '#pragma once' in PhysicsThruster.h"
#endif
#define ENGINE_PhysicsThruster_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsThruster(); \
	friend struct Z_Construct_UClass_APhysicsThruster_Statics; \
public: \
	DECLARE_CLASS(APhysicsThruster, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APhysicsThruster)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsThruster(); \
	friend struct Z_Construct_UClass_APhysicsThruster_Statics; \
public: \
	DECLARE_CLASS(APhysicsThruster, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APhysicsThruster)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsThruster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsThruster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsThruster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsThruster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsThruster(APhysicsThruster&&); \
	NO_API APhysicsThruster(const APhysicsThruster&); \
public: \
	NO_API virtual ~APhysicsThruster();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsThruster(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsThruster(APhysicsThruster&&); \
	NO_API APhysicsThruster(const APhysicsThruster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsThruster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsThruster); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsThruster) \
	NO_API virtual ~APhysicsThruster();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsThruster."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APhysicsThruster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
