// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTask_ClearBlackboardKey.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBlackboardKey() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTINGSAM_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardKey();
SHOOTINGSAM_API UClass* Z_Construct_UClass_UBTTask_ClearBlackboardKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTask_ClearBlackboardKey ***********************************************
void UBTTask_ClearBlackboardKey::StaticRegisterNativesUBTTask_ClearBlackboardKey()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey;
UClass* UBTTask_ClearBlackboardKey::GetPrivateStaticClass()
{
	using TClass = UBTTask_ClearBlackboardKey;
	if (!Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTask_ClearBlackboardKey"),
			Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.InnerSingleton,
			StaticRegisterNativesUBTTask_ClearBlackboardKey,
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
	return Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardKey_NoRegister()
{
	return UBTTask_ClearBlackboardKey::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_ClearBlackboardKey.h" },
		{ "ModuleRelativePath", "BTTask_ClearBlackboardKey.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBlackboardKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::ClassParams = {
	&UBTTask_ClearBlackboardKey::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ClearBlackboardKey()
{
	if (!Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.OuterSingleton, Z_Construct_UClass_UBTTask_ClearBlackboardKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBlackboardKey);
UBTTask_ClearBlackboardKey::~UBTTask_ClearBlackboardKey() {}
// ********** End Class UBTTask_ClearBlackboardKey *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTask_ClearBlackboardKey_h__Script_ShootingSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearBlackboardKey, UBTTask_ClearBlackboardKey::StaticClass, TEXT("UBTTask_ClearBlackboardKey"), &Z_Registration_Info_UClass_UBTTask_ClearBlackboardKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearBlackboardKey), 2718142153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTask_ClearBlackboardKey_h__Script_ShootingSam_3654939963(TEXT("/Script/ShootingSam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTask_ClearBlackboardKey_h__Script_ShootingSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_BTTask_ClearBlackboardKey_h__Script_ShootingSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
