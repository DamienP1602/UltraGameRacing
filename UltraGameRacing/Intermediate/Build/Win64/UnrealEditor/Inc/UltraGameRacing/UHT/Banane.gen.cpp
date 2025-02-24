// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/Banane.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanane() {}

// Begin Cross Module References
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ABanane();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ABanane_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class ABanane
void ABanane::StaticRegisterNativesABanane()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanane);
UClass* Z_Construct_UClass_ABanane_NoRegister()
{
	return ABanane::StaticClass();
}
struct Z_Construct_UClass_ABanane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPE/Banane.h" },
		{ "ModuleRelativePath", "Public/GPE/Banane.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABanane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanane_Statics::ClassParams = {
	&ABanane::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanane_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanane()
{
	if (!Z_Registration_Info_UClass_ABanane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanane.OuterSingleton, Z_Construct_UClass_ABanane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanane.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<ABanane>()
{
	return ABanane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanane);
ABanane::~ABanane() {}
// End Class ABanane

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Banane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanane, ABanane::StaticClass, TEXT("ABanane"), &Z_Registration_Info_UClass_ABanane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanane), 1375218123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Banane_h_1151846226(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Banane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Banane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
