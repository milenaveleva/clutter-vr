// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistEditorFeatures.h"

#ifdef BLUEPRINTASSIST_BlueprintAssistEditorFeatures_generated_h
#error "BlueprintAssistEditorFeatures.generated.h already included, missing '#pragma once' in BlueprintAssistEditorFeatures.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistEditorFeatures_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBAEditorFeatures ********************************************************
struct Z_Construct_UClass_UBAEditorFeatures_Statics;
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister();

#define FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBAEditorFeatures(); \
	friend struct ::Z_Construct_UClass_UBAEditorFeatures_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTASSIST_API UClass* ::Z_Construct_UClass_UBAEditorFeatures_NoRegister(); \
public: \
	DECLARE_CLASS2(UBAEditorFeatures, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), Z_Construct_UClass_UBAEditorFeatures_NoRegister) \
	DECLARE_SERIALIZER(UBAEditorFeatures)


#define FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBAEditorFeatures(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBAEditorFeatures(UBAEditorFeatures&&) = delete; \
	UBAEditorFeatures(const UBAEditorFeatures&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBAEditorFeatures); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBAEditorFeatures); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBAEditorFeatures)


#define FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_11_PROLOG
#define FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_14_INCLASS_NO_PURE_DECLS \
	FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBAEditorFeatures;

// ********** End Class UBAEditorFeatures **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
