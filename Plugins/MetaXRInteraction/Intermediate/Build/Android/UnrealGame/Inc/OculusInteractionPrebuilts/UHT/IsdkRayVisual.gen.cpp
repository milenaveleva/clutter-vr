// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractorVisuals/IsdkRayVisual.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkRayVisual() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkRayVisual();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkRayVisual_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkRayVisual ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkRayVisual;
UClass* AIsdkRayVisual::GetPrivateStaticClass()
{
	using TClass = AIsdkRayVisual;
	if (!Z_Registration_Info_UClass_AIsdkRayVisual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkRayVisual"),
			Z_Registration_Info_UClass_AIsdkRayVisual.InnerSingleton,
			StaticRegisterNativesAIsdkRayVisual,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AIsdkRayVisual.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkRayVisual_NoRegister()
{
	return AIsdkRayVisual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkRayVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class AIsdkRayVisual\n * @brief Actor used for visualizing the ray cursor and pinch arrow\n *\n * Spawns a Ray Visual Component as a child component, which maintains the cursor and pinch arrow\n * subcomponents for visualizing the state of ray interactions\n * @see UIsdkRayVisualComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "IncludePath", "InteractorVisuals/IsdkRayVisual.h" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class AIsdkRayVisual\n@brief Actor used for visualizing the ray cursor and pinch arrow\n\nSpawns a Ray Visual Component as a child component, which maintains the cursor and pinch arrow\nsubcomponents for visualizing the state of ray interactions\n@see UIsdkRayVisualComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayVisualComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief The ray visual component created by this Actor when constructed\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The ray visual component created by this Actor when constructed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIsdkRayVisual constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayVisualComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIsdkRayVisual constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkRayVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIsdkRayVisual_Statics

// ********** Begin Class AIsdkRayVisual Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkRayVisual_Statics::NewProp_RayVisualComponent = { "RayVisualComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkRayVisual, RayVisualComponent), Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayVisualComponent_MetaData), NewProp_RayVisualComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkRayVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkRayVisual_Statics::NewProp_RayVisualComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkRayVisual_Statics::PropPointers) < 2048);
// ********** End Class AIsdkRayVisual Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AIsdkRayVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkRayVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkRayVisual_Statics::ClassParams = {
	&AIsdkRayVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkRayVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkRayVisual_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkRayVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkRayVisual_Statics::Class_MetaDataParams)
};
void AIsdkRayVisual::StaticRegisterNativesAIsdkRayVisual()
{
}
UClass* Z_Construct_UClass_AIsdkRayVisual()
{
	if (!Z_Registration_Info_UClass_AIsdkRayVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkRayVisual.OuterSingleton, Z_Construct_UClass_AIsdkRayVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkRayVisual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIsdkRayVisual);
AIsdkRayVisual::~AIsdkRayVisual() {}
// ********** End Class AIsdkRayVisual *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisual_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkRayVisual, AIsdkRayVisual::StaticClass, TEXT("AIsdkRayVisual"), &Z_Registration_Info_UClass_AIsdkRayVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkRayVisual), 2959820860U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisual_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisual_h__Script_OculusInteractionPrebuilts_1152572641{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisual_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisual_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
