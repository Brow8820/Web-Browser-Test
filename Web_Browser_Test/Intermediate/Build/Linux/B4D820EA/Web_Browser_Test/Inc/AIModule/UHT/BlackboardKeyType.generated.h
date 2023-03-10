// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BlackboardKeyType_generated_h
#error "BlackboardKeyType.generated.h already included, missing '#pragma once' in BlackboardKeyType.h"
#endif
#define AIMODULE_BlackboardKeyType_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType(); \
	friend struct Z_Construct_UClass_UBlackboardKeyType_Statics; \
public: \
	DECLARE_CLASS(UBlackboardKeyType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardKeyType)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType(); \
	friend struct Z_Construct_UClass_UBlackboardKeyType_Statics; \
public: \
	DECLARE_CLASS(UBlackboardKeyType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardKeyType)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardKeyType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardKeyType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardKeyType(UBlackboardKeyType&&); \
	NO_API UBlackboardKeyType(const UBlackboardKeyType&); \
public: \
	NO_API virtual ~UBlackboardKeyType();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardKeyType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardKeyType(UBlackboardKeyType&&); \
	NO_API UBlackboardKeyType(const UBlackboardKeyType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardKeyType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType) \
	NO_API virtual ~UBlackboardKeyType();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_77_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlackboardKeyType."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardKeyType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h


#define FOREACH_ENUM_EBASICKEYOPERATION(op) \
	op(EBasicKeyOperation::Set) \
	op(EBasicKeyOperation::NotSet) 
#define FOREACH_ENUM_EARITHMETICKEYOPERATION(op) \
	op(EArithmeticKeyOperation::Equal) \
	op(EArithmeticKeyOperation::NotEqual) \
	op(EArithmeticKeyOperation::Less) \
	op(EArithmeticKeyOperation::LessOrEqual) \
	op(EArithmeticKeyOperation::Greater) \
	op(EArithmeticKeyOperation::GreaterOrEqual) 
#define FOREACH_ENUM_ETEXTKEYOPERATION(op) \
	op(ETextKeyOperation::Equal) \
	op(ETextKeyOperation::NotEqual) \
	op(ETextKeyOperation::Contain) \
	op(ETextKeyOperation::NotContain) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
