// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BoundsCopyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoundsCopyComponent_generated_h
#error "BoundsCopyComponent.generated.h already included, missing '#pragma once' in BoundsCopyComponent.h"
#endif
#define ENGINE_BoundsCopyComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTransformToBounds); \
	DECLARE_FUNCTION(execSetRotation);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTransformToBounds); \
	DECLARE_FUNCTION(execSetRotation);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoundsCopyComponent(); \
	friend struct Z_Construct_UClass_UBoundsCopyComponent_Statics; \
public: \
	DECLARE_CLASS(UBoundsCopyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoundsCopyComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBoundsCopyComponent(); \
	friend struct Z_Construct_UClass_UBoundsCopyComponent_Statics; \
public: \
	DECLARE_CLASS(UBoundsCopyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoundsCopyComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoundsCopyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoundsCopyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoundsCopyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoundsCopyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoundsCopyComponent(UBoundsCopyComponent&&); \
	NO_API UBoundsCopyComponent(const UBoundsCopyComponent&); \
public: \
	NO_API virtual ~UBoundsCopyComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoundsCopyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoundsCopyComponent(UBoundsCopyComponent&&); \
	NO_API UBoundsCopyComponent(const UBoundsCopyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoundsCopyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoundsCopyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoundsCopyComponent) \
	NO_API virtual ~UBoundsCopyComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BoundsCopyComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBoundsCopyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BoundsCopyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
