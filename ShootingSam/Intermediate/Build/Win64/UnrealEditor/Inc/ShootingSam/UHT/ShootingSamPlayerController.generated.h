// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootingSamPlayerController.h"

#ifdef SHOOTINGSAM_ShootingSamPlayerController_generated_h
#error "ShootingSamPlayerController.generated.h already included, missing '#pragma once' in ShootingSamPlayerController.h"
#endif
#define SHOOTINGSAM_ShootingSamPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShootingSamPlayerController *********************************************
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamPlayerController_NoRegister();

#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSamPlayerController(); \
	friend struct Z_Construct_UClass_AShootingSamPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AShootingSamPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSam"), Z_Construct_UClass_AShootingSamPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AShootingSamPlayerController)


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingSamPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShootingSamPlayerController(AShootingSamPlayerController&&) = delete; \
	AShootingSamPlayerController(const AShootingSamPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSamPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSamPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingSamPlayerController) \
	NO_API virtual ~AShootingSamPlayerController();


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_16_PROLOG
#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShootingSamPlayerController;

// ********** End Class AShootingSamPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
