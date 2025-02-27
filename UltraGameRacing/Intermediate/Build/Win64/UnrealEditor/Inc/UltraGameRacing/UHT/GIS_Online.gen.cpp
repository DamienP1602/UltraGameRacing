// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Online/GIS_Online.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGIS_Online() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UGIS_Online();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UGIS_Online_NoRegister();
ULTRAGAMERACING_API UFunction* Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature();
ULTRAGAMERACING_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
ULTRAGAMERACING_API UScriptStruct* Z_Construct_UScriptStruct_FSessionData();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin ScriptStruct FPlayerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerData;
class UScriptStruct* FPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, (UObject*)Z_Construct_UPackage__Script_UltraGameRacing(), TEXT("PlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.OuterSingleton;
}
template<> ULTRAGAMERACING_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_playerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerData, playerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerName_MetaData), NewProp_playerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerData_Statics::NewProp_playerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
	nullptr,
	&NewStructOps,
	"PlayerData",
	Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::PropPointers),
	sizeof(FPlayerData),
	alignof(FPlayerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton, Z_Construct_UScriptStruct_FPlayerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerData.InnerSingleton;
}
// End ScriptStruct FPlayerData

// Begin ScriptStruct FSessionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionData;
class UScriptStruct* FSessionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionData, (UObject*)Z_Construct_UPackage__Script_UltraGameRacing(), TEXT("SessionData"));
	}
	return Z_Registration_Info_UScriptStruct_SessionData.OuterSingleton;
}
template<> ULTRAGAMERACING_API UScriptStruct* StaticStruct<FSessionData>()
{
	return FSessionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSessionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_serverName_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playersCount_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxPlayersCount_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ping_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allPlayersData_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_serverName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_levelName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_playersCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxPlayersCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_allPlayersData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_allPlayersData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_serverName = { "serverName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, serverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_serverName_MetaData), NewProp_serverName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levelName_MetaData), NewProp_levelName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_playersCount = { "playersCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, playersCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playersCount_MetaData), NewProp_playersCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_maxPlayersCount = { "maxPlayersCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, maxPlayersCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxPlayersCount_MetaData), NewProp_maxPlayersCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_ping = { "ping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, ping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ping_MetaData), NewProp_ping_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_allPlayersData_Inner = { "allPlayersData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerData, METADATA_PARAMS(0, nullptr) }; // 2428120510
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_allPlayersData = { "allPlayersData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSessionData, allPlayersData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allPlayersData_MetaData), NewProp_allPlayersData_MetaData) }; // 2428120510
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_serverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_levelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_playersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_maxPlayersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_ping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_allPlayersData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionData_Statics::NewProp_allPlayersData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
	nullptr,
	&NewStructOps,
	"SessionData",
	Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::PropPointers),
	sizeof(FSessionData),
	alignof(FSessionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSessionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSessionData()
{
	if (!Z_Registration_Info_UScriptStruct_SessionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionData.InnerSingleton, Z_Construct_UScriptStruct_FSessionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SessionData.InnerSingleton;
}
// End ScriptStruct FSessionData

// Begin Delegate FOnSessionsFound
struct Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics
{
	struct GIS_Online_eventOnSessionsFound_Parms
	{
		TArray<FSessionData> _sessionsFound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__sessionsFound_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__sessionsFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::NewProp__sessionsFound_Inner = { "_sessionsFound", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSessionData, METADATA_PARAMS(0, nullptr) }; // 2425850669
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::NewProp__sessionsFound = { "_sessionsFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GIS_Online_eventOnSessionsFound_Parms, _sessionsFound), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2425850669
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::NewProp__sessionsFound_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::NewProp__sessionsFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "OnSessionsFound__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::GIS_Online_eventOnSessionsFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::GIS_Online_eventOnSessionsFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGIS_Online::FOnSessionsFound_DelegateWrapper(const FMulticastScriptDelegate& OnSessionsFound, const TArray<FSessionData>& _sessionsFound)
{
	struct GIS_Online_eventOnSessionsFound_Parms
	{
		TArray<FSessionData> _sessionsFound;
	};
	GIS_Online_eventOnSessionsFound_Parms Parms;
	Parms._sessionsFound=_sessionsFound;
	OnSessionsFound.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSessionsFound

// Begin Class UGIS_Online Function CancelFindSessions
struct Z_Construct_UFunction_UGIS_Online_CancelFindSessions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_CancelFindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "CancelFindSessions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_CancelFindSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_CancelFindSessions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_CancelFindSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_CancelFindSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execCancelFindSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelFindSessions();
	P_NATIVE_END;
}
// End Class UGIS_Online Function CancelFindSessions

// Begin Class UGIS_Online Function CreateSession
struct Z_Construct_UFunction_UGIS_Online_CreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "CreateSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_CreateSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execCreateSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSession();
	P_NATIVE_END;
}
// End Class UGIS_Online Function CreateSession

// Begin Class UGIS_Online Function DestroySession
struct Z_Construct_UFunction_UGIS_Online_DestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "DestroySession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_DestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_DestroySession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_DestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_DestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execDestroySession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySession();
	P_NATIVE_END;
}
// End Class UGIS_Online Function DestroySession

// Begin Class UGIS_Online Function EndSession
struct Z_Construct_UFunction_UGIS_Online_EndSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "EndSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_EndSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_EndSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_EndSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_EndSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execEndSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSession();
	P_NATIVE_END;
}
// End Class UGIS_Online Function EndSession

// Begin Class UGIS_Online Function FindSessions
struct Z_Construct_UFunction_UGIS_Online_FindSessions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_FindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "FindSessions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_FindSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_FindSessions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_FindSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_FindSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execFindSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindSessions();
	P_NATIVE_END;
}
// End Class UGIS_Online Function FindSessions

// Begin Class UGIS_Online Function JoinSession
struct Z_Construct_UFunction_UGIS_Online_JoinSession_Statics
{
	struct GIS_Online_eventJoinSession_Parms
	{
		FName _sessionName;
		FString _levelPath;
		int32 _index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__levelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp__sessionName;
	static const UECodeGen_Private::FStrPropertyParams NewProp__levelPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp__index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__sessionName = { "_sessionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GIS_Online_eventJoinSession_Parms, _sessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sessionName_MetaData), NewProp__sessionName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__levelPath = { "_levelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GIS_Online_eventJoinSession_Parms, _levelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__levelPath_MetaData), NewProp__levelPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__index = { "_index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GIS_Online_eventJoinSession_Parms, _index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__index_MetaData), NewProp__index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__sessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__levelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::NewProp__index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "JoinSession", nullptr, nullptr, Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::GIS_Online_eventJoinSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::GIS_Online_eventJoinSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGIS_Online_JoinSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_JoinSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execJoinSession)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out__sessionName);
	P_GET_PROPERTY(FStrProperty,Z_Param__levelPath);
	P_GET_PROPERTY(FIntProperty,Z_Param__index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinSession(Z_Param_Out__sessionName,Z_Param__levelPath,Z_Param__index);
	P_NATIVE_END;
}
// End Class UGIS_Online Function JoinSession

// Begin Class UGIS_Online Function RegisterPlayer
struct Z_Construct_UFunction_UGIS_Online_RegisterPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "RegisterPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_RegisterPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_RegisterPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_RegisterPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_RegisterPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execRegisterPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPlayer();
	P_NATIVE_END;
}
// End Class UGIS_Online Function RegisterPlayer

// Begin Class UGIS_Online Function StartSession
struct Z_Construct_UFunction_UGIS_Online_StartSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "StartSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_StartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_StartSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_StartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_StartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execStartSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSession();
	P_NATIVE_END;
}
// End Class UGIS_Online Function StartSession

// Begin Class UGIS_Online Function UpdateSession
struct Z_Construct_UFunction_UGIS_Online_UpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGIS_Online_UpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGIS_Online, nullptr, "UpdateSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGIS_Online_UpdateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGIS_Online_UpdateSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGIS_Online_UpdateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGIS_Online_UpdateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGIS_Online::execUpdateSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSession();
	P_NATIVE_END;
}
// End Class UGIS_Online Function UpdateSession

// Begin Class UGIS_Online
void UGIS_Online::StaticRegisterNativesUGIS_Online()
{
	UClass* Class = UGIS_Online::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelFindSessions", &UGIS_Online::execCancelFindSessions },
		{ "CreateSession", &UGIS_Online::execCreateSession },
		{ "DestroySession", &UGIS_Online::execDestroySession },
		{ "EndSession", &UGIS_Online::execEndSession },
		{ "FindSessions", &UGIS_Online::execFindSessions },
		{ "JoinSession", &UGIS_Online::execJoinSession },
		{ "RegisterPlayer", &UGIS_Online::execRegisterPlayer },
		{ "StartSession", &UGIS_Online::execStartSession },
		{ "UpdateSession", &UGIS_Online::execUpdateSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGIS_Online);
UClass* Z_Construct_UClass_UGIS_Online_NoRegister()
{
	return UGIS_Online::StaticClass();
}
struct Z_Construct_UClass_UGIS_Online_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Online/GIS_Online.h" },
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_serverName_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sessionName_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxPlayersCount_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_levelPath_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lobbyLevelPath_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainMenuLevelPath_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[] = {
		{ "ModuleRelativePath", "Online/GIS_Online.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_serverName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_sessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxPlayersCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_levelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_lobbyLevelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_mainMenuLevelPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ipAddress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGIS_Online_CancelFindSessions, "CancelFindSessions" }, // 240052838
		{ &Z_Construct_UFunction_UGIS_Online_CreateSession, "CreateSession" }, // 1424221072
		{ &Z_Construct_UFunction_UGIS_Online_DestroySession, "DestroySession" }, // 3447104947
		{ &Z_Construct_UFunction_UGIS_Online_EndSession, "EndSession" }, // 198914864
		{ &Z_Construct_UFunction_UGIS_Online_FindSessions, "FindSessions" }, // 2021223134
		{ &Z_Construct_UFunction_UGIS_Online_JoinSession, "JoinSession" }, // 3579093788
		{ &Z_Construct_UDelegateFunction_UGIS_Online_OnSessionsFound__DelegateSignature, "OnSessionsFound__DelegateSignature" }, // 1256171565
		{ &Z_Construct_UFunction_UGIS_Online_RegisterPlayer, "RegisterPlayer" }, // 2867891515
		{ &Z_Construct_UFunction_UGIS_Online_StartSession, "StartSession" }, // 2268422455
		{ &Z_Construct_UFunction_UGIS_Online_UpdateSession, "UpdateSession" }, // 750244966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGIS_Online>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_serverName = { "serverName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, serverName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_serverName_MetaData), NewProp_serverName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, sessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sessionName_MetaData), NewProp_sessionName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_maxPlayersCount = { "maxPlayersCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, maxPlayersCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxPlayersCount_MetaData), NewProp_maxPlayersCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_levelPath = { "levelPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, levelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_levelPath_MetaData), NewProp_levelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_lobbyLevelPath = { "lobbyLevelPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, lobbyLevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lobbyLevelPath_MetaData), NewProp_lobbyLevelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_mainMenuLevelPath = { "mainMenuLevelPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, mainMenuLevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainMenuLevelPath_MetaData), NewProp_mainMenuLevelPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGIS_Online_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGIS_Online, ipAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ipAddress_MetaData), NewProp_ipAddress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGIS_Online_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_serverName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_sessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_maxPlayersCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_levelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_lobbyLevelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_mainMenuLevelPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGIS_Online_Statics::NewProp_ipAddress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGIS_Online_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGIS_Online_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGIS_Online_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGIS_Online_Statics::ClassParams = {
	&UGIS_Online::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGIS_Online_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGIS_Online_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGIS_Online_Statics::Class_MetaDataParams), Z_Construct_UClass_UGIS_Online_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGIS_Online()
{
	if (!Z_Registration_Info_UClass_UGIS_Online.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGIS_Online.OuterSingleton, Z_Construct_UClass_UGIS_Online_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGIS_Online.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<UGIS_Online>()
{
	return UGIS_Online::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGIS_Online);
UGIS_Online::~UGIS_Online() {}
// End Class UGIS_Online

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerData::StaticStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps, TEXT("PlayerData"), &Z_Registration_Info_UScriptStruct_PlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerData), 2428120510U) },
		{ FSessionData::StaticStruct, Z_Construct_UScriptStruct_FSessionData_Statics::NewStructOps, TEXT("SessionData"), &Z_Registration_Info_UScriptStruct_SessionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionData), 2425850669U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGIS_Online, UGIS_Online::StaticClass, TEXT("UGIS_Online"), &Z_Registration_Info_UClass_UGIS_Online, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGIS_Online), 1188066296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_4125127296(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Online_GIS_Online_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
