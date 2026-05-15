// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootingSamCharacter.h"

#ifdef SHOOTINGSAM_ShootingSamCharacter_generated_h
#error "ShootingSamCharacter.generated.h already included, missing '#pragma once' in ShootingSamCharacter.h"
#endif
#define SHOOTINGSAM_ShootingSamCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShootingSamCharacter ****************************************************
#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamCharacter_NoRegister();

#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSamCharacter(); \
	friend struct Z_Construct_UClass_AShootingSamCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTINGSAM_API UClass* Z_Construct_UClass_AShootingSamCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AShootingSamCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSam"), Z_Construct_UClass_AShootingSamCharacter_NoRegister) \
	DECLARE_SERIALIZER(AShootingSamCharacter)


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShootingSamCharacter(AShootingSamCharacter&&) = delete; \
	AShootingSamCharacter(const AShootingSamCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSamCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSamCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShootingSamCharacter) \
	NO_API virtual ~AShootingSamCharacter();


#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_21_PROLOG
#define FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShootingSamCharacter;

// ********** End Class AShootingSamCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ShootingSam_ShootingSam_Source_ShootingSam_ShootingSamCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
