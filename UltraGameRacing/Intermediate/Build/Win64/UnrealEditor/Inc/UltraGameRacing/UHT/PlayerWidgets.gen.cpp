// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Interface/PlayerWidgets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidgets() {}

// Begin Cross Module References
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UPlayerWidgets();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UPlayerWidgets_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class UPlayerWidgets
void UPlayerWidgets::StaticRegisterNativesUPlayerWidgets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWidgets);
UClass* Z_Construct_UClass_UPlayerWidgets_NoRegister()
{
	return UPlayerWidgets::StaticClass();
}
struct Z_Construct_UClass_UPlayerWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interface/PlayerWidgets.h" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidgets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerWidgets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidgets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidgets_Statics::ClassParams = {
	&UPlayerWidgets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidgets_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidgets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidgets()
{
	if (!Z_Registration_Info_UClass_UPlayerWidgets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidgets.OuterSingleton, Z_Construct_UClass_UPlayerWidgets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidgets.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<UPlayerWidgets>()
{
	return UPlayerWidgets::StaticClass();
}
UPlayerWidgets::UPlayerWidgets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidgets);
UPlayerWidgets::~UPlayerWidgets() {}
// End Class UPlayerWidgets

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidgets, UPlayerWidgets::StaticClass, TEXT("UPlayerWidgets"), &Z_Registration_Info_UClass_UPlayerWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidgets), 1558588742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_4281359255(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
