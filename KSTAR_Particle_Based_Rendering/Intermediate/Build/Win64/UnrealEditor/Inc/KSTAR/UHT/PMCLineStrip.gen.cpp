// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSTAR/Public/PMCLineStrip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMCLineStrip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
KSTAR_API UClass* Z_Construct_UClass_APMCLineStrip();
KSTAR_API UClass* Z_Construct_UClass_APMCLineStrip_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSTAR();
// End Cross Module References

// Begin Class APMCLineStrip
void APMCLineStrip::StaticRegisterNativesAPMCLineStrip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APMCLineStrip);
UClass* Z_Construct_UClass_APMCLineStrip_NoRegister()
{
	return APMCLineStrip::StaticClass();
}
struct Z_Construct_UClass_APMCLineStrip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PMCLineStrip.h" },
		{ "ModuleRelativePath", "Public/PMCLineStrip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "PMCLineStrip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PMCLineStrip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "PMCLineStrip" },
		{ "ModuleRelativePath", "Public/PMCLineStrip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Category", "PMCLineStrip" },
		{ "ModuleRelativePath", "Public/PMCLineStrip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APMCLineStrip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APMCLineStrip_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APMCLineStrip, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMesh_MetaData), NewProp_ProceduralMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APMCLineStrip_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APMCLineStrip, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APMCLineStrip_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APMCLineStrip, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APMCLineStrip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMCLineStrip_Statics::NewProp_ProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMCLineStrip_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMCLineStrip_Statics::NewProp_LineMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APMCLineStrip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APMCLineStrip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSTAR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APMCLineStrip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APMCLineStrip_Statics::ClassParams = {
	&APMCLineStrip::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APMCLineStrip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APMCLineStrip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APMCLineStrip_Statics::Class_MetaDataParams), Z_Construct_UClass_APMCLineStrip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APMCLineStrip()
{
	if (!Z_Registration_Info_UClass_APMCLineStrip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APMCLineStrip.OuterSingleton, Z_Construct_UClass_APMCLineStrip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APMCLineStrip.OuterSingleton;
}
template<> KSTAR_API UClass* StaticClass<APMCLineStrip>()
{
	return APMCLineStrip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APMCLineStrip);
APMCLineStrip::~APMCLineStrip() {}
// End Class APMCLineStrip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_PMCLineStrip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APMCLineStrip, APMCLineStrip::StaticClass, TEXT("APMCLineStrip"), &Z_Registration_Info_UClass_APMCLineStrip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APMCLineStrip), 1743513396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_PMCLineStrip_h_1854276213(TEXT("/Script/KSTAR"),
	Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_PMCLineStrip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_PMCLineStrip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
