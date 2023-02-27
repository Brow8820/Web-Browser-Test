// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintsScripting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstraintsManager;
class USceneComponent;
class UTickableTransformConstraint;
class UTransformableComponentHandle;
class UTransformableHandle;
class UWorld;
enum class ETransformConstraintType : uint8;
#ifdef CONSTRAINTS_ConstraintsScripting_generated_h
#error "ConstraintsScripting.generated.h already included, missing '#pragma once' in ConstraintsScripting.h"
#endif
#define CONSTRAINTS_ConstraintsScripting_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveConstraint); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execCreateFromType); \
	DECLARE_FUNCTION(execCreateTransformableComponentHandle); \
	DECLARE_FUNCTION(execGetManager);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveConstraint); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execCreateFromType); \
	DECLARE_FUNCTION(execCreateTransformableComponentHandle); \
	DECLARE_FUNCTION(execGetManager);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintsScriptingLibrary(); \
	friend struct Z_Construct_UClass_UConstraintsScriptingLibrary_Statics; \
public: \
	DECLARE_CLASS(UConstraintsScriptingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), NO_API) \
	DECLARE_SERIALIZER(UConstraintsScriptingLibrary)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUConstraintsScriptingLibrary(); \
	friend struct Z_Construct_UClass_UConstraintsScriptingLibrary_Statics; \
public: \
	DECLARE_CLASS(UConstraintsScriptingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), NO_API) \
	DECLARE_SERIALIZER(UConstraintsScriptingLibrary)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintsScriptingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintsScriptingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintsScriptingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintsScriptingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstraintsScriptingLibrary(UConstraintsScriptingLibrary&&); \
	NO_API UConstraintsScriptingLibrary(const UConstraintsScriptingLibrary&); \
public: \
	NO_API virtual ~UConstraintsScriptingLibrary();


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintsScriptingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstraintsScriptingLibrary(UConstraintsScriptingLibrary&&); \
	NO_API UConstraintsScriptingLibrary(const UConstraintsScriptingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintsScriptingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintsScriptingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintsScriptingLibrary) \
	NO_API virtual ~UConstraintsScriptingLibrary();


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_19_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UConstraintsScriptingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
