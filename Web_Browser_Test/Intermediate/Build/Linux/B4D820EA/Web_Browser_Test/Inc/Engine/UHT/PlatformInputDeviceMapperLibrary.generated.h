// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlatformInputDeviceMapperLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInputDeviceConnectionState : uint8;
struct FInputDeviceId;
struct FPlatformUserId;
#ifdef ENGINE_PlatformInputDeviceMapperLibrary_generated_h
#error "PlatformInputDeviceMapperLibrary.generated.h already included, missing '#pragma once' in PlatformInputDeviceMapperLibrary.h"
#endif
#define ENGINE_PlatformInputDeviceMapperLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_InputDeviceId); \
	DECLARE_FUNCTION(execEqualEqual_InputDeviceId); \
	DECLARE_FUNCTION(execNotEqual_PlatformUserId); \
	DECLARE_FUNCTION(execEqualEqual_PlatformUserId); \
	DECLARE_FUNCTION(execInputDeviceId_None); \
	DECLARE_FUNCTION(execPlatformUserId_None); \
	DECLARE_FUNCTION(execIsValidPlatformId); \
	DECLARE_FUNCTION(execIsValidInputDevice); \
	DECLARE_FUNCTION(execGetInputDeviceConnectionState); \
	DECLARE_FUNCTION(execGetPrimaryInputDeviceForUser); \
	DECLARE_FUNCTION(execGetUserForInputDevice); \
	DECLARE_FUNCTION(execGetDefaultInputDevice); \
	DECLARE_FUNCTION(execIsInputDeviceMappedToUnpairedUser); \
	DECLARE_FUNCTION(execIsUnpairedUserId); \
	DECLARE_FUNCTION(execGetUserForUnpairedInputDevices); \
	DECLARE_FUNCTION(execGetAllActiveUsers); \
	DECLARE_FUNCTION(execGetAllConnectedInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevicesForUser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_InputDeviceId); \
	DECLARE_FUNCTION(execEqualEqual_InputDeviceId); \
	DECLARE_FUNCTION(execNotEqual_PlatformUserId); \
	DECLARE_FUNCTION(execEqualEqual_PlatformUserId); \
	DECLARE_FUNCTION(execInputDeviceId_None); \
	DECLARE_FUNCTION(execPlatformUserId_None); \
	DECLARE_FUNCTION(execIsValidPlatformId); \
	DECLARE_FUNCTION(execIsValidInputDevice); \
	DECLARE_FUNCTION(execGetInputDeviceConnectionState); \
	DECLARE_FUNCTION(execGetPrimaryInputDeviceForUser); \
	DECLARE_FUNCTION(execGetUserForInputDevice); \
	DECLARE_FUNCTION(execGetDefaultInputDevice); \
	DECLARE_FUNCTION(execIsInputDeviceMappedToUnpairedUser); \
	DECLARE_FUNCTION(execIsUnpairedUserId); \
	DECLARE_FUNCTION(execGetUserForUnpairedInputDevices); \
	DECLARE_FUNCTION(execGetAllActiveUsers); \
	DECLARE_FUNCTION(execGetAllConnectedInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevicesForUser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformInputDeviceMapperLibrary(); \
	friend struct Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics; \
public: \
	DECLARE_CLASS(UPlatformInputDeviceMapperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformInputDeviceMapperLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformInputDeviceMapperLibrary(); \
	friend struct Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics; \
public: \
	DECLARE_CLASS(UPlatformInputDeviceMapperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformInputDeviceMapperLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformInputDeviceMapperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInputDeviceMapperLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformInputDeviceMapperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInputDeviceMapperLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformInputDeviceMapperLibrary(UPlatformInputDeviceMapperLibrary&&); \
	NO_API UPlatformInputDeviceMapperLibrary(const UPlatformInputDeviceMapperLibrary&); \
public: \
	NO_API virtual ~UPlatformInputDeviceMapperLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformInputDeviceMapperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformInputDeviceMapperLibrary(UPlatformInputDeviceMapperLibrary&&); \
	NO_API UPlatformInputDeviceMapperLibrary(const UPlatformInputDeviceMapperLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformInputDeviceMapperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInputDeviceMapperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInputDeviceMapperLibrary) \
	NO_API virtual ~UPlatformInputDeviceMapperLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformInputDeviceMapperLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
