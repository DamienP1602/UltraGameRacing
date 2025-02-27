// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPE/Spawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTRAGAMERACING_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define ULTRAGAMERACING_Spawner_generated_h

#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraGameRacing"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawner(ASpawner&&); \
	ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner) \
	NO_API virtual ~ASpawner();


#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_9_PROLOG
#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_12_INCLASS_NO_PURE_DECLS \
	FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRAGAMERACING_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
