// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkinnedMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshDeformer;
class UPhysicsAsset;
class USkeletalMesh;
class USkinnedAsset;
class USkinnedMeshComponent;
struct FLinearColor;
struct FSkelMeshSkinWeightInfo;
#ifdef ENGINE_SkinnedMeshComponent_generated_h
#error "SkinnedMeshComponent.generated.h already included, missing '#pragma once' in SkinnedMeshComponent.h"
#endif
#define ENGINE_SkinnedMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkelMeshSkinWeightInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkelMeshComponentLODInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVertexOffsetUsage>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRenderStatic); \
	DECLARE_FUNCTION(execIsMaterialSectionShown); \
	DECLARE_FUNCTION(execShowAllMaterialSections); \
	DECLARE_FUNCTION(execShowMaterialSection); \
	DECLARE_FUNCTION(execIsBoneHiddenByName); \
	DECLARE_FUNCTION(execUnHideBoneByName); \
	DECLARE_FUNCTION(execHideBoneByName); \
	DECLARE_FUNCTION(execFindClosestBone_K2); \
	DECLARE_FUNCTION(execTransformFromBoneSpace); \
	DECLARE_FUNCTION(execTransformToBoneSpace); \
	DECLARE_FUNCTION(execGetRefPoseTransform); \
	DECLARE_FUNCTION(execGetRefPosePosition); \
	DECLARE_FUNCTION(execBoneIsChildOf); \
	DECLARE_FUNCTION(execSetLeaderPoseComponent); \
	DECLARE_FUNCTION(execGetPredictedLODLevel); \
	DECLARE_FUNCTION(execSetPostSkinningOffsets); \
	DECLARE_FUNCTION(execSetPreSkinningOffsets); \
	DECLARE_FUNCTION(execSetVertexOffsetUsage); \
	DECLARE_FUNCTION(execGetVertexOffsetUsage); \
	DECLARE_FUNCTION(execIsUsingSkinWeightProfile); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileName); \
	DECLARE_FUNCTION(execUnloadSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightProfile); \
	DECLARE_FUNCTION(execSetSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightOverride); \
	DECLARE_FUNCTION(execSetSkinWeightOverride); \
	DECLARE_FUNCTION(execClearVertexColorOverride); \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor); \
	DECLARE_FUNCTION(execGetTwistAndSwingAngleOfDeltaRotationFromRefPose); \
	DECLARE_FUNCTION(execGetDeltaTransformFromRefPose); \
	DECLARE_FUNCTION(execGetParentBone); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execGetSkinnedAsset); \
	DECLARE_FUNCTION(execSetSkinnedAssetAndUpdate); \
	DECLARE_FUNCTION(execGetSkeletalMesh_DEPRECATED); \
	DECLARE_FUNCTION(execGetSocketBoneName); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetNumBones); \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility); \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow); \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow); \
	DECLARE_FUNCTION(execGetForcedLOD); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execSetMinLOD); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execSetPhysicsAsset);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRenderStatic); \
	DECLARE_FUNCTION(execIsMaterialSectionShown); \
	DECLARE_FUNCTION(execShowAllMaterialSections); \
	DECLARE_FUNCTION(execShowMaterialSection); \
	DECLARE_FUNCTION(execIsBoneHiddenByName); \
	DECLARE_FUNCTION(execUnHideBoneByName); \
	DECLARE_FUNCTION(execHideBoneByName); \
	DECLARE_FUNCTION(execFindClosestBone_K2); \
	DECLARE_FUNCTION(execTransformFromBoneSpace); \
	DECLARE_FUNCTION(execTransformToBoneSpace); \
	DECLARE_FUNCTION(execGetRefPoseTransform); \
	DECLARE_FUNCTION(execGetRefPosePosition); \
	DECLARE_FUNCTION(execBoneIsChildOf); \
	DECLARE_FUNCTION(execSetLeaderPoseComponent); \
	DECLARE_FUNCTION(execGetPredictedLODLevel); \
	DECLARE_FUNCTION(execSetPostSkinningOffsets); \
	DECLARE_FUNCTION(execSetPreSkinningOffsets); \
	DECLARE_FUNCTION(execSetVertexOffsetUsage); \
	DECLARE_FUNCTION(execGetVertexOffsetUsage); \
	DECLARE_FUNCTION(execIsUsingSkinWeightProfile); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileName); \
	DECLARE_FUNCTION(execUnloadSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightProfile); \
	DECLARE_FUNCTION(execSetSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightOverride); \
	DECLARE_FUNCTION(execSetSkinWeightOverride); \
	DECLARE_FUNCTION(execClearVertexColorOverride); \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor); \
	DECLARE_FUNCTION(execGetTwistAndSwingAngleOfDeltaRotationFromRefPose); \
	DECLARE_FUNCTION(execGetDeltaTransformFromRefPose); \
	DECLARE_FUNCTION(execGetParentBone); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execGetSkinnedAsset); \
	DECLARE_FUNCTION(execSetSkinnedAssetAndUpdate); \
	DECLARE_FUNCTION(execGetSkeletalMesh_DEPRECATED); \
	DECLARE_FUNCTION(execGetSocketBoneName); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetNumBones); \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility); \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow); \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow); \
	DECLARE_FUNCTION(execGetForcedLOD); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execSetMinLOD); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execSetPhysicsAsset);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ACCESSORS \
static void SetSkeletalMesh_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend struct Z_Construct_UClass_USkinnedMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkinnedMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_INCLASS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend struct Z_Construct_UClass_USkinnedMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkinnedMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public: \
	NO_API virtual ~USkinnedMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkinnedMeshComponent(USkinnedMeshComponent&&); \
	NO_API USkinnedMeshComponent(const USkinnedMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinnedMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent) \
	NO_API virtual ~USkinnedMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_237_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_240_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkinnedMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkinnedMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h


#define FOREACH_ENUM_EBONEVISIBILITYSTATUS(op) \
	op(BVS_HiddenByParent) \
	op(BVS_Visible) \
	op(BVS_ExplicitlyHidden) 
#define FOREACH_ENUM_EPHYSBODYOP(op) \
	op(PBO_None) \
	op(PBO_Term) 
#define FOREACH_ENUM_EVISIBILITYBASEDANIMTICKOPTION(op) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPose) \
	op(EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered) \
	op(EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered) 

enum class EVisibilityBasedAnimTickOption : uint8;
template<> struct TIsUEnumClass<EVisibilityBasedAnimTickOption> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>();

#define FOREACH_ENUM_EBONESPACES(op) \
	op(EBoneSpaces::WorldSpace) \
	op(EBoneSpaces::ComponentSpace) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
