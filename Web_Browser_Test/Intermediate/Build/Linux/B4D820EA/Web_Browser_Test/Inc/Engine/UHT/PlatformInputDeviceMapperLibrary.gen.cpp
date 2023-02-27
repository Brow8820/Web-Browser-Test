// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlatformInputDeviceMapperLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInputDeviceMapperLibrary() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInputDeviceMapperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execNotEqual_InputDeviceId)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_A);
		P_GET_STRUCT(FInputDeviceId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::NotEqual_InputDeviceId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execEqualEqual_InputDeviceId)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_A);
		P_GET_STRUCT(FInputDeviceId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::EqualEqual_InputDeviceId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execNotEqual_PlatformUserId)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_A);
		P_GET_STRUCT(FPlatformUserId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::NotEqual_PlatformUserId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execEqualEqual_PlatformUserId)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_A);
		P_GET_STRUCT(FPlatformUserId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::EqualEqual_PlatformUserId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execInputDeviceId_None)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDeviceId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::InputDeviceId_None();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execPlatformUserId_None)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlatformUserId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::PlatformUserId_None();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execIsValidPlatformId)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::IsValidPlatformId(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execIsValidInputDevice)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::IsValidInputDevice(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetInputDeviceConnectionState)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputDeviceConnectionState*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetInputDeviceConnectionState(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetPrimaryInputDeviceForUser)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDeviceId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetPrimaryInputDeviceForUser(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetUserForInputDevice)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_DeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlatformUserId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetUserForInputDevice(Z_Param_DeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetDefaultInputDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDeviceId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetDefaultInputDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execIsInputDeviceMappedToUnpairedUser)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_InputDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::IsInputDeviceMappedToUnpairedUser(Z_Param_InputDevice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execIsUnpairedUserId)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::IsUnpairedUserId(Z_Param_PlatformId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetUserForUnpairedInputDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlatformUserId*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetUserForUnpairedInputDevices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetAllActiveUsers)
	{
		P_GET_TARRAY_REF(FPlatformUserId,Z_Param_Out_OutUsers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetAllActiveUsers(Z_Param_Out_OutUsers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetAllConnectedInputDevices)
	{
		P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetAllConnectedInputDevices(Z_Param_Out_OutInputDevices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetAllInputDevices)
	{
		P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetAllInputDevices(Z_Param_Out_OutInputDevices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformInputDeviceMapperLibrary::execGetAllInputDevicesForUser)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_UserId);
		P_GET_TARRAY_REF(FInputDeviceId,Z_Param_Out_OutInputDevices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPlatformInputDeviceMapperLibrary::GetAllInputDevicesForUser(Z_Param_UserId,Z_Param_Out_OutInputDevices);
		P_NATIVE_END;
	}
	void UPlatformInputDeviceMapperLibrary::StaticRegisterNativesUPlatformInputDeviceMapperLibrary()
	{
		UClass* Class = UPlatformInputDeviceMapperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EqualEqual_InputDeviceId", &UPlatformInputDeviceMapperLibrary::execEqualEqual_InputDeviceId },
			{ "EqualEqual_PlatformUserId", &UPlatformInputDeviceMapperLibrary::execEqualEqual_PlatformUserId },
			{ "GetAllActiveUsers", &UPlatformInputDeviceMapperLibrary::execGetAllActiveUsers },
			{ "GetAllConnectedInputDevices", &UPlatformInputDeviceMapperLibrary::execGetAllConnectedInputDevices },
			{ "GetAllInputDevices", &UPlatformInputDeviceMapperLibrary::execGetAllInputDevices },
			{ "GetAllInputDevicesForUser", &UPlatformInputDeviceMapperLibrary::execGetAllInputDevicesForUser },
			{ "GetDefaultInputDevice", &UPlatformInputDeviceMapperLibrary::execGetDefaultInputDevice },
			{ "GetInputDeviceConnectionState", &UPlatformInputDeviceMapperLibrary::execGetInputDeviceConnectionState },
			{ "GetPrimaryInputDeviceForUser", &UPlatformInputDeviceMapperLibrary::execGetPrimaryInputDeviceForUser },
			{ "GetUserForInputDevice", &UPlatformInputDeviceMapperLibrary::execGetUserForInputDevice },
			{ "GetUserForUnpairedInputDevices", &UPlatformInputDeviceMapperLibrary::execGetUserForUnpairedInputDevices },
			{ "InputDeviceId_None", &UPlatformInputDeviceMapperLibrary::execInputDeviceId_None },
			{ "IsInputDeviceMappedToUnpairedUser", &UPlatformInputDeviceMapperLibrary::execIsInputDeviceMappedToUnpairedUser },
			{ "IsUnpairedUserId", &UPlatformInputDeviceMapperLibrary::execIsUnpairedUserId },
			{ "IsValidInputDevice", &UPlatformInputDeviceMapperLibrary::execIsValidInputDevice },
			{ "IsValidPlatformId", &UPlatformInputDeviceMapperLibrary::execIsValidPlatformId },
			{ "NotEqual_InputDeviceId", &UPlatformInputDeviceMapperLibrary::execNotEqual_InputDeviceId },
			{ "NotEqual_PlatformUserId", &UPlatformInputDeviceMapperLibrary::execNotEqual_PlatformUserId },
			{ "PlatformUserId_None", &UPlatformInputDeviceMapperLibrary::execPlatformUserId_None },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms
		{
			FInputDeviceId A;
			FInputDeviceId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms, A), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms, B), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if InputDeviceId A is equal to InputDeviceId B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (InputDeviceId)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptMethod", "Equals" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if InputDeviceId A is equal to InputDeviceId B (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "EqualEqual_InputDeviceId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::PlatformInputDeviceMapperLibrary_eventEqualEqual_InputDeviceId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms
		{
			FPlatformUserId A;
			FPlatformUserId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms, A), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms, B), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if PlatformUserId A is equal to PlatformUserId B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (PlatformUserId)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptMethod", "Equals" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if PlatformUserId A is equal to PlatformUserId B (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "EqualEqual_PlatformUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::PlatformInputDeviceMapperLibrary_eventEqualEqual_PlatformUserId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetAllActiveUsers_Parms
		{
			TArray<FPlatformUserId> OutUsers;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUsers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUsers;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers_Inner = { "OutUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers = { "OutUsers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllActiveUsers_Parms, OutUsers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllActiveUsers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_OutUsers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Get all currently active platform ids, anyone who has a mapped input device\n\x09 *\n\x09 * @param OutUsers\x09\x09""Array that will be populated with the platform users.\n\x09 * @return\x09\x09\x09\x09The number of active platform users\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Get all currently active platform ids, anyone who has a mapped input device\n\n@param OutUsers              Array that will be populated with the platform users.\n@return                              The number of active platform users" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetAllActiveUsers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::PlatformInputDeviceMapperLibrary_eventGetAllActiveUsers_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetAllConnectedInputDevices_Parms
		{
			TArray<FInputDeviceId> OutInputDevices;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllConnectedInputDevices_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllConnectedInputDevices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_OutInputDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Gather all currently connected input devices\n\x09 * \n\x09 * @param OutInputDevices\x09""Array of input devices to populate\n\x09 * @return\x09\x09\x09\x09\x09The number of connected input devices\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Gather all currently connected input devices\n\n@param OutInputDevices       Array of input devices to populate\n@return                                      The number of connected input devices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetAllConnectedInputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::PlatformInputDeviceMapperLibrary_eventGetAllConnectedInputDevices_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetAllInputDevices_Parms
		{
			TArray<FInputDeviceId> OutInputDevices;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllInputDevices_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllInputDevices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_OutInputDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Get all mapped input devices on this platform regardless of their connection state.\n\x09 * \n\x09 * @param OutInputDevices\x09""Array of input devices to populate\n\x09 * @return\x09\x09\x09\x09\x09The number of connected input devices\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Get all mapped input devices on this platform regardless of their connection state.\n\n@param OutInputDevices       Array of input devices to populate\n@return                                      The number of connected input devices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetAllInputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::PlatformInputDeviceMapperLibrary_eventGetAllInputDevices_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetAllInputDevicesForUser_Parms
		{
			FPlatformUserId UserId;
			TArray<FInputDeviceId> OutInputDevices;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInputDevices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputDevices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllInputDevicesForUser_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices_Inner = { "OutInputDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices = { "OutInputDevices", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllInputDevicesForUser_Parms, OutInputDevices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetAllInputDevicesForUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_OutInputDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Populates the OutInputDevices array with any InputDeviceID's that are mapped to the given platform user\n\x09 *\n\x09 * @param UserId\x09\x09\x09\x09The Platform User to gather the input devices of.\n\x09 * @param OutInputDevices\x09\x09""Array of input device ID's that will be populated with the mapped devices.\n\x09 * @return\x09\x09\x09\x09\x09\x09The number of mapped devices, INDEX_NONE if the user was not found.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Populates the OutInputDevices array with any InputDeviceID's that are mapped to the given platform user\n\n@param UserId                                The Platform User to gather the input devices of.\n@param OutInputDevices               Array of input device ID's that will be populated with the mapped devices.\n@return                                              The number of mapped devices, INDEX_NONE if the user was not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetAllInputDevicesForUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::PlatformInputDeviceMapperLibrary_eventGetAllInputDevicesForUser_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetDefaultInputDevice_Parms
		{
			FInputDeviceId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetDefaultInputDevice_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the default device id used for things like keyboard/mouse input */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns the default device id used for things like keyboard/mouse input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetDefaultInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::PlatformInputDeviceMapperLibrary_eventGetDefaultInputDevice_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetInputDeviceConnectionState_Parms
		{
			FInputDeviceId DeviceId;
			EInputDeviceConnectionState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetInputDeviceConnectionState_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetInputDeviceConnectionState_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState, METADATA_PARAMS(nullptr, 0) }; // 111167951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Gets the connection state of the given input device.\n\x09 * \n\x09 * @param DeviceId\x09\x09The device to get the connection state of\n\x09 * @return\x09\x09\x09\x09The connection state of the given device. EInputDeviceConnectionState::Unknown if the device is not mapped\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Gets the connection state of the given input device.\n\n@param DeviceId              The device to get the connection state of\n@return                              The connection state of the given device. EInputDeviceConnectionState::Unknown if the device is not mapped" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetInputDeviceConnectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::PlatformInputDeviceMapperLibrary_eventGetInputDeviceConnectionState_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetPrimaryInputDeviceForUser_Parms
		{
			FPlatformUserId UserId;
			FInputDeviceId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetPrimaryInputDeviceForUser_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetPrimaryInputDeviceForUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the primary input device used by a specific player, or INPUTDEVICEID_NONE if invalid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns the primary input device used by a specific player, or INPUTDEVICEID_NONE if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetPrimaryInputDeviceForUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::PlatformInputDeviceMapperLibrary_eventGetPrimaryInputDeviceForUser_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetUserForInputDevice_Parms
		{
			FInputDeviceId DeviceId;
			FPlatformUserId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetUserForInputDevice_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetUserForInputDevice_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns the platform user attached to this input device, or PLATFORMUSERID_NONE if invalid */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns the platform user attached to this input device, or PLATFORMUSERID_NONE if invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetUserForInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::PlatformInputDeviceMapperLibrary_eventGetUserForInputDevice_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventGetUserForUnpairedInputDevices_Parms
		{
			FPlatformUserId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventGetUserForUnpairedInputDevices_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Returns the platform user id that is being used for unmapped input devices.\n\x09 * Will be PLATFORMUSERID_NONE if platform does not support this (this is the default behavior)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns the platform user id that is being used for unmapped input devices.\nWill be PLATFORMUSERID_NONE if platform does not support this (this is the default behavior)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "GetUserForUnpairedInputDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::PlatformInputDeviceMapperLibrary_eventGetUserForUnpairedInputDevices_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventInputDeviceId_None_Parms
		{
			FInputDeviceId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventInputDeviceId_None_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Static invalid input device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptConstant", "None" },
		{ "ScriptConstantHost", "/Script/CoreUObject.InputDeviceId" },
		{ "ToolTip", "Static invalid input device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "InputDeviceId_None", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::PlatformInputDeviceMapperLibrary_eventInputDeviceId_None_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms
		{
			FInputDeviceId InputDevice;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDevice;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice = { "InputDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms, InputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice_MetaData)) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_InputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if the given input device is mapped to the unpaired platform user id. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns true if the given input device is mapped to the unpaired platform user id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "IsInputDeviceMappedToUnpairedUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PlatformInputDeviceMapperLibrary_eventIsInputDeviceMappedToUnpairedUser_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventIsUnpairedUserId_Parms
		{
			FPlatformUserId PlatformId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventIsUnpairedUserId_Parms, PlatformId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId_MetaData)) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventIsUnpairedUserId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventIsUnpairedUserId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_PlatformId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if the given Platform User Id is the user for unpaired input devices on this platform. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Returns true if the given Platform User Id is the user for unpaired input devices on this platform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "IsUnpairedUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::PlatformInputDeviceMapperLibrary_eventIsUnpairedUserId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventIsValidInputDevice_Parms
		{
			FInputDeviceId DeviceId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventIsValidInputDevice_Parms, DeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventIsValidInputDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventIsValidInputDevice_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Check if the given input device is valid\n\x09 * \n\x09 * @return\x09True if the given input device is valid (it has been assigned an ID by the PlatformInputDeviceMapper)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Check if the given input device is valid\n\n@return      True if the given input device is valid (it has been assigned an ID by the PlatformInputDeviceMapper)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "IsValidInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::PlatformInputDeviceMapperLibrary_eventIsValidInputDevice_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventIsValidPlatformId_Parms
		{
			FPlatformUserId UserId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventIsValidPlatformId_Parms, UserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventIsValidPlatformId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventIsValidPlatformId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/**\n\x09 * Check if the given platform ID is valid\n\x09 * \n\x09 * @return\x09True if the platform ID is valid (it has been assigned by the PlatformInputDeviceMapper)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "Check if the given platform ID is valid\n\n@return      True if the platform ID is valid (it has been assigned by the PlatformInputDeviceMapper)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "IsValidPlatformId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::PlatformInputDeviceMapperLibrary_eventIsValidPlatformId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms
		{
			FInputDeviceId A;
			FInputDeviceId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms, A), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms, B), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if InputDeviceId A is not equal to InputDeviceId B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (InputDeviceId)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptMethod", "NotEqual" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if InputDeviceId A is not equal to InputDeviceId B (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "NotEqual_InputDeviceId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::PlatformInputDeviceMapperLibrary_eventNotEqual_InputDeviceId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms
		{
			FPlatformUserId A;
			FPlatformUserId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms, A), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms, B), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms), &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Returns true if PlatformUserId A is not equal to PlatformUserId B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (PlatformUserId)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptMethod", "NotEqual" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if PlatformUserId A is not equal to PlatformUserId B (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "NotEqual_PlatformUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::PlatformInputDeviceMapperLibrary_eventNotEqual_PlatformUserId_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct PlatformInputDeviceMapperLibrary_eventPlatformUserId_None_Parms
		{
			FPlatformUserId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlatformInputDeviceMapperLibrary_eventPlatformUserId_None_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlatformInputDevice" },
		{ "Comment", "/** Static invalid platform user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ScriptConstant", "None" },
		{ "ScriptConstantHost", "/Script/CoreUObject.PlatformUserId" },
		{ "ToolTip", "Static invalid platform user" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, nullptr, "PlatformUserId_None", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::PlatformInputDeviceMapperLibrary_eventPlatformUserId_None_Parms), Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformInputDeviceMapperLibrary);
	UClass* Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_NoRegister()
	{
		return UPlatformInputDeviceMapperLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_InputDeviceId, "EqualEqual_InputDeviceId" }, // 4022021125
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_EqualEqual_PlatformUserId, "EqualEqual_PlatformUserId" }, // 3432273648
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllActiveUsers, "GetAllActiveUsers" }, // 2338210427
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllConnectedInputDevices, "GetAllConnectedInputDevices" }, // 3125941256
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevices, "GetAllInputDevices" }, // 458657236
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetAllInputDevicesForUser, "GetAllInputDevicesForUser" }, // 3484927340
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetDefaultInputDevice, "GetDefaultInputDevice" }, // 3236869788
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetInputDeviceConnectionState, "GetInputDeviceConnectionState" }, // 3795355473
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetPrimaryInputDeviceForUser, "GetPrimaryInputDeviceForUser" }, // 1187644130
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForInputDevice, "GetUserForInputDevice" }, // 1133800288
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_GetUserForUnpairedInputDevices, "GetUserForUnpairedInputDevices" }, // 1131021477
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_InputDeviceId_None, "InputDeviceId_None" }, // 146888852
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsInputDeviceMappedToUnpairedUser, "IsInputDeviceMappedToUnpairedUser" }, // 2322807812
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsUnpairedUserId, "IsUnpairedUserId" }, // 1832903435
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidInputDevice, "IsValidInputDevice" }, // 3917099117
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_IsValidPlatformId, "IsValidPlatformId" }, // 611853905
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_InputDeviceId, "NotEqual_InputDeviceId" }, // 559221448
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_NotEqual_PlatformUserId, "NotEqual_PlatformUserId" }, // 3105204076
		{ &Z_Construct_UFunction_UPlatformInputDeviceMapperLibrary_PlatformUserId_None, "PlatformUserId_None" }, // 2483463240
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A static BP library that exposes the functionality of IPlatformInputDeviceMapper to blueprints.\n *\n * @see IPlatformInputDeviceMapper\n * @note Keep any function comments up to date with those in GenericPlatformInputDeviceMapper.h!\n */" },
		{ "IncludePath", "GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlatformInputDeviceMapperLibrary.h" },
		{ "ToolTip", "A static BP library that exposes the functionality of IPlatformInputDeviceMapper to blueprints.\n\n@see IPlatformInputDeviceMapper\n@note Keep any function comments up to date with those in GenericPlatformInputDeviceMapper.h!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformInputDeviceMapperLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::ClassParams = {
		&UPlatformInputDeviceMapperLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformInputDeviceMapperLibrary()
	{
		if (!Z_Registration_Info_UClass_UPlatformInputDeviceMapperLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformInputDeviceMapperLibrary.OuterSingleton, Z_Construct_UClass_UPlatformInputDeviceMapperLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformInputDeviceMapperLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlatformInputDeviceMapperLibrary>()
	{
		return UPlatformInputDeviceMapperLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInputDeviceMapperLibrary);
	UPlatformInputDeviceMapperLibrary::~UPlatformInputDeviceMapperLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformInputDeviceMapperLibrary, UPlatformInputDeviceMapperLibrary::StaticClass, TEXT("UPlatformInputDeviceMapperLibrary"), &Z_Registration_Info_UClass_UPlatformInputDeviceMapperLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformInputDeviceMapperLibrary), 1124282122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_3910888965(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlatformInputDeviceMapperLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
