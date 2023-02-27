//
// /home/apex/Documents/Unreal Projects/Web_Browser_Test/Intermediate/Build/Linux/B4D820EA/Web_Browser_Test/Development/ChaosCloth/ChaosClothingSimulationMesh.ispc.generated.dummy.h
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

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FClothVertBoneData__
#define __ISPC_STRUCT_FClothVertBoneData__
struct FClothVertBoneData {
    int32_t NumInfluences;
    uint16_t BoneIndices[12];
    float BoneWeights[12];
};
#endif

#ifndef __ISPC_STRUCT_FMatrix44f__
#define __ISPC_STRUCT_FMatrix44f__
struct FMatrix44f {
    float M[16];
};
#endif

#ifndef __ISPC_STRUCT_FVector4f__
#define __ISPC_STRUCT_FVector4f__
struct FVector4f {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FTransform3f__
#define __ISPC_STRUCT_FTransform3f__
struct FTransform3f {
    struct FVector4f Rotation;
    struct FVector4f Translation;
    struct FVector4f Scale3D;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void SkinPhysicsMesh(struct FVector3f * OutPositions, struct FVector3f * OutNormals, const struct FVector3f * Vertices, const struct FVector3f * Normals, const struct FClothVertBoneData * BoneData, const int32_t * BoneMap, const struct FMatrix44f * BoneMatrices, const struct FTransform3f &ComponentToLocalSpace, const int32_t NumPoints);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


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



#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
