// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/Mushroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMushroom() {}

// Begin Cross Module References
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AMushroom();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AMushroom_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class AMushroom
void AMushroom::StaticRegisterNativesAMushroom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMushroom);
UClass* Z_Construct_UClass_AMushroom_NoRegister()
{
	return AMushroom::StaticClass();
}
struct Z_Construct_UClass_AMushroom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPE/Mushroom.h" },
		{ "ModuleRelativePath", "Public/GPE/Mushroom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boostValue_MetaData[] = {
		{ "Category", "Mushroom" },
		{ "ModuleRelativePath", "Public/GPE/Mushroom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boostTime_MetaData[] = {
		{ "Category", "Mushroom" },
		{ "ModuleRelativePath", "Public/GPE/Mushroom.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_boostValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_boostTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMushroom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMushroom_Statics::NewProp_boostValue = { "boostValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMushroom, boostValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boostValue_MetaData), NewProp_boostValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMushroom_Statics::NewProp_boostTime = { "boostTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMushroom, boostTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boostTime_MetaData), NewProp_boostTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMushroom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMushroom_Statics::NewProp_boostValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMushroom_Statics::NewProp_boostTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMushroom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMushroom_Statics::ClassParams = {
	&AMushroom::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMushroom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroom_Statics::Class_MetaDataParams), Z_Construct_UClass_AMushroom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMushroom()
{
	if (!Z_Registration_Info_UClass_AMushroom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMushroom.OuterSingleton, Z_Construct_UClass_AMushroom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMushroom.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<AMushroom>()
{
	return AMushroom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMushroom);
AMushroom::~AMushroom() {}
// End Class AMushroom

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Mushroom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMushroom, AMushroom::StaticClass, TEXT("AMushroom"), &Z_Registration_Info_UClass_AMushroom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMushroom), 867221378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Mushroom_h_1980590378(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Mushroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Mushroom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
