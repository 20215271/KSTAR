// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMLine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KSTAR_ISMLine_generated_h
#error "ISMLine.generated.h already included, missing '#pragma once' in ISMLine.h"
#endif
#define KSTAR_ISMLine_generated_h

#define FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISMLine(); \
	friend struct Z_Construct_UClass_AISMLine_Statics; \
public: \
	DECLARE_CLASS(AISMLine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KSTAR"), NO_API) \
	DECLARE_SERIALIZER(AISMLine)


#define FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AISMLine(AISMLine&&); \
	AISMLine(const AISMLine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISMLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISMLine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AISMLine) \
	NO_API virtual ~AISMLine();


#define FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_12_PROLOG
#define FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSTAR_API UClass* StaticClass<class AISMLine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KSTAR_Source_KSTAR_Public_ISMLine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
