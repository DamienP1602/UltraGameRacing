// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUltraGameRacing_init() {}
	ULTRAGAMERACING_API UFunction* Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UltraGameRacing;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UltraGameRacing()
	{
		if (!Z_Registration_Info_UPackage__Script_UltraGameRacing.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UltraGameRacing",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x68E21BA5,
				0xD9BF94BF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UltraGameRacing.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UltraGameRacing.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UltraGameRacing(Z_Construct_UPackage__Script_UltraGameRacing, TEXT("/Script/UltraGameRacing"), Z_Registration_Info_UPackage__Script_UltraGameRacing, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68E21BA5, 0xD9BF94BF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
