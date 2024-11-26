// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSTAR/Public/ISMLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMLine() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
KSTAR_API UClass* Z_Construct_UClass_AISMLine();
KSTAR_API UClass* Z_Construct_UClass_AISMLine_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSTAR();
// End Cross Module References

// Begin Class AISMLine
void AISMLine::StaticRegisterNativesAISMLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AISMLine);
UClass* Z_Construct_UClass_AISMLine_NoRegister()
{
	return AISMLine::StaticClass();
}
struct Z_Construct_UClass_AISMLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ISMLine.h" },
		{ "ModuleRelativePath", "Public/ISMLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMComponent_MetaData[] = {
		{ "Category", "ISMLine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ISMLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ISMLine" },
		{ "ModuleRelativePath", "Public/ISMLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "ISMLine" },
		{ "ModuleRelativePath", "Public/ISMLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[] = {
		{ "Category", "ISMLine" },
		{ "ModuleRelativePath", "Public/ISMLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AISMLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AISMLine_Statics::NewProp_HISMComponent = { "HISMComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMLine, HISMComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMComponent_MetaData), NewProp_HISMComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AISMLine_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMLine, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AISMLine_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMLine, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AISMLine_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISMLine, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineMaterial_MetaData), NewProp_LineMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AISMLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMLine_Statics::NewProp_HISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMLine_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMLine_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AISMLine_Statics::NewProp_LineMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISMLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AISMLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSTAR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AISMLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AISMLine_Statics::ClassParams = {
	&AISMLine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AISMLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AISMLine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AISMLine_Statics::Class_MetaDataParams), Z_Construct_UClass_AISMLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AISMLine()
{
	if (!Z_Registration_Info_UClass_AISMLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AISMLine.OuterSingleton, Z_Construct_UClass_AISMLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AISMLine.OuterSingleton;
}
template<> KSTAR_API UClass* StaticClass<AISMLine>()
{
	return AISMLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AISMLine);
AISMLine::~AISMLine() {}
// End Class AISMLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AISMLine, AISMLine::StaticClass, TEXT("AISMLine"), &Z_Registration_Info_UClass_AISMLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AISMLine), 2498475391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_1710133722(TEXT("/Script/KSTAR"),
	Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
