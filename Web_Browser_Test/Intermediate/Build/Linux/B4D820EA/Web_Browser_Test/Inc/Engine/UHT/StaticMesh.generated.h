// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StaticMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UMaterialInterface;
class UObject;
class UStaticMeshDescription;
class UStaticMeshSocket;
enum class EPerQualityLevels : uint8; 
struct FStaticMaterial;
#ifdef ENGINE_StaticMesh_generated_h
#error "StaticMesh.generated.h already included, missing '#pragma once' in StaticMesh.h"
#endif
#define ENGINE_StaticMesh_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshOptimizationSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_336_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshSectionInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshSectionInfoMap>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_432_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetEditorOrbitCameraPosition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_478_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMaterial>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_552_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialRemapIndex>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSocketsByTag); \
	DECLARE_FUNCTION(execRemoveSocket); \
	DECLARE_FUNCTION(execFindSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execAddMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetStaticMeshDescription); \
	DECLARE_FUNCTION(execBuildFromStaticMeshDescriptions); \
	DECLARE_FUNCTION(execCreateStaticMeshDescription); \
	DECLARE_FUNCTION(execSetStaticMaterials); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execSetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevel); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevels);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSocketsByTag); \
	DECLARE_FUNCTION(execRemoveSocket); \
	DECLARE_FUNCTION(execFindSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execAddMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetStaticMeshDescription); \
	DECLARE_FUNCTION(execBuildFromStaticMeshDescriptions); \
	DECLARE_FUNCTION(execCreateStaticMeshDescription); \
	DECLARE_FUNCTION(execSetStaticMaterials); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execSetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevel); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevels);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetNumSourceModels); \
	DECLARE_FUNCTION(execIsLODScreenSizeAutoComputed);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetNumSourceModels); \
	DECLARE_FUNCTION(execIsLODScreenSizeAutoComputed);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend struct Z_Construct_UClass_UStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UStaticMesh, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend struct Z_Construct_UClass_UStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UStaticMesh, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMesh) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMesh(UStaticMesh&&); \
	ENGINE_API UStaticMesh(const UStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_581_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_584_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h


#define FOREACH_ENUM_ENORMALMODE(op) \
	op(NM_PreserveSmoothingGroups) \
	op(NM_RecalculateNormals) \
	op(NM_RecalculateNormalsSmooth) \
	op(NM_RecalculateNormalsHard) \
	op(TEMP_BROKEN) 
#define FOREACH_ENUM_EIMPORTANCELEVEL(op) \
	op(IL_Off) \
	op(IL_Lowest) \
	op(IL_Low) \
	op(IL_Normal) \
	op(IL_High) \
	op(IL_Highest) \
	op(TEMP_BROKEN2) 
#define FOREACH_ENUM_EOPTIMIZATIONTYPE(op) \
	op(OT_NumOfTriangles) \
	op(OT_MaxDeviation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
