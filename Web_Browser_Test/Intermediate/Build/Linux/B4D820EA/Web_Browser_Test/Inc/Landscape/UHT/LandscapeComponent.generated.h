// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULandscapeLayerInfoObject;
class UMaterialInstanceDynamic;
#ifdef LANDSCAPE_LandscapeComponent_generated_h
#error "LandscapeComponent.generated.h already included, missing '#pragma once' in LandscapeComponent.h"
#endif
#define LANDSCAPE_LandscapeComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditToolRenderData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FWeightmapLayerAllocationInfo>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeComponentMaterialOverride>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapePerLODMaterialOverride>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FWeightmapData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHeightmapData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FHeightmapData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerComponentData>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED(); \
	friend struct Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics; \
public: \
	DECLARE_CLASS(ULandscapeLODStreamingProxy_DEPRECATED, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeLODStreamingProxy_DEPRECATED)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED(); \
	friend struct Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics; \
public: \
	DECLARE_CLASS(ULandscapeLODStreamingProxy_DEPRECATED, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeLODStreamingProxy_DEPRECATED)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLODStreamingProxy_DEPRECATED) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLODStreamingProxy_DEPRECATED); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLODStreamingProxy_DEPRECATED); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(ULandscapeLODStreamingProxy_DEPRECATED&&); \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(const ULandscapeLODStreamingProxy_DEPRECATED&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeLODStreamingProxy_DEPRECATED();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(ULandscapeLODStreamingProxy_DEPRECATED&&); \
	LANDSCAPE_API ULandscapeLODStreamingProxy_DEPRECATED(const ULandscapeLODStreamingProxy_DEPRECATED&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLODStreamingProxy_DEPRECATED); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLODStreamingProxy_DEPRECATED); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLODStreamingProxy_DEPRECATED) \
	LANDSCAPE_API virtual ~ULandscapeLODStreamingProxy_DEPRECATED();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_375_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_378_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeLODStreamingProxy_DEPRECATED."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeLODStreamingProxy_DEPRECATED>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLODBias); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightByNameAtLocation); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightAtLocation); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLODBias); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightByNameAtLocation); \
	DECLARE_FUNCTION(execEditorGetPaintLayerWeightAtLocation); \
	DECLARE_FUNCTION(execGetMaterialInstanceDynamic);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend struct Z_Construct_UClass_ULandscapeComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeComponent(); \
	friend struct Z_Construct_UClass_ULandscapeComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeComponent(ULandscapeComponent&&); \
	LANDSCAPE_API ULandscapeComponent(const ULandscapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeComponent) \
	LANDSCAPE_API virtual ~ULandscapeComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_381_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_384_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h


#define FOREACH_ENUM_ELANDSCAPECLEARMODE(op) \
	op(Clear_Weightmap) \
	op(Clear_Heightmap) \
	op(Clear_All) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
