//
// /home/apex/Documents/Unreal Projects/Web_Browser_Test/Intermediate/Build/Linux/B4D820EA/Web_Browser_Test/Development/Chaos/PBDCollisionConstraints.ispc.generated.dummy_avx.h
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

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    double V[3];
};
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    double V[4];
};
#endif

#ifndef __ISPC_STRUCT_FTransform__
#define __ISPC_STRUCT_FTransform__
struct FTransform {
    struct FVector4 Rotation;
    struct FVector4 Translation;
    struct FVector4 Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FIntVector__
#define __ISPC_STRUCT_FIntVector__
struct FIntVector {
    int32_t V[3];
};
#endif

#ifndef __ISPC_STRUCT_TArrayND__
#define __ISPC_STRUCT_TArrayND__
struct TArrayND {
    struct FIntVector MCounts;
    double * MArray;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern bool SampleBoxNoNormal(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern bool SampleBoxNoNormalAll(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern void SampleBoxNormalAverage(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern void SampleBoxNormalAverageAll(const struct FVector &BoxMin, const struct FVector &BoxMax, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SampleLevelSetNoNormal(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern bool SampleLevelSetNoNormalAll(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern void SampleLevelSetNormalAverage(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const int32_t * PotentialParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern void SampleLevelSetNormalAverageAll(const struct FVector &GridMinCorner, const struct FVector &GridMaxCorner, const struct FVector &GridDx, const struct FIntVector &GridCounts, const struct TArrayND * LevelSetPhiArray, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SamplePlaneNoNormalAll(const struct FVector &ObjectNormal, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern void SamplePlaneNormalAverageAll(const struct FVector &ObjectNormal, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
    extern bool SampleSphereNoNormalAll(const double &ObjectRadius, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, int32_t &DeepestParticle, double &Phi, const uint32_t NumParticles);
    extern void SampleSphereNormalAverageAll(const double &ObjectRadius, const struct FVector &ObjectMX, const struct FTransform &SampleToObjectTransform, const struct FVector * SampleParticles, const double Thickness, double &TotalThickness, struct FVector &ConstraintLocation, const uint32_t NumParticles);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
