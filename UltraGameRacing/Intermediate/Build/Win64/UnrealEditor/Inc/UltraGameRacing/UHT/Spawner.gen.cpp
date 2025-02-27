// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/Spawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ASpawner();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class ASpawner
void ASpawner::StaticRegisterNativesASpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner);
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::StaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPE/Spawner.h" },
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_delayForRespawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentActorSpawned_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_offsetSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/GPE/Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_delayForRespawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentActorSpawned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offsetSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_delayForRespawn = { "delayForRespawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, delayForRespawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_delayForRespawn_MetaData), NewProp_delayForRespawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, currentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentTime_MetaData), NewProp_currentTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_actorToSpawn = { "actorToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, actorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorToSpawn_MetaData), NewProp_actorToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_currentActorSpawned = { "currentActorSpawned", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, currentActorSpawned), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentActorSpawned_MetaData), NewProp_currentActorSpawned_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_offsetSpawn = { "offsetSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, offsetSpawn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_offsetSpawn_MetaData), NewProp_offsetSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_delayForRespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_currentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_actorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_currentActorSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_offsetSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<ASpawner>()
{
	return ASpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// End Class ASpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 1410775353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_3798188176(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Spawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
