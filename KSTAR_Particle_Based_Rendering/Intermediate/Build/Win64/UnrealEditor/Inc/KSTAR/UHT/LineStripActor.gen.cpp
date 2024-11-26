// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSTAR/Public/LineStripActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineStripActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
KSTAR_API UClass* Z_Construct_UClass_ALineStripActor();
KSTAR_API UClass* Z_Construct_UClass_ALineStripActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSTAR();
// End Cross Module References

// Begin Class ALineStripActor
void ALineStripActor::StaticRegisterNativesALineStripActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALineStripActor);
UClass* Z_Construct_UClass_ALineStripActor_NoRegister()
{
	return ALineStripActor::StaticClass();
}
struct Z_Construct_UClass_ALineStripActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LineStripActor.h" },
		{ "ModuleRelativePath", "Public/LineStripActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LineStripActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "LineStripActor" },
		{ "ModuleRelativePath", "Public/LineStripActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALineStripActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALineStripActor_Statics::NewProp_LineBatcher = { "LineBatcher", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALineStripActor, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineBatcher_MetaData), NewProp_LineBatcher_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALineStripActor_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALineStripActor, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALineStripActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineStripActor_Statics::NewProp_LineBatcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALineStripActor_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALineStripActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALineStripActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSTAR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALineStripActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALineStripActor_Statics::ClassParams = {
	&ALineStripActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALineStripActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALineStripActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALineStripActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALineStripActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALineStripActor()
{
	if (!Z_Registration_Info_UClass_ALineStripActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALineStripActor.OuterSingleton, Z_Construct_UClass_ALineStripActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALineStripActor.OuterSingleton;
}
template<> KSTAR_API UClass* StaticClass<ALineStripActor>()
{
	return ALineStripActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALineStripActor);
ALineStripActor::~ALineStripActor() {}
// End Class ALineStripActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_LineStripActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALineStripActor, ALineStripActor::StaticClass, TEXT("ALineStripActor"), &Z_Registration_Info_UClass_ALineStripActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALineStripActor), 26140283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_LineStripActor_h_3776060827(TEXT("/Script/KSTAR"),
	Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_LineStripActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KSTAR_Source_KSTAR_Public_LineStripActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
