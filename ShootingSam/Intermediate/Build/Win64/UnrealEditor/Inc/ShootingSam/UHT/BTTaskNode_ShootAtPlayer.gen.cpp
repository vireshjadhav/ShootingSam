// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTaskNode_ShootAtPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_ShootAtPlayer() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
SHOOTINGSAM_API UClass* Z_Construct_UClass_UBTTaskNode_ShootAtPlayer();
SHOOTINGSAM_API UClass* Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_ShootAtPlayer ************************************************
void UBTTaskNode_ShootAtPlayer::StaticRegisterNativesUBTTaskNode_ShootAtPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer;
UClass* UBTTaskNode_ShootAtPlayer::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_ShootAtPlayer;
	if (!Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_ShootAtPlayer"),
			Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_ShootAtPlayer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_NoRegister()
{
	return UBTTaskNode_ShootAtPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTaskNode_ShootAtPlayer.h" },
		{ "ModuleRelativePath", "BTTaskNode_ShootAtPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_ShootAtPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::ClassParams = {
	&UBTTaskNode_ShootAtPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_ShootAtPlayer()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.OuterSingleton, Z_Construct_UClass_UBTTaskNode_ShootAtPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_ShootAtPlayer);
UBTTaskNode_ShootAtPlayer::~UBTTaskNode_ShootAtPlayer() {}
// ********** End Class UBTTaskNode_ShootAtPlayer **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTaskNode_ShootAtPlayer_h__Script_ShootingSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_ShootAtPlayer, UBTTaskNode_ShootAtPlayer::StaticClass, TEXT("UBTTaskNode_ShootAtPlayer"), &Z_Registration_Info_UClass_UBTTaskNode_ShootAtPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_ShootAtPlayer), 531035712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTaskNode_ShootAtPlayer_h__Script_ShootingSam_3838921037(TEXT("/Script/ShootingSam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTaskNode_ShootAtPlayer_h__Script_ShootingSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTaskNode_ShootAtPlayer_h__Script_ShootingSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
