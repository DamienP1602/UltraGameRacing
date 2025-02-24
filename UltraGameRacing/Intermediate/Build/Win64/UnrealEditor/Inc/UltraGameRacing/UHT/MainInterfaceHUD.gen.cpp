// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Interface/MainInterfaceHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainInterfaceHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AMainInterfaceHUD();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AMainInterfaceHUD_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UPlayerWidgets_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class AMainInterfaceHUD
void AMainInterfaceHUD::StaticRegisterNativesAMainInterfaceHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainInterfaceHUD);
UClass* Z_Construct_UClass_AMainInterfaceHUD_NoRegister()
{
	return AMainInterfaceHUD::StaticClass();
}
struct Z_Construct_UClass_AMainInterfaceHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Interface/MainInterfaceHUD.h" },
		{ "ModuleRelativePath", "Interface/MainInterfaceHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mainInterface_MetaData[] = {
		{ "Category", "MainInterfaceHUD" },
		{ "ModuleRelativePath", "Interface/MainInterfaceHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentMainInterface_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interface/MainInterfaceHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_mainInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentMainInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainInterfaceHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainInterfaceHUD_Statics::NewProp_mainInterface = { "mainInterface", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainInterfaceHUD, mainInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerWidgets_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mainInterface_MetaData), NewProp_mainInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainInterfaceHUD_Statics::NewProp_currentMainInterface = { "currentMainInterface", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainInterfaceHUD, currentMainInterface), Z_Construct_UClass_UPlayerWidgets_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentMainInterface_MetaData), NewProp_currentMainInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainInterfaceHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainInterfaceHUD_Statics::NewProp_mainInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainInterfaceHUD_Statics::NewProp_currentMainInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainInterfaceHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainInterfaceHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainInterfaceHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainInterfaceHUD_Statics::ClassParams = {
	&AMainInterfaceHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainInterfaceHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainInterfaceHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainInterfaceHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainInterfaceHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainInterfaceHUD()
{
	if (!Z_Registration_Info_UClass_AMainInterfaceHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainInterfaceHUD.OuterSingleton, Z_Construct_UClass_AMainInterfaceHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainInterfaceHUD.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<AMainInterfaceHUD>()
{
	return AMainInterfaceHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainInterfaceHUD);
AMainInterfaceHUD::~AMainInterfaceHUD() {}
// End Class AMainInterfaceHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_MainInterfaceHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainInterfaceHUD, AMainInterfaceHUD::StaticClass, TEXT("AMainInterfaceHUD"), &Z_Registration_Info_UClass_AMainInterfaceHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainInterfaceHUD), 1550128347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_MainInterfaceHUD_h_3961843576(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_MainInterfaceHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_MainInterfaceHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
