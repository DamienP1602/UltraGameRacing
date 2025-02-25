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
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UPlayerWidgets();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_UPlayerWidgets_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_kilometers_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Texts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_positionOnRace_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Texts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnNumber_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Texts" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemSprite_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Image" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allItemSprites_MetaData[] = {
		{ "Category", "Image|Sprites" },
		{ "ModuleRelativePath", "Interface/PlayerWidgets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_kilometers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_positionOnRace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_turnNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_itemSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_allItemSprites_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_allItemSprites;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidgets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_kilometers = { "kilometers", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidgets, kilometers), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_kilometers_MetaData), NewProp_kilometers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_positionOnRace = { "positionOnRace", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidgets, positionOnRace), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_positionOnRace_MetaData), NewProp_positionOnRace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_turnNumber = { "turnNumber", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidgets, turnNumber), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnNumber_MetaData), NewProp_turnNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_itemSprite = { "itemSprite", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidgets, itemSprite), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemSprite_MetaData), NewProp_itemSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_allItemSprites_Inner = { "allItemSprites", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_allItemSprites = { "allItemSprites", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidgets, allItemSprites), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allItemSprites_MetaData), NewProp_allItemSprites_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_kilometers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_positionOnRace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_turnNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_itemSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_allItemSprites_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidgets_Statics::NewProp_allItemSprites,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidgets_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UPlayerWidgets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidgets_Statics::PropPointers),
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
		{ Z_Construct_UClass_UPlayerWidgets, UPlayerWidgets::StaticClass, TEXT("UPlayerWidgets"), &Z_Registration_Info_UClass_UPlayerWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidgets), 2778467843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_1947327732(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PUEC1602_Documents_GitHub_UltraGameRacing_UltraGameRacing_Source_UltraGameRacing_Interface_PlayerWidgets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
