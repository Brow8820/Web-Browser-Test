//
// /home/apex/Documents/Unreal Projects/Web_Browser_Test/Intermediate/Build/Linux/B4D820EA/Web_Browser_Test/Development/Chaos/TriangleMesh.ispc.generated.dummy_sse4.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
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

#ifndef __ISPC_STRUCT_FVector3f__
#define __ISPC_STRUCT_FVector3f__
struct FVector3f {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_TArrayInt__
#define __ISPC_STRUCT_TArrayInt__
struct TArrayInt {
    int32_t * Data;
    int32_t ArrayNum;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void GetFaceNormals(struct FVector3f * Normals, const struct FVector3f * Points, const struct FIntVector * Elements, const int32_t NumElements);
    extern void GetPointNormals(struct FVector3f * PointNormals, const struct FVector3f * FaceNormals, const struct TArrayInt * PointToTriangleMap, const int32_t StartIndex, const int32_t NumFaceNormals, const int32_t NumIndices);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
