// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/LootBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootBox() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ACollectable();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ALootBox();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_ALootBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class ALootBox
void ALootBox::StaticRegisterNativesALootBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALootBox);
UClass* Z_Construct_UClass_ALootBox_NoRegister()
{
	return ALootBox::StaticClass();
}
struct Z_Construct_UClass_ALootBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPE/LootBox.h" },
		{ "ModuleRelativePath", "Public/GPE/LootBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_allItems_MetaData[] = {
		{ "Category", "LootBox" },
		{ "ModuleRelativePath", "Public/GPE/LootBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_allItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_allItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootBox_Statics::NewProp_allItems_Inner = { "allItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALootBox_Statics::NewProp_allItems = { "allItems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootBox, allItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_allItems_MetaData), NewProp_allItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootBox_Statics::NewProp_allItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootBox_Statics::NewProp_allItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALootBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACollectable,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootBox_Statics::ClassParams = {
	&ALootBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALootBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALootBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ALootBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALootBox()
{
	if (!Z_Registration_Info_UClass_ALootBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootBox.OuterSingleton, Z_Construct_UClass_ALootBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALootBox.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<ALootBox>()
{
	return ALootBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALootBox);
ALootBox::~ALootBox() {}
// End Class ALootBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALootBox, ALootBox::StaticClass, TEXT("ALootBox"), &Z_Registration_Info_UClass_ALootBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootBox), 1026123517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_3629401474(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_LootBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
