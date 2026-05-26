// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingSam_init() {}
	SHOOTINGSAM_API UFunction* Z_Construct_UDelegateFunction_ShootingSam_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShootingSam;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShootingSam()
	{
		if (!Z_Registration_Info_UPackage__Script_ShootingSam.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootingSam_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShootingSam",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x69AFDE92,
				0x77F5ECDA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShootingSam.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShootingSam.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShootingSam(Z_Construct_UPackage__Script_ShootingSam, TEXT("/Script/ShootingSam"), Z_Registration_Info_UPackage__Script_ShootingSam, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x69AFDE92, 0x77F5ECDA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
