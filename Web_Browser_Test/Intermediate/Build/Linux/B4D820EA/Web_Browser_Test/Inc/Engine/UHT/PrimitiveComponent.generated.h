// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PrimitiveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPhysicalMaterial;
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;
enum class ERendererStencilMask : uint8;
struct FBodyInstanceAsyncPhysicsTickHandle;
struct FHitResult;
struct FKey;
struct FWalkableSlopeOverride;
#ifdef ENGINE_PrimitiveComponent_generated_h
#error "PrimitiveComponent.generated.h already included, missing '#pragma once' in PrimitiveComponent.h"
#endif
#define ENGINE_PrimitiveComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteCategoryInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSpriteCategoryInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_184_DELEGATE \
struct _Script_Engine_eventComponentHitSignature_Parms \
{ \
	UPrimitiveComponent* HitComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	FVector NormalImpulse; \
	FHitResult Hit; \
}; \
static inline void FComponentHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentHitSignature, UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult const& Hit) \
{ \
	_Script_Engine_eventComponentHitSignature_Parms Parms; \
	Parms.HitComponent=HitComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.NormalImpulse=NormalImpulse; \
	Parms.Hit=Hit; \
	ComponentHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_186_DELEGATE \
struct _Script_Engine_eventComponentBeginOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
	bool bFromSweep; \
	FHitResult SweepResult; \
}; \
static inline void FComponentBeginOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult) \
{ \
	_Script_Engine_eventComponentBeginOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	Parms.bFromSweep=bFromSweep ? true : false; \
	Parms.SweepResult=SweepResult; \
	ComponentBeginOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_188_DELEGATE \
struct _Script_Engine_eventComponentEndOverlapSignature_Parms \
{ \
	UPrimitiveComponent* OverlappedComponent; \
	AActor* OtherActor; \
	UPrimitiveComponent* OtherComp; \
	int32 OtherBodyIndex; \
}; \
static inline void FComponentEndOverlapSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndOverlapSignature, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) \
{ \
	_Script_Engine_eventComponentEndOverlapSignature_Parms Parms; \
	Parms.OverlappedComponent=OverlappedComponent; \
	Parms.OtherActor=OtherActor; \
	Parms.OtherComp=OtherComp; \
	Parms.OtherBodyIndex=OtherBodyIndex; \
	ComponentEndOverlapSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_190_DELEGATE \
struct _Script_Engine_eventComponentWakeSignature_Parms \
{ \
	UPrimitiveComponent* WakingComponent; \
	FName BoneName; \
}; \
static inline void FComponentWakeSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentWakeSignature, UPrimitiveComponent* WakingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentWakeSignature_Parms Parms; \
	Parms.WakingComponent=WakingComponent; \
	Parms.BoneName=BoneName; \
	ComponentWakeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_192_DELEGATE \
struct _Script_Engine_eventComponentSleepSignature_Parms \
{ \
	UPrimitiveComponent* SleepingComponent; \
	FName BoneName; \
}; \
static inline void FComponentSleepSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentSleepSignature, UPrimitiveComponent* SleepingComponent, FName BoneName) \
{ \
	_Script_Engine_eventComponentSleepSignature_Parms Parms; \
	Parms.SleepingComponent=SleepingComponent; \
	Parms.BoneName=BoneName; \
	ComponentSleepSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_194_DELEGATE \
struct _Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms \
{ \
	UPrimitiveComponent* ChangedComponent; \
}; \
static inline void FComponentCollisionSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentCollisionSettingsChangedSignature, UPrimitiveComponent* ChangedComponent) \
{ \
	_Script_Engine_eventComponentCollisionSettingsChangedSignature_Parms Parms; \
	Parms.ChangedComponent=ChangedComponent; \
	ComponentCollisionSettingsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_196_DELEGATE \
struct _Script_Engine_eventComponentPhysicsStateChanged_Parms \
{ \
	UPrimitiveComponent* ChangedComponent; \
	EComponentPhysicsStateChange StateChange; \
}; \
static inline void FComponentPhysicsStateChanged_DelegateWrapper(const FMulticastScriptDelegate& ComponentPhysicsStateChanged, UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) \
{ \
	_Script_Engine_eventComponentPhysicsStateChanged_Parms Parms; \
	Parms.ChangedComponent=ChangedComponent; \
	Parms.StateChange=StateChange; \
	ComponentPhysicsStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_198_DELEGATE \
struct _Script_Engine_eventComponentBeginCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_199_DELEGATE \
struct _Script_Engine_eventComponentEndCursorOverSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndCursorOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndCursorOverSignature, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndCursorOverSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndCursorOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_200_DELEGATE \
struct _Script_Engine_eventComponentOnClickedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonPressed; \
}; \
static inline void FComponentOnClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnClickedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonPressed) \
{ \
	_Script_Engine_eventComponentOnClickedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonPressed=ButtonPressed; \
	ComponentOnClickedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_201_DELEGATE \
struct _Script_Engine_eventComponentOnReleasedSignature_Parms \
{ \
	UPrimitiveComponent* TouchedComponent; \
	FKey ButtonReleased; \
}; \
static inline void FComponentOnReleasedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnReleasedSignature, UPrimitiveComponent* TouchedComponent, FKey ButtonReleased) \
{ \
	_Script_Engine_eventComponentOnReleasedSignature_Parms Parms; \
	Parms.TouchedComponent=TouchedComponent; \
	Parms.ButtonReleased=ButtonReleased; \
	ComponentOnReleasedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_202_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchBeginSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchBeginSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchBeginSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_203_DELEGATE \
struct _Script_Engine_eventComponentOnInputTouchEndSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentOnInputTouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOnInputTouchEndSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentOnInputTouchEndSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentOnInputTouchEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_204_DELEGATE \
struct _Script_Engine_eventComponentBeginTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentBeginTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentBeginTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentBeginTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentBeginTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_205_DELEGATE \
struct _Script_Engine_eventComponentEndTouchOverSignature_Parms \
{ \
	TEnumAsByte<ETouchIndex::Type> FingerIndex; \
	UPrimitiveComponent* TouchedComponent; \
}; \
static inline void FComponentEndTouchOverSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentEndTouchOverSignature, ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent) \
{ \
	_Script_Engine_eventComponentEndTouchOverSignature_Parms Parms; \
	Parms.FingerIndex=FingerIndex; \
	Parms.TouchedComponent=TouchedComponent; \
	ComponentEndTouchOverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetPhysMaterialOverride); \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels); \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake); \
	DECLARE_FUNCTION(execSetAllUseCCD); \
	DECLARE_FUNCTION(execSetUseCCD); \
	DECLARE_FUNCTION(execScaleByMomentOfInertia); \
	DECLARE_FUNCTION(execGetInertiaTensor); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execSetMassOverrideInKg); \
	DECLARE_FUNCTION(execSetAllMassScale); \
	DECLARE_FUNCTION(execGetMassScale); \
	DECLARE_FUNCTION(execSetMassScale); \
	DECLARE_FUNCTION(execGetAngularDamping); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execGetLinearDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execIsGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableGravity); \
	DECLARE_FUNCTION(execWakeAllRigidBodies); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled); \
	DECLARE_FUNCTION(execGetCollisionEnabled); \
	DECLARE_FUNCTION(execGetClosestPointOnCollision); \
	DECLARE_FUNCTION(execGetBodyInstanceAsyncPhysicsTickHandle); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execSetHiddenInSceneCapture); \
	DECLARE_FUNCTION(execSetVisibleInSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetRenderInDepthPass); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetRenderCustomDepth); \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent); \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent); \
	DECLARE_FUNCTION(execK2_SphereTraceComponent); \
	DECLARE_FUNCTION(execK2_LineTraceComponent); \
	DECLARE_FUNCTION(execSetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionEnabled); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetTranslucencySortDistanceOffset); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights); \
	DECLARE_FUNCTION(execSetExcludeFromLightAttachmentGroup); \
	DECLARE_FUNCTION(execSetLightAttachmentsAsGroup); \
	DECLARE_FUNCTION(execSetCastContactShadow); \
	DECLARE_FUNCTION(execSetCastInsetShadow); \
	DECLARE_FUNCTION(execSetCastHiddenShadow); \
	DECLARE_FUNCTION(execSetEmissiveLightSource); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetOnlyOwnerSee); \
	DECLARE_FUNCTION(execSetOwnerNoSee); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execPutRigidBodyToSleep); \
	DECLARE_FUNCTION(execWakeRigidBody); \
	DECLARE_FUNCTION(execSetCenterOfMass); \
	DECLARE_FUNCTION(execGetCenterOfMass); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execAddTorqueInDegrees); \
	DECLARE_FUNCTION(execAddTorqueInRadians); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddForceAtLocationLocal); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddVelocityChangeImpulseAtLocation); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execSetConstraintMode); \
	DECLARE_FUNCTION(execSetSimulatePhysics); \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex); \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execSetMaterialByName); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetBoundsScale); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execIsOverlappingComponent); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForVectorParameter); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForScalarParameter); \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents); \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving); \
	DECLARE_FUNCTION(execClearMoveIgnoreActors); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors); \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execInvalidateLumenSurfaceCache); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents); \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanCharacterStepUp); \
	DECLARE_FUNCTION(execSetCullDistance); \
	DECLARE_FUNCTION(execSetPhysMaterialOverride); \
	DECLARE_FUNCTION(execSetCollisionResponseToAllChannels); \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execIsAnyRigidBodyAwake); \
	DECLARE_FUNCTION(execSetAllUseCCD); \
	DECLARE_FUNCTION(execSetUseCCD); \
	DECLARE_FUNCTION(execScaleByMomentOfInertia); \
	DECLARE_FUNCTION(execGetInertiaTensor); \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execSetMassOverrideInKg); \
	DECLARE_FUNCTION(execSetAllMassScale); \
	DECLARE_FUNCTION(execGetMassScale); \
	DECLARE_FUNCTION(execSetMassScale); \
	DECLARE_FUNCTION(execGetAngularDamping); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execGetLinearDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execIsGravityEnabled); \
	DECLARE_FUNCTION(execSetEnableGravity); \
	DECLARE_FUNCTION(execWakeAllRigidBodies); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execK2_IsPhysicsCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsQueryCollisionEnabled); \
	DECLARE_FUNCTION(execK2_IsCollisionEnabled); \
	DECLARE_FUNCTION(execGetCollisionEnabled); \
	DECLARE_FUNCTION(execGetClosestPointOnCollision); \
	DECLARE_FUNCTION(execGetBodyInstanceAsyncPhysicsTickHandle); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execSetHiddenInSceneCapture); \
	DECLARE_FUNCTION(execSetVisibleInSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetRenderInDepthPass); \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetCustomDepthStencilWriteMask); \
	DECLARE_FUNCTION(execSetCustomDepthStencilValue); \
	DECLARE_FUNCTION(execSetRenderCustomDepth); \
	DECLARE_FUNCTION(execK2_SphereOverlapComponent); \
	DECLARE_FUNCTION(execK2_BoxOverlapComponent); \
	DECLARE_FUNCTION(execK2_SphereTraceComponent); \
	DECLARE_FUNCTION(execK2_LineTraceComponent); \
	DECLARE_FUNCTION(execSetCollisionObjectType); \
	DECLARE_FUNCTION(execGetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionProfileName); \
	DECLARE_FUNCTION(execSetCollisionEnabled); \
	DECLARE_FUNCTION(execSetReceivesDecals); \
	DECLARE_FUNCTION(execSetTranslucencySortDistanceOffset); \
	DECLARE_FUNCTION(execSetTranslucentSortPriority); \
	DECLARE_FUNCTION(execSetSingleSampleShadowFromStationaryLights); \
	DECLARE_FUNCTION(execSetExcludeFromLightAttachmentGroup); \
	DECLARE_FUNCTION(execSetLightAttachmentsAsGroup); \
	DECLARE_FUNCTION(execSetCastContactShadow); \
	DECLARE_FUNCTION(execSetCastInsetShadow); \
	DECLARE_FUNCTION(execSetCastHiddenShadow); \
	DECLARE_FUNCTION(execSetEmissiveLightSource); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetVisibleInRayTracing); \
	DECLARE_FUNCTION(execSetOnlyOwnerSee); \
	DECLARE_FUNCTION(execSetOwnerNoSee); \
	DECLARE_FUNCTION(execSetNotifyRigidBodyCollision); \
	DECLARE_FUNCTION(execPutRigidBodyToSleep); \
	DECLARE_FUNCTION(execWakeRigidBody); \
	DECLARE_FUNCTION(execSetCenterOfMass); \
	DECLARE_FUNCTION(execGetCenterOfMass); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetPhysicsMaxAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetPhysicsAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAllPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execGetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execSetPhysicsLinearVelocity); \
	DECLARE_FUNCTION(execAddTorqueInDegrees); \
	DECLARE_FUNCTION(execAddTorqueInRadians); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddForceAtLocationLocal); \
	DECLARE_FUNCTION(execAddForceAtLocation); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddVelocityChangeImpulseAtLocation); \
	DECLARE_FUNCTION(execAddImpulseAtLocation); \
	DECLARE_FUNCTION(execAddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execAddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execSetConstraintMode); \
	DECLARE_FUNCTION(execSetSimulatePhysics); \
	DECLARE_FUNCTION(execSetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetWalkableSlopeOverride); \
	DECLARE_FUNCTION(execGetMaterialFromCollisionFaceIndex); \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamicFromMaterial); \
	DECLARE_FUNCTION(execCreateAndSetMaterialInstanceDynamic); \
	DECLARE_FUNCTION(execSetMaterialByName); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetBoundsScale); \
	DECLARE_FUNCTION(execGetOverlappingComponents); \
	DECLARE_FUNCTION(execGetOverlappingActors); \
	DECLARE_FUNCTION(execIsOverlappingActor); \
	DECLARE_FUNCTION(execIsOverlappingComponent); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetDefaultCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForDefaultCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector4); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector3); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataVector2); \
	DECLARE_FUNCTION(execSetCustomPrimitiveDataFloat); \
	DECLARE_FUNCTION(execSetVectorParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execSetScalarParameterForCustomPrimitiveData); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForVectorParameter); \
	DECLARE_FUNCTION(execGetCustomPrimitiveDataIndexForScalarParameter); \
	DECLARE_FUNCTION(execClearMoveIgnoreComponents); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreComponents); \
	DECLARE_FUNCTION(execIgnoreComponentWhenMoving); \
	DECLARE_FUNCTION(execClearMoveIgnoreActors); \
	DECLARE_FUNCTION(execCopyArrayOfMoveIgnoreActors); \
	DECLARE_FUNCTION(execIgnoreActorWhenMoving); \
	DECLARE_FUNCTION(execWasRecentlyRendered); \
	DECLARE_FUNCTION(execInvalidateLumenSurfaceCache); \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetGenerateOverlapEvents); \
	DECLARE_FUNCTION(execGetGenerateOverlapEvents);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPrimitiveComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_UPrimitiveComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPrimitiveComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPrimitiveComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPrimitiveComponent(UPrimitiveComponent&&); \
	NO_API UPrimitiveComponent(const UPrimitiveComponent&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_212_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimitiveComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h_2696_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimitiveComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimitiveComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PrimitiveComponent_h


#define FOREACH_ENUM_ECANBECHARACTERBASE(op) \
	op(ECB_No) \
	op(ECB_Yes) \
	op(ECB_Owner) 
#define FOREACH_ENUM_EHASCUSTOMNAVIGABLEGEOMETRY(op) \
	op(EHasCustomNavigableGeometry::No) \
	op(EHasCustomNavigableGeometry::Yes) \
	op(EHasCustomNavigableGeometry::EvenIfNotCollidable) \
	op(EHasCustomNavigableGeometry::DontExport) 
#define FOREACH_ENUM_ERENDERERSTENCILMASK(op) \
	op(ERendererStencilMask::ERSM_Default) \
	op(ERendererStencilMask::ERSM_255) \
	op(ERendererStencilMask::ERSM_1) \
	op(ERendererStencilMask::ERSM_2) \
	op(ERendererStencilMask::ERSM_4) \
	op(ERendererStencilMask::ERSM_8) \
	op(ERendererStencilMask::ERSM_16) \
	op(ERendererStencilMask::ERSM_32) \
	op(ERendererStencilMask::ERSM_64) \
	op(ERendererStencilMask::ERSM_128) 

enum class ERendererStencilMask : uint8;
template<> struct TIsUEnumClass<ERendererStencilMask> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERendererStencilMask>();

#define FOREACH_ENUM_ERAYTRACINGGROUPCULLINGPRIORITY(op) \
	op(ERayTracingGroupCullingPriority::CP_0_NEVER_CULL) \
	op(ERayTracingGroupCullingPriority::CP_1) \
	op(ERayTracingGroupCullingPriority::CP_2) \
	op(ERayTracingGroupCullingPriority::CP_3) \
	op(ERayTracingGroupCullingPriority::CP_4_DEFAULT) \
	op(ERayTracingGroupCullingPriority::CP_5) \
	op(ERayTracingGroupCullingPriority::CP_6) \
	op(ERayTracingGroupCullingPriority::CP_7) \
	op(ERayTracingGroupCullingPriority::CP_8_QUICKLY_CULL) 

enum class ERayTracingGroupCullingPriority : uint8;
template<> struct TIsUEnumClass<ERayTracingGroupCullingPriority> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERayTracingGroupCullingPriority>();

#define FOREACH_ENUM_ECOMPONENTPHYSICSSTATECHANGE(op) \
	op(EComponentPhysicsStateChange::Created) \
	op(EComponentPhysicsStateChange::Destroyed) 

enum class EComponentPhysicsStateChange : uint8;
template<> struct TIsUEnumClass<EComponentPhysicsStateChange> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EComponentPhysicsStateChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
