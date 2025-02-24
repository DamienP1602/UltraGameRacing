// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPE/LootBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ULTRAGAMERACING_LootBox_generated_h
#error "LootBox.generated.h already included, missing '#pragma once' in LootBox.h"
#endif
#define ULTRAGAMERACING_LootBox_generated_h

#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootBox(); \
	friend struct Z_Construct_UClass_ALootBox_Statics; \
public: \
	DECLARE_CLASS(ALootBox, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UltraGameRacing"), NO_API) \
	DECLARE_SERIALIZER(ALootBox)


#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALootBox(ALootBox&&); \
	ALootBox(const ALootBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALootBox) \
	NO_API virtual ~ALootBox();


#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_14_PROLOG
#define FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_17_INCLASS_NO_PURE_DECLS \
	FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRAGAMERACING_API UClass* StaticClass<class ALootBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
