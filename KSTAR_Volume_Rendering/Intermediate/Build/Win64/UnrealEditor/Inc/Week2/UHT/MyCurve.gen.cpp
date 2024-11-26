// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Week2/Public/MyCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Week2();
	WEEK2_API UClass* Z_Construct_UClass_AMyCurve();
	WEEK2_API UClass* Z_Construct_UClass_AMyCurve_NoRegister();
// End Cross Module References
	void AMyCurve::StaticRegisterNativesAMyCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCurve);
	UClass* Z_Construct_UClass_AMyCurve_NoRegister()
	{
		return AMyCurve::StaticClass();
	}
	struct Z_Construct_UClass_AMyCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Week2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCurve_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCurve.h" },
		{ "ModuleRelativePath", "Public/MyCurve.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCurve_Statics::NewProp_ColorCurve_MetaData[] = {
		{ "Category", "Curves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCurve_Statics::NewProp_ColorCurve = { "ColorCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCurve, ColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCurve_Statics::NewProp_ColorCurve_MetaData), Z_Construct_UClass_AMyCurve_Statics::NewProp_ColorCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCurve_Statics::NewProp_ColorCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCurve_Statics::ClassParams = {
		&AMyCurve::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCurve_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCurve_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCurve_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyCurve()
	{
		if (!Z_Registration_Info_UClass_AMyCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCurve.OuterSingleton, Z_Construct_UClass_AMyCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCurve.OuterSingleton;
	}
	template<> WEEK2_API UClass* StaticClass<AMyCurve>()
	{
		return AMyCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCurve);
	AMyCurve::~AMyCurve() {}
	struct Z_CompiledInDeferFile_FID_Week2_Source_Week2_Public_MyCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week2_Source_Week2_Public_MyCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCurve, AMyCurve::StaticClass, TEXT("AMyCurve"), &Z_Registration_Info_UClass_AMyCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCurve), 945749614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week2_Source_Week2_Public_MyCurve_h_2241562473(TEXT("/Script/Week2"),
		Z_CompiledInDeferFile_FID_Week2_Source_Week2_Public_MyCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week2_Source_Week2_Public_MyCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
