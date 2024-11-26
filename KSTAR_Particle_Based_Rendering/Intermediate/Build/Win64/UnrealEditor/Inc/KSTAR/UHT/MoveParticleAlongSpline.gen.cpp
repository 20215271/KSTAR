// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSTAR/Public/MoveParticleAlongSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveParticleAlongSpline() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
KSTAR_API UClass* Z_Construct_UClass_AMoveParticleAlongSpline();
KSTAR_API UClass* Z_Construct_UClass_AMoveParticleAlongSpline_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSTAR();
// End Cross Module References

// Begin Class AMoveParticleAlongSpline
void AMoveParticleAlongSpline::StaticRegisterNativesAMoveParticleAlongSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveParticleAlongSpline);
UClass* Z_Construct_UClass_AMoveParticleAlongSpline_NoRegister()
{
	return AMoveParticleAlongSpline::StaticClass();
}
struct Z_Construct_UClass_AMoveParticleAlongSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveParticleAlongSpline.h" },
		{ "ModuleRelativePath", "Public/MoveParticleAlongSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "MoveParticleAlongSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveParticleAlongSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "MoveParticleAlongSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveParticleAlongSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "MoveParticleAlongSpline" },
		{ "ModuleRelativePath", "Public/MoveParticleAlongSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "MoveParticleAlongSpline" },
		{ "ModuleRelativePath", "Public/MoveParticleAlongSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveParticleAlongSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveParticleAlongSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveParticleAlongSpline, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveParticleAlongSpline, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveParticleAlongSpline, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveParticleAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveParticleAlongSpline_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveParticleAlongSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveParticleAlongSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSTAR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveParticleAlongSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveParticleAlongSpline_Statics::ClassParams = {
	&AMoveParticleAlongSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoveParticleAlongSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveParticleAlongSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveParticleAlongSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveParticleAlongSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveParticleAlongSpline()
{
	if (!Z_Registration_Info_UClass_AMoveParticleAlongSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveParticleAlongSpline.OuterSingleton, Z_Construct_UClass_AMoveParticleAlongSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveParticleAlongSpline.OuterSingleton;
}
template<> KSTAR_API UClass* StaticClass<AMoveParticleAlongSpline>()
{
	return AMoveParticleAlongSpline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveParticleAlongSpline);
AMoveParticleAlongSpline::~AMoveParticleAlongSpline() {}
// End Class AMoveParticleAlongSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_MoveParticleAlongSpline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveParticleAlongSpline, AMoveParticleAlongSpline::StaticClass, TEXT("AMoveParticleAlongSpline"), &Z_Registration_Info_UClass_AMoveParticleAlongSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveParticleAlongSpline), 2992671171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_MoveParticleAlongSpline_h_1384333881(TEXT("/Script/KSTAR"),
	Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_MoveParticleAlongSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_MoveParticleAlongSpline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
