// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SCS_Node.h"
#include "Engine/Classes/Engine/Blueprint.h"
#include "Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCS_Node() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USCS_Node::StaticRegisterNativesUSCS_Node()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USCS_Node);
	UClass* Z_Construct_UClass_USCS_Node_NoRegister()
	{
		return USCS_Node::StaticClass();
	}
	struct Z_Construct_UClass_USCS_Node_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachToName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentOrVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentComponentOrVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentComponentOwnerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentComponentOwnerClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParentComponentNative_MetaData[];
#endif
		static void NewProp_bIsParentComponentNative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParentComponentNative;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNative_MetaData[];
#endif
		static void NewProp_bIsNative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NativeComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVariableNameAutoGenerated_MetaData[];
#endif
		static void NewProp_bVariableNameAutoGenerated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVariableNameAutoGenerated;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InternalVariableName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCS_Node_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SCS_Node.h" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** Component class */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Component class" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate_MetaData[] = {
		{ "Comment", "/** Template for the component to create */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Template for the component to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate = { "ComponentTemplate", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "Comment", "/** Cached data for faster runtime instancing (only used in cooked builds) */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Cached data for faster runtime instancing (only used in cooked builds)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData_MetaData)) }; // 3484312318
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Comment", "/** If non-None, the assigned category name */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If non-None, the assigned category name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, CategoryName), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName_MetaData[] = {
		{ "Comment", "/** Socket/Bone that Node might attach to */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Socket/Bone that Node might attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName = { "AttachToName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, AttachToName), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName_MetaData[] = {
		{ "Comment", "/** Component template or variable that Node might be parented to */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Component template or variable that Node might be parented to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName = { "ParentComponentOrVariableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, ParentComponentOrVariableName), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName_MetaData[] = {
		{ "Comment", "/** If the node is attached to another node inherited from a parent Blueprint, this contains the name of the Blueprint parent class that owns the component template *///@TODO: We can potentially remove this if/when inherited SCS component template instances are included in subobject serialization, as we could then infer that the owner class is always the same as the BP class.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If the node is attached to another node inherited from a parent Blueprint, this contains the name of the Blueprint parent class that owns the component template //@TODO: We can potentially remove this if/when inherited SCS component template instances are included in subobject serialization, as we could then infer that the owner class is always the same as the BP class." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName = { "ParentComponentOwnerClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, ParentComponentOwnerClassName), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_MetaData[] = {
		{ "Comment", "/** If the node is parented, this indicates whether or not the template is found in the CDO's Components array */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "If the node is parented, this indicates whether or not the template is found in the CDO's Components array" },
	};
#endif
	void Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_SetBit(void* Obj)
	{
		((USCS_Node*)Obj)->bIsParentComponentNative = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative = { "bIsParentComponentNative", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_SetBit, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_Inner = { "ChildNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_MetaData[] = {
		{ "Comment", "/** Set of child nodes */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Set of child nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes = { "ChildNodes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, ChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) }; // 1650001395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this Node */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Metadata information for this Node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_MetaData)) }; // 1650001395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Indicates if this is a native component or not */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) Indicates if this is a native component or not" },
	};
#endif
	void Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_SetBit(void* Obj)
	{
		((USCS_Node*)Obj)->bIsNative_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative = { "bIsNative", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_SetBit, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName_MetaData[] = {
		{ "Comment", "/* (DEPRECATED) If this is a native component, this is the name of the UActorComponent */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) If this is a native component, this is the name of the UActorComponent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName = { "NativeComponentName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, NativeComponentName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) If true, the variable name was a autogenerated and is not presented to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "(DEPRECATED) If true, the variable name was a autogenerated and is not presented to the user" },
	};
#endif
	void Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_SetBit(void* Obj)
	{
		((USCS_Node*)Obj)->bVariableNameAutoGenerated_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated = { "bVariableNameAutoGenerated", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USCS_Node), &Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName_MetaData[] = {
		{ "Comment", "/** Internal variable name. This is used for:\n\x09\x09\x09""a) Generating the component template (archetype) object name.\n\x09\x09\x09""b) A FObjectProperty in the generated Blueprint class. This holds a reference to the component instance created at Actor construction time.\n\x09\x09\x09""c) Archetype lookup through the generated Blueprint class. All instances route back to the archetype through the variable name (i.e. not the template name).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SCS_Node.h" },
		{ "ToolTip", "Internal variable name. This is used for:\n                      a) Generating the component template (archetype) object name.\n                      b) A FObjectProperty in the generated Blueprint class. This holds a reference to the component instance created at Actor construction time.\n                      c) Archetype lookup through the generated Blueprint class. All instances route back to the archetype through the variable name (i.e. not the template name)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName = { "InternalVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USCS_Node, InternalVariableName), METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCS_Node_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ComponentTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_CookedComponentInstancingData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_CategoryName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_AttachToName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOrVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ParentComponentOwnerClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsParentComponentNative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_ChildNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_MetaDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_VariableGuid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bIsNative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_NativeComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_bVariableNameAutoGenerated,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCS_Node_Statics::NewProp_InternalVariableName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCS_Node_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCS_Node>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USCS_Node_Statics::ClassParams = {
		&USCS_Node::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USCS_Node_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USCS_Node_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCS_Node_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCS_Node()
	{
		if (!Z_Registration_Info_UClass_USCS_Node.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USCS_Node.OuterSingleton, Z_Construct_UClass_USCS_Node_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USCS_Node.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USCS_Node>()
	{
		return USCS_Node::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCS_Node);
	USCS_Node::~USCS_Node() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USCS_Node)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USCS_Node, USCS_Node::StaticClass, TEXT("USCS_Node"), &Z_Registration_Info_UClass_USCS_Node, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USCS_Node), 2440579543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_2825720762(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SCS_Node_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
