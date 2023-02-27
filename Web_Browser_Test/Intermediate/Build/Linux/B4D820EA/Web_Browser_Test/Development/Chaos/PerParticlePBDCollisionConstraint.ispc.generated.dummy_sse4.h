//
// /home/apex/Documents/Unreal Projects/Web_Browser_Test/Intermediate/Build/Linux/B4D820EA/Web_Browser_Test/Development/Chaos/PerParticlePBDCollisionConstraint.ispc.generated.dummy_sse4.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif


///////////////////////////////////////////////////////////////////////////
// Enumerator types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_ENUM_ImplicitObjectType__
#define __ISPC_ENUM_ImplicitObjectType__
enum ImplicitObjectType {
    Sphere = 0,
    Box = 1,
    Plane = 2,
    Capsule = 3,
    Transformed = 4,
    Union = 5,
    LevelSet = 6,
    Unknown = 7,
    Convex = 8,
    TaperedCylinder = 9,
    Cylinder = 10,
    TriangleMesh = 11,
    HeightField = 12,
    DEPRECATED_Scaled = 13,
    Triangle = 14,
    UnionClustered = 15,
    TaperedCapsule = 16,
    IsInstanced = 64,
    IsScaled = 128 
};
#endif

#ifndef __ISPC_ENUM_FConvexStructureDataIndexType__
#define __ISPC_ENUM_FConvexStructureDataIndexType__
enum FConvexStructureDataIndexType {
    EIndexType_None = 0,
    EIndexType_Small = 1,
    EIndexType_Medium = 2,
    EIndexType_Large = 3 
};
#endif


#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector4f__
#define __ISPC_STRUCT_FVector4f__
struct FVector4f {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_TArray__
#define __ISPC_STRUCT_TArray__
struct TArray {
    uint8_t * Data;
    uint32_t ArrayNum;
    uint32_t ArrayMax;
};
#endif

#ifndef __ISPC_STRUCT_PlanesS__
#define __ISPC_STRUCT_PlanesS__
struct PlanesS {
    uint8_t FirstHalfEdgeIndex;
    uint8_t NumHalfEdges;
};
#endif

#ifndef __ISPC_STRUCT_PlanesM__
#define __ISPC_STRUCT_PlanesM__
struct PlanesM {
    int16_t FirstHalfEdgeIndex;
    int16_t NumHalfEdges;
};
#endif

#ifndef __ISPC_STRUCT_PlanesL__
#define __ISPC_STRUCT_PlanesL__
struct PlanesL {
    int32_t FirstHalfEdgeIndex;
    int32_t NumHalfEdges;
};
#endif

#ifndef __ISPC_STRUCT_HalfEdgesS__
#define __ISPC_STRUCT_HalfEdgesS__
struct HalfEdgesS {
    uint8_t PlaneIndex;
    uint8_t VertexIndex;
    uint8_t TwinHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_HalfEdgesM__
#define __ISPC_STRUCT_HalfEdgesM__
struct HalfEdgesM {
    int16_t PlaneIndex;
    int16_t VertexIndex;
    int16_t TwinHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_HalfEdgesL__
#define __ISPC_STRUCT_HalfEdgesL__
struct HalfEdgesL {
    int32_t PlaneIndex;
    int32_t VertexIndex;
    int32_t TwinHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_VerticesS__
#define __ISPC_STRUCT_VerticesS__
struct VerticesS {
    uint8_t FirstHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_VerticesM__
#define __ISPC_STRUCT_VerticesM__
struct VerticesM {
    int16_t FirstHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_VerticesL__
#define __ISPC_STRUCT_VerticesL__
struct VerticesL {
    int32_t FirstHalfEdgeIndex;
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif

#ifndef __ISPC_STRUCT_Segment__
#define __ISPC_STRUCT_Segment__
struct Segment {
    struct FVector Point;
    struct FVector Axis;
    double Length;
};
#endif

#ifndef __ISPC_STRUCT_FPlaneConcrete3d__
#define __ISPC_STRUCT_FPlaneConcrete3d__
struct FPlaneConcrete3d {
    struct FVector MX;
    struct FVector MNormal;
};
#endif

#ifndef __ISPC_STRUCT_FPlaneConcrete3f__
#define __ISPC_STRUCT_FPlaneConcrete3f__
struct FPlaneConcrete3f {
    struct FVector3f MX;
    struct FVector3f MNormal;
};
#endif

#ifndef __ISPC_STRUCT_FConvexStructureData__
#define __ISPC_STRUCT_FConvexStructureData__
struct FConvexStructureData {
    struct FConvexStructureDataImp * Data;
    int8_t IndexType;
};
#endif

#ifndef __ISPC_STRUCT_FConvex__
#define __ISPC_STRUCT_FConvex__
struct FConvex {
    struct TArray Planes;
    struct TArray Vertices;
    struct FVector3f LocalBoundingBoxMin;
    struct FVector3f LocalBoundingBoxMax;
    struct FConvexStructureData StructureData;
};
#endif

#ifndef __ISPC_STRUCT_FConvexStructureDataImp__
#define __ISPC_STRUCT_FConvexStructureDataImp__
struct FConvexStructureDataImp {
    struct TArray Planes;
    struct TArray HalfEdges;
    struct TArray Vertices;
    struct TArray Edges;
};
#endif

#ifndef __ISPC_STRUCT_FTaperedCapsule__
#define __ISPC_STRUCT_FTaperedCapsule__
struct FTaperedCapsule {
    struct FVector Origin;
    struct FVector Axis;
    double Height;
    double Radius1;
    double Radius2;
};
#endif

#ifndef __ISPC_STRUCT_FTaperedCylinder__
#define __ISPC_STRUCT_FTaperedCylinder__
struct FTaperedCylinder {
    struct FPlaneConcrete3d MPlane1;
    struct FPlaneConcrete3d MPlane2;
    double Height;
    double Radius1;
    double Radius2;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyPerParticleCollision(struct FVector4f * ParticlesPandInvM, const struct FVector3f * ParticlesX, const struct FVector3f * CollisionV, const struct FVector3f * CollisionX, const struct FVector3f * CollisionW, const struct FVector4f * CollisionR, const uint32_t * DynamicGroupIds, const uint32_t * KinematicGroupIds, const float * PerGroupFriction, const float * PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
    extern void ApplyPerParticleCollisionFastFriction(struct FVector4f * ParticlesPandInvM, const struct FVector3f * ParticlesX, const struct FVector3f * CollisionV, const struct FVector3f * CollisionX, const struct FVector3f * CollisionW, const struct FVector4f * CollisionR, const uint32_t DynamicGroupId, const uint32_t * KinematicGroupIds, const float PerGroupFriction, const float PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
    extern void ApplyPerParticleCollisionNoFriction(struct FVector4f * ParticlesPandInvM, const struct FVector3f * ParticlesX, const struct FVector3f * CollisionV, const struct FVector3f * CollisionX, const struct FVector3f * CollisionW, const struct FVector4f * CollisionR, const uint32_t DynamicGroupId, const uint32_t * KinematicGroupIds, const float PerGroupThickness, const uint8_t * CollisionParticles, const uint8_t * Geometry, const int32_t SizeofFImplicitObject, const int32_t OffsetofGeometryType, const int32_t OffsetOfMargin, const float Dt, const int32_t InnerOffset, const int32_t InnerRange, const int32_t OuterOffset, const int32_t OuterRange);
    extern int32_t ExportHack_PerParticlePBDCollisionConstraintStructs(enum ImplicitObjectType Type, struct TArray * Array, struct PlanesS * _PlanesS, struct PlanesM * _PlanesM, struct PlanesL * _PlanesL, struct HalfEdgesS * _HalfEdgesS, struct HalfEdgesM * _HalfEdgesM, struct HalfEdgesL * _HalfEdgesL, struct VerticesS * _VerticesS, struct VerticesM * _VerticesM, struct VerticesL * _VerticesL, struct Segment * _Segment, struct FPlaneConcrete3d * _Plane3d, struct FPlaneConcrete3f * _Plane3f, enum FConvexStructureDataIndexType IndexType, struct FConvex * _FConvex, struct FTaperedCapsule * _TaperedCapsule, struct FTaperedCylinder * _TaperedCylinder);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
