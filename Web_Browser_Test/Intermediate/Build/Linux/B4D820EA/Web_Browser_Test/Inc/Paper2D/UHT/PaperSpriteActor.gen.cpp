// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void APaperSpriteActor::StaticRegisterNativesAPaperSpriteActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperSpriteActor);
	UClass* Z_Construct_UClass_APaperSpriteActor_NoRegister()
	{
		return APaperSpriteActor::StaticClass();
	}
	struct Z_Construct_UClass_APaperSpriteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperSpriteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperSpriteActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * An instance of a UPaperSprite in a level.\n *\n * This actor is created when you drag a sprite asset from the content browser into the level, and\n * it is just a thin wrapper around a UPaperSpriteComponent that actually references the asset.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PaperSpriteActor.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteActor.h" },
		{ "ToolTip", "An instance of a UPaperSprite in a level.\n\nThis actor is created when you drag a sprite asset from the content browser into the level, and\nit is just a thin wrapper around a UPaperSpriteComponent that actually references the asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperSpriteActor_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperSpriteActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperSpriteActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperSpriteActor, RenderComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperSpriteActor_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperSpriteActor_Statics::NewProp_RenderComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperSpriteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperSpriteActor_Statics::NewProp_RenderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperSpriteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperSpriteActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperSpriteActor_Statics::ClassParams = {
		&APaperSpriteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperSpriteActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperSpriteActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperSpriteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperSpriteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperSpriteActor()
	{
		if (!Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton, Z_Construct_UClass_APaperSpriteActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaperSpriteActor.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<APaperSpriteActor>()
	{
		return APaperSpriteActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperSpriteActor);
	APaperSpriteActor::~APaperSpriteActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaperSpriteActor, APaperSpriteActor::StaticClass, TEXT("APaperSpriteActor"), &Z_Registration_Info_UClass_APaperSpriteActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperSpriteActor), 2512092063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h_1374637792(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
