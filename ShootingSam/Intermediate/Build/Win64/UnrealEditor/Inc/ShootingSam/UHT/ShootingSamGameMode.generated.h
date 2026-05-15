// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootingSamGameMode.h"

#ifdef SHOOTINGSAM_ShootingSamGameMode_generated_h
#error "ShootingSamGameMode.generated.h already included, missing '#pragma once' in ShootingSamGameMode.h"
#endif
#define SHOOTINGSAM_ShootingSamGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShootingSamGameMode *****************************************************
SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamGameMode_NoRegister();

#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSamGameMode(); \
	friend struct Z_Construct_UClass_AShootingSamGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AShootingSamGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSam"), Z_Construct_UClass_AShootingSamGameMode_NoRegister) \
	DECLARE_SERIALIZER(AShootingSamGameMode)


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShootingSamGameMode(AShootingSamGameMode&&) = delete; \
	AShootingSamGameMode(const AShootingSamGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSamGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSamGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShootingSamGameMode) \
	NO_API virtual ~AShootingSamGameMode();


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_12_PROLOG
#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShootingSamGameMode;

// ********** End Class AShootingSamGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
