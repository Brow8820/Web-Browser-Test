// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplay_init() {}
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HeadMountedDisplay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay()
	{
		if (!Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HeadMountedDisplay_DeviceModelLoadedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HeadMountedDisplay",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE29B57DB,
				0xCD80CC9C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HeadMountedDisplay(Z_Construct_UPackage__Script_HeadMountedDisplay, TEXT("/Script/HeadMountedDisplay"), Z_Registration_Info_UPackage__Script_HeadMountedDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE29B57DB, 0xCD80CC9C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
