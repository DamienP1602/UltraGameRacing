// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltraGameRacing/Public/GPE/GreenShell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreenShell() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AGreenShell();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AGreenShell_NoRegister();
ULTRAGAMERACING_API UClass* Z_Construct_UClass_AItem();
UPackage* Z_Construct_UPackage__Script_UltraGameRacing();
// End Cross Module References

// Begin Class AGreenShell
void AGreenShell::StaticRegisterNativesAGreenShell()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreenShell);
UClass* Z_Construct_UClass_AGreenShell_NoRegister()
{
	return AGreenShell::StaticClass();
}
struct Z_Construct_UClass_AGreenShell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GPE/GreenShell.h" },
		{ "ModuleRelativePath", "Public/GPE/GreenShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "GreenShell" },
		{ "ModuleRelativePath", "Public/GPE/GreenShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "GreenShell" },
		{ "ModuleRelativePath", "Public/GPE/GreenShell.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_layersToDetect_MetaData[] = {
		{ "Category", "GreenShell" },
		{ "ModuleRelativePath", "Public/GPE/GreenShell.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_layersToDetect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_layersToDetect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreenShell>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreenShell_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreenShell, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreenShell_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreenShell, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGreenShell_Statics::NewProp_layersToDetect_Inner = { "layersToDetect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGreenShell_Statics::NewProp_layersToDetect = { "layersToDetect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreenShell, layersToDetect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_layersToDetect_MetaData), NewProp_layersToDetect_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGreenShell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreenShell_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreenShell_Statics::NewProp_rotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreenShell_Statics::NewProp_layersToDetect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreenShell_Statics::NewProp_layersToDetect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreenShell_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGreenShell_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_UltraGameRacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreenShell_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreenShell_Statics::ClassParams = {
	&AGreenShell::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGreenShell_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGreenShell_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreenShell_Statics::Class_MetaDataParams), Z_Construct_UClass_AGreenShell_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGreenShell()
{
	if (!Z_Registration_Info_UClass_AGreenShell.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGreenShell.OuterSingleton, Z_Construct_UClass_AGreenShell_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGreenShell.OuterSingleton;
}
template<> ULTRAGAMERACING_API UClass* StaticClass<AGreenShell>()
{
	return AGreenShell::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGreenShell);
AGreenShell::~AGreenShell() {}
// End Class AGreenShell

// Begin Registration
struct Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_GreenShell_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGreenShell, AGreenShell::StaticClass, TEXT("AGreenShell"), &Z_Registration_Info_UClass_AGreenShell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreenShell), 3268712686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_GreenShell_h_2355001723(TEXT("/Script/UltraGameRacing"),
	Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_GreenShell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UltraGameRacing_Source_UltraGameRacing_Public_GPE_GreenShell_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
