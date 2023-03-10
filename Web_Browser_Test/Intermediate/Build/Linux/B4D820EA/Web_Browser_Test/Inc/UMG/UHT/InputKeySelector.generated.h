// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InputKeySelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
struct FInputChord;
struct FKey;
#ifdef UMG_InputKeySelector_generated_h
#error "InputKeySelector.generated.h already included, missing '#pragma once' in InputKeySelector.h"
#endif
#define UMG_InputKeySelector_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_26_DELEGATE \
struct InputKeySelector_eventOnKeySelected_Parms \
{ \
	FInputChord SelectedKey; \
}; \
static inline void FOnKeySelected_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelected, FInputChord SelectedKey) \
{ \
	InputKeySelector_eventOnKeySelected_Parms Parms; \
	Parms.SelectedKey=SelectedKey; \
	OnKeySelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_27_DELEGATE \
static inline void FOnIsSelectingKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsSelectingKeyChanged) \
{ \
	OnIsSelectingKeyChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEscapeKeys); \
	DECLARE_FUNCTION(execSetTextBlockVisibility); \
	DECLARE_FUNCTION(execGetIsSelectingKey); \
	DECLARE_FUNCTION(execSetAllowGamepadKeys); \
	DECLARE_FUNCTION(execSetAllowModifierKeys); \
	DECLARE_FUNCTION(execSetNoKeySpecifiedText); \
	DECLARE_FUNCTION(execSetKeySelectionText); \
	DECLARE_FUNCTION(execSetSelectedKey);


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEscapeKeys); \
	DECLARE_FUNCTION(execSetTextBlockVisibility); \
	DECLARE_FUNCTION(execGetIsSelectingKey); \
	DECLARE_FUNCTION(execSetAllowGamepadKeys); \
	DECLARE_FUNCTION(execSetAllowModifierKeys); \
	DECLARE_FUNCTION(execSetNoKeySpecifiedText); \
	DECLARE_FUNCTION(execSetKeySelectionText); \
	DECLARE_FUNCTION(execSetSelectedKey);


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInputKeySelector, NO_API)


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputKeySelector(); \
	friend struct Z_Construct_UClass_UInputKeySelector_Statics; \
public: \
	DECLARE_CLASS(UInputKeySelector, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInputKeySelector) \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUInputKeySelector(); \
	friend struct Z_Construct_UClass_UInputKeySelector_Statics; \
public: \
	DECLARE_CLASS(UInputKeySelector, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UInputKeySelector) \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputKeySelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeySelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputKeySelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeySelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputKeySelector(UInputKeySelector&&); \
	NO_API UInputKeySelector(const UInputKeySelector&); \
public: \
	NO_API virtual ~UInputKeySelector();


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputKeySelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputKeySelector(UInputKeySelector&&); \
	NO_API UInputKeySelector(const UInputKeySelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputKeySelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeySelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeySelector) \
	NO_API virtual ~UInputKeySelector();


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputKeySelector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UInputKeySelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_InputKeySelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
