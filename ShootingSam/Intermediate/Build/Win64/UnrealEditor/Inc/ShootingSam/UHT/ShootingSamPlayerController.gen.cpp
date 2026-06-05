// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSamPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootingSamPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamPlayerController();
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamPlayerController_NoRegister();
SHOOTINGSAM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShootingSamPlayerController Function SetMasterVolume ********************
struct Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics
{
	struct ShootingSamPlayerController_eventSetMasterVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingSamPlayerController_eventSetMasterVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AShootingSamPlayerController, nullptr, "SetMasterVolume", Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::ShootingSamPlayerController_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::ShootingSamPlayerController_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AShootingSamPlayerController::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class AShootingSamPlayerController Function SetMasterVolume **********************

// ********** Begin Class AShootingSamPlayerController *********************************************
void AShootingSamPlayerController::StaticRegisterNativesAShootingSamPlayerController()
{
	UClass* Class = AShootingSamPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetMasterVolume", &AShootingSamPlayerController::execSetMasterVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShootingSamPlayerController;
UClass* AShootingSamPlayerController::GetPrivateStaticClass()
{
	using TClass = AShootingSamPlayerController;
	if (!Z_Registration_Info_UClass_AShootingSamPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootingSamPlayerController"),
			Z_Registration_Info_UClass_AShootingSamPlayerController.InnerSingleton,
			StaticRegisterNativesAShootingSamPlayerController,
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
	return Z_Registration_Info_UClass_AShootingSamPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AShootingSamPlayerController_NoRegister()
{
	return AShootingSamPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShootingSamPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShootingSamPlayerController.h" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "ShootingSamPlayerController" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "Category", "ShootingSamPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSoundMix_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterSoundClass_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedVolumePercentage_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "ShootingSamPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterSoundMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterSoundClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedVolumePercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingSamPlayerController_SetMasterVolume, "SetMasterVolume" }, // 2185399126
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSamPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MasterSoundMix = { "MasterSoundMix", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, MasterSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSoundMix_MetaData), NewProp_MasterSoundMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MasterSoundClass = { "MasterSoundClass", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, MasterSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterSoundClass_MetaData), NewProp_MasterSoundClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_SavedVolumePercentage = { "SavedVolumePercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingSamPlayerController, SavedVolumePercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedVolumePercentage_MetaData), NewProp_SavedVolumePercentage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingSamPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MasterSoundMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_MasterSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSamPlayerController_Statics::NewProp_SavedVolumePercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShootingSamPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingSamPlayerController_Statics::ClassParams = {
	&AShootingSamPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AShootingSamPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSamPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingSamPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootingSamPlayerController()
{
	if (!Z_Registration_Info_UClass_AShootingSamPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingSamPlayerController.OuterSingleton, Z_Construct_UClass_AShootingSamPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootingSamPlayerController.OuterSingleton;
}
AShootingSamPlayerController::AShootingSamPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingSamPlayerController);
AShootingSamPlayerController::~AShootingSamPlayerController() {}
// ********** End Class AShootingSamPlayerController ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h__Script_ShootingSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootingSamPlayerController, AShootingSamPlayerController::StaticClass, TEXT("AShootingSamPlayerController"), &Z_Registration_Info_UClass_AShootingSamPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingSamPlayerController), 763943716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h__Script_ShootingSam_2916989282(TEXT("/Script/ShootingSam"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h__Script_ShootingSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h__Script_ShootingSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
