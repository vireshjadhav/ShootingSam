// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSamGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootingSamGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamGameMode();
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShootingSamGameMode *****************************************************
void AShootingSamGameMode::StaticRegisterNativesAShootingSamGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShootingSamGameMode;
UClass* AShootingSamGameMode::GetPrivateStaticClass()
{
	using TClass = AShootingSamGameMode;
	if (!Z_Registration_Info_UClass_AShootingSamGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootingSamGameMode"),
			Z_Registration_Info_UClass_AShootingSamGameMode.InnerSingleton,
			StaticRegisterNativesAShootingSamGameMode,
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
	return Z_Registration_Info_UClass_AShootingSamGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AShootingSamGameMode_NoRegister()
{
	return AShootingSamGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShootingSamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingSamGameMode.h" },
		{ "ModuleRelativePath", "ShootingSamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShootingSamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingSamGameMode_Statics::ClassParams = {
	&AShootingSamGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingSamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootingSamGameMode()
{
	if (!Z_Registration_Info_UClass_AShootingSamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingSamGameMode.OuterSingleton, Z_Construct_UClass_AShootingSamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootingSamGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingSamGameMode);
AShootingSamGameMode::~AShootingSamGameMode() {}
// ********** End Class AShootingSamGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h__Script_ShootingSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootingSamGameMode, AShootingSamGameMode::StaticClass, TEXT("AShootingSamGameMode"), &Z_Registration_Info_UClass_AShootingSamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingSamGameMode), 3272675159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h__Script_ShootingSam_1692177798(TEXT("/Script/ShootingSam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h__Script_ShootingSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h__Script_ShootingSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
