// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneSubSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequence;
#ifdef MOVIESCENE_MovieSceneSubSection_generated_h
#error "MovieSceneSubSection.generated.h already included, missing '#pragma once' in MovieSceneSubSection.h"
#endif
#define MOVIESCENE_MovieSceneSubSection_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSubSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSubSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSubSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSubSection, UMovieSceneSection, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSubSection) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSubSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public: \
	NO_API virtual ~UMovieSceneSubSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSubSection(UMovieSceneSubSection&&); \
	NO_API UMovieSceneSubSection(const UMovieSceneSubSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSubSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSubSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSubSection) \
	NO_API virtual ~UMovieSceneSubSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_61_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSubSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneSubSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
