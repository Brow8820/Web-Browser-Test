// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OnlineBlueprintCallProxyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_OnlineBlueprintCallProxyBase_generated_h
#error "OnlineBlueprintCallProxyBase.generated.h already included, missing '#pragma once' in OnlineBlueprintCallProxyBase.h"
#endif
#define ENGINE_OnlineBlueprintCallProxyBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_11_DELEGATE \
static inline void FEmptyOnlineDelegate_DelegateWrapper(const FMulticastScriptDelegate& EmptyOnlineDelegate) \
{ \
	EmptyOnlineDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UOnlineBlueprintCallProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UOnlineBlueprintCallProxyBase)


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineBlueprintCallProxyBase(); \
	friend struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics; \
public: \
	DECLARE_CLASS(UOnlineBlueprintCallProxyBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UOnlineBlueprintCallProxyBase)


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBlueprintCallProxyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineBlueprintCallProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBlueprintCallProxyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase&&); \
	ENGINE_API UOnlineBlueprintCallProxyBase(const UOnlineBlueprintCallProxyBase&); \
public: \
	ENGINE_API virtual ~UOnlineBlueprintCallProxyBase();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase&&); \
	ENGINE_API UOnlineBlueprintCallProxyBase(const UOnlineBlueprintCallProxyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineBlueprintCallProxyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineBlueprintCallProxyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineBlueprintCallProxyBase) \
	ENGINE_API virtual ~UOnlineBlueprintCallProxyBase();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineBlueprintCallProxyBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UOnlineBlueprintCallProxyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_OnlineBlueprintCallProxyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
