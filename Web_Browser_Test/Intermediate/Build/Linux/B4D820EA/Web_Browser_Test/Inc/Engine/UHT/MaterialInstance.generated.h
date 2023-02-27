// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialInstance_generated_h
#error "MaterialInstance.generated.h already included, missing '#pragma once' in MaterialInstance.h"
#endif
#define ENGINE_MaterialInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterAtlasInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDoubleVectorParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeVirtualTextureParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_334_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontParameterValue>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialInstanceCachedData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceEditorOnlyData, UMaterialInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceEditorOnlyData(); \
	friend struct Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceEditorOnlyData, UMaterialInterfaceEditorOnlyData, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceEditorOnlyData)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceEditorOnlyData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceEditorOnlyData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceEditorOnlyData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceEditorOnlyData(UMaterialInstanceEditorOnlyData&&); \
	ENGINE_API UMaterialInstanceEditorOnlyData(const UMaterialInstanceEditorOnlyData&); \
public: \
	ENGINE_API virtual ~UMaterialInstanceEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceEditorOnlyData() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceEditorOnlyData(UMaterialInstanceEditorOnlyData&&); \
	ENGINE_API UMaterialInstanceEditorOnlyData(const UMaterialInstanceEditorOnlyData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceEditorOnlyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceEditorOnlyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialInstanceEditorOnlyData) \
	ENGINE_API virtual ~UMaterialInstanceEditorOnlyData();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_464_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_467_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceEditorOnlyData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstance(); \
	friend struct Z_Construct_UClass_UMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstance, UMaterialInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstance) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstance(); \
	friend struct Z_Construct_UClass_UMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstance, UMaterialInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstance) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstance(UMaterialInstance&&); \
	ENGINE_API UMaterialInstance(const UMaterialInstance&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstance() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstance(UMaterialInstance&&); \
	ENGINE_API UMaterialInstance(const UMaterialInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMaterialInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_473_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_476_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
