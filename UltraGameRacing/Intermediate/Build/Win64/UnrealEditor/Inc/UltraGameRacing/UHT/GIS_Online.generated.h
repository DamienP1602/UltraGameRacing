// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Online/GIS_Online.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSessionData;
#ifdef ULTRAGAMERACING_GIS_Online_generated_h
#error "GIS_Online.generated.h already included, missing '#pragma once' in GIS_Online.h"
#endif
#define ULTRAGAMERACING_GIS_Online_generated_h

#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerData_Statics; \
	ULTRAGAMERACING_API static class UScriptStruct* StaticStruct();


template<> ULTRAGAMERACING_API UScriptStruct* StaticStruct<struct FPlayerData>();

#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionData_Statics; \
	ULTRAGAMERACING_API static class UScriptStruct* StaticStruct();


template<> ULTRAGAMERACING_API UScriptStruct* StaticStruct<struct FSessionData>();

#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_78_DELEGATE \
static void FOnSessionsFound_DelegateWrapper(const FMulticastScriptDelegate& OnSessionsFound, const TArray<FSessionData>& _sessionsFound);


#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execCancelFindSessions); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execUpdateSession); \
	DECLARE_FUNCTION(execCreateSession);


#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGIS_Online(); \
	friend struct Z_Construct_UClass_UGIS_Online_Statics; \
public: \
	DECLARE_CLASS(UGIS_Online, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UltraGameRacing"), NO_API) \
	DECLARE_SERIALIZER(UGIS_Online)


#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGIS_Online(UGIS_Online&&); \
	UGIS_Online(const UGIS_Online&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGIS_Online); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGIS_Online); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGIS_Online) \
	NO_API virtual ~UGIS_Online();


#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_74_PROLOG
#define FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_INCLASS_NO_PURE_DECLS \
	FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ULTRAGAMERACING_API UClass* StaticClass<class UGIS_Online>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
