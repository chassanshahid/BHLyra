// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterTestsDevicePropertyTester.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
struct FPlatformUserId;
#ifdef SHOOTERTESTSRUNTIME_ShooterTestsDevicePropertyTester_generated_h
#error "ShooterTestsDevicePropertyTester.generated.h already included, missing '#pragma once' in ShooterTestsDevicePropertyTester.h"
#endif
#define SHOOTERTESTSRUNTIME_ShooterTestsDevicePropertyTester_generated_h

#define FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execRemoveDeviceProperties); \
	DECLARE_FUNCTION(execApplyDeviceProperties);


#define FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterTestsDevicePropertyTester(); \
	friend struct Z_Construct_UClass_AShooterTestsDevicePropertyTester_Statics; \
public: \
	DECLARE_CLASS(AShooterTestsDevicePropertyTester, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterTestsRuntime"), NO_API) \
	DECLARE_SERIALIZER(AShooterTestsDevicePropertyTester)


#define FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShooterTestsDevicePropertyTester(AShooterTestsDevicePropertyTester&&); \
	AShooterTestsDevicePropertyTester(const AShooterTestsDevicePropertyTester&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterTestsDevicePropertyTester); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterTestsDevicePropertyTester); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterTestsDevicePropertyTester) \
	NO_API virtual ~AShooterTestsDevicePropertyTester();


#define FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_16_PROLOG
#define FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_INCLASS_NO_PURE_DECLS \
	FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERTESTSRUNTIME_API UClass* StaticClass<class AShooterTestsDevicePropertyTester>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_repos_Lyra_5_4_main_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestsDevicePropertyTester_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS