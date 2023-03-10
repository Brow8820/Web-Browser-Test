// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InterpToMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef ENGINE_InterpToMovementComponent_generated_h
#error "InterpToMovementComponent.generated.h already included, missing '#pragma once' in InterpToMovementComponent.h"
#endif
#define ENGINE_InterpToMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpControlPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpControlPoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_67_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToReverseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToReverseDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToReverseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_68_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToStopDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToStopDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToStopDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToStopDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_69_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToWaitBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitBeginDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToWaitBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_70_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToWaitEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitEndDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToWaitEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_71_DELEGATE \
struct InterpToMovementComponent_eventOnInterpToResetDelegate_Parms \
{ \
	FHitResult ImpactResult; \
	float Time; \
}; \
static inline void FOnInterpToResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToResetDelegate, FHitResult const& ImpactResult, float Time) \
{ \
	InterpToMovementComponent_eventOnInterpToResetDelegate_Parms Parms; \
	Parms.ImpactResult=ImpactResult; \
	Parms.Time=Time; \
	OnInterpToResetDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetControlPoints); \
	DECLARE_FUNCTION(execFinaliseControlPoints); \
	DECLARE_FUNCTION(execRestartMovement); \
	DECLARE_FUNCTION(execAddControlPointPosition); \
	DECLARE_FUNCTION(execStopSimulating);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetControlPoints); \
	DECLARE_FUNCTION(execFinaliseControlPoints); \
	DECLARE_FUNCTION(execRestartMovement); \
	DECLARE_FUNCTION(execAddControlPointPosition); \
	DECLARE_FUNCTION(execStopSimulating);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpToMovementComponent(); \
	friend struct Z_Construct_UClass_UInterpToMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UInterpToMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpToMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUInterpToMovementComponent(); \
	friend struct Z_Construct_UClass_UInterpToMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UInterpToMovementComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInterpToMovementComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpToMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpToMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpToMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpToMovementComponent(UInterpToMovementComponent&&); \
	NO_API UInterpToMovementComponent(const UInterpToMovementComponent&); \
public: \
	NO_API virtual ~UInterpToMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterpToMovementComponent(UInterpToMovementComponent&&); \
	NO_API UInterpToMovementComponent(const UInterpToMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterpToMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpToMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpToMovementComponent) \
	NO_API virtual ~UInterpToMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_62_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_65_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpToMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpToMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h


#define FOREACH_ENUM_EINTERPTOBEHAVIOURTYPE(op) \
	op(EInterpToBehaviourType::OneShot) \
	op(EInterpToBehaviourType::OneShot_Reverse) \
	op(EInterpToBehaviourType::Loop_Reset) \
	op(EInterpToBehaviourType::PingPong) 

enum class EInterpToBehaviourType : uint8;
template<> struct TIsUEnumClass<EInterpToBehaviourType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EInterpToBehaviourType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
