// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioRadialSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;
#ifdef AUDIOWIDGETS_AudioRadialSlider_generated_h
#error "AudioRadialSlider.generated.h already included, missing '#pragma once' in AudioRadialSlider.h"
#endif
#define AUDIOWIDGETS_AudioRadialSlider_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_13_DELEGATE \
struct _Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FOnAudioRadialSliderValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioRadialSliderValueChangedEvent, float Value) \
{ \
	_Script_AudioWidgets_eventOnAudioRadialSliderValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	OnAudioRadialSliderValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOutputRange); \
	DECLARE_FUNCTION(execSetSliderThickness); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execSetHandStartEndRatio); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderProgressColor); \
	DECLARE_FUNCTION(execSetCenterBackgroundColor); \
	DECLARE_FUNCTION(execSetWidgetLayout); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetOutputValue);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOutputRange); \
	DECLARE_FUNCTION(execSetSliderThickness); \
	DECLARE_FUNCTION(execSetShowUnitsText); \
	DECLARE_FUNCTION(execSetShowLabelOnlyOnHover); \
	DECLARE_FUNCTION(execSetValueTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsTextReadOnly); \
	DECLARE_FUNCTION(execSetUnitsText); \
	DECLARE_FUNCTION(execSetTextLabelBackgroundColor); \
	DECLARE_FUNCTION(execSetHandStartEndRatio); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderProgressColor); \
	DECLARE_FUNCTION(execSetCenterBackgroundColor); \
	DECLARE_FUNCTION(execSetWidgetLayout); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execGetOutputValue);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioRadialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAudioRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioRadialSlider, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRadialSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioRadialSlider(UAudioRadialSlider&&); \
	NO_API UAudioRadialSlider(const UAudioRadialSlider&); \
public: \
	NO_API virtual ~UAudioRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioRadialSlider(UAudioRadialSlider&&); \
	NO_API UAudioRadialSlider(const UAudioRadialSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRadialSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRadialSlider) \
	NO_API virtual ~UAudioRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioRadialSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioRadialSlider>();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioVolumeRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioVolumeRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioVolumeRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioVolumeRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVolumeRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioVolumeRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioVolumeRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioVolumeRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioVolumeRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioVolumeRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeRadialSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioVolumeRadialSlider(UAudioVolumeRadialSlider&&); \
	NO_API UAudioVolumeRadialSlider(const UAudioVolumeRadialSlider&); \
public: \
	NO_API virtual ~UAudioVolumeRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioVolumeRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioVolumeRadialSlider(UAudioVolumeRadialSlider&&); \
	NO_API UAudioVolumeRadialSlider(const UAudioVolumeRadialSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioVolumeRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVolumeRadialSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVolumeRadialSlider) \
	NO_API virtual ~UAudioVolumeRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_179_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_182_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioVolumeRadialSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioVolumeRadialSlider>();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioFrequencyRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioFrequencyRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioFrequencyRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_INCLASS \
private: \
	static void StaticRegisterNativesUAudioFrequencyRadialSlider(); \
	friend struct Z_Construct_UClass_UAudioFrequencyRadialSlider_Statics; \
public: \
	DECLARE_CLASS(UAudioFrequencyRadialSlider, UAudioRadialSlider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioFrequencyRadialSlider)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioFrequencyRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencyRadialSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFrequencyRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencyRadialSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFrequencyRadialSlider(UAudioFrequencyRadialSlider&&); \
	NO_API UAudioFrequencyRadialSlider(const UAudioFrequencyRadialSlider&); \
public: \
	NO_API virtual ~UAudioFrequencyRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioFrequencyRadialSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioFrequencyRadialSlider(UAudioFrequencyRadialSlider&&); \
	NO_API UAudioFrequencyRadialSlider(const UAudioFrequencyRadialSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioFrequencyRadialSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioFrequencyRadialSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioFrequencyRadialSlider) \
	NO_API virtual ~UAudioFrequencyRadialSlider();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_191_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h_194_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioFrequencyRadialSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioFrequencyRadialSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioRadialSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
