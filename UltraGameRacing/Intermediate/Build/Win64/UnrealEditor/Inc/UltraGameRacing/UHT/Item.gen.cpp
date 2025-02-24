// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class AItem
void AItem::StaticRegisterNativesAItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::StaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GPE/Item.h" },
		{ "ModuleRelativePath", "Public/GPE/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GPE/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<AItem>()
{
	return AItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
AItem::~AItem() {}
// End Class AItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 4243374689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Item_h_926758783(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
