// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/Experimental/PhysicsThreadLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBodyInstanceAsyncPhysicsTickHandle;
#ifdef ENGINE_PhysicsThreadLibrary_generated_h
#error "PhysicsThreadLibrary.generated.h already included, missing '#pragma once' in PhysicsThreadLibrary.h"
#endif
#define ENGINE_PhysicsThreadLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddForce);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddForce);


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsThreadLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsThreadLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsThreadLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsThreadLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsThreadLibrary(); \
	friend struct Z_Construct_UClass_UPhysicsThreadLibrary_Statics; \
public: \
	DECLARE_CLASS(UPhysicsThreadLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsThreadLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsThreadLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsThreadLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsThreadLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsThreadLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsThreadLibrary(UPhysicsThreadLibrary&&); \
	NO_API UPhysicsThreadLibrary(const UPhysicsThreadLibrary&); \
public: \
	NO_API virtual ~UPhysicsThreadLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsThreadLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsThreadLibrary(UPhysicsThreadLibrary&&); \
	NO_API UPhysicsThreadLibrary(const UPhysicsThreadLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsThreadLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsThreadLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsThreadLibrary) \
	NO_API virtual ~UPhysicsThreadLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsThreadLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_Experimental_PhysicsThreadLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
