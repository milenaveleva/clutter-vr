// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkOneEuroFilterDataModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkOneEuroFilterDataModifier() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkOneEuroFilterDataModifier *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier;
UClass* UIsdkOneEuroFilterDataModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkOneEuroFilterDataModifier;
	if (!Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkOneEuroFilterDataModifier"),
			Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.InnerSingleton,
			StaticRegisterNativesUIsdkOneEuroFilterDataModifier,
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
	return Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister()
{
	return UIsdkOneEuroFilterDataModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Hand Data Modifier that returns a HandDataSource having a One Euro Filter applied to it */" },
#endif
		{ "DisplayName", "ISDK One Euro Filter" },
		{ "IncludePath", "DataSources/IsdkOneEuroFilterDataModifier.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkOneEuroFilterDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand Data Modifier that returns a HandDataSource having a One Euro Filter applied to it" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkOneEuroFilterDataModifier constinit property declarations ***********
// ********** End Class UIsdkOneEuroFilterDataModifier constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkOneEuroFilterDataModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics
UObject* (*const Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDataModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::ClassParams = {
	&UIsdkOneEuroFilterDataModifier::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::Class_MetaDataParams)
};
void UIsdkOneEuroFilterDataModifier::StaticRegisterNativesUIsdkOneEuroFilterDataModifier()
{
}
UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.OuterSingleton, Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkOneEuroFilterDataModifier);
UIsdkOneEuroFilterDataModifier::~UIsdkOneEuroFilterDataModifier() {}
// ********** End Class UIsdkOneEuroFilterDataModifier *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkOneEuroFilterDataModifier_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkOneEuroFilterDataModifier, UIsdkOneEuroFilterDataModifier::StaticClass, TEXT("UIsdkOneEuroFilterDataModifier"), &Z_Registration_Info_UClass_UIsdkOneEuroFilterDataModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkOneEuroFilterDataModifier), 235314063U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkOneEuroFilterDataModifier_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkOneEuroFilterDataModifier_h__Script_OculusInteraction_262435765{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkOneEuroFilterDataModifier_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkOneEuroFilterDataModifier_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
