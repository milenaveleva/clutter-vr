// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/IsdkIPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkIPose() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIPose ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIPose;
UClass* UIsdkIPose::GetPrivateStaticClass()
{
	using TClass = UIsdkIPose;
	if (!Z_Registration_Info_UClass_UIsdkIPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkIPose"),
			Z_Registration_Info_UClass_UIsdkIPose.InnerSingleton,
			StaticRegisterNativesUIsdkIPose,
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
	return Z_Registration_Info_UClass_UIsdkIPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIPose_NoRegister()
{
	return UIsdkIPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Pose" },
		{ "ModuleRelativePath", "Public/Input/IsdkIPose.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UIsdkIPose constinit property declarations ***************************
// ********** End Interface UIsdkIPose constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkIPose_Statics
UObject* (*const Z_Construct_UClass_UIsdkIPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIPose_Statics::ClassParams = {
	&UIsdkIPose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIPose_Statics::Class_MetaDataParams)
};
void UIsdkIPose::StaticRegisterNativesUIsdkIPose()
{
}
UClass* Z_Construct_UClass_UIsdkIPose()
{
	if (!Z_Registration_Info_UClass_UIsdkIPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIPose.OuterSingleton, Z_Construct_UClass_UIsdkIPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIPose.OuterSingleton;
}
UIsdkIPose::UIsdkIPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkIPose);
// ********** End Interface UIsdkIPose *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIPose, UIsdkIPose::StaticClass, TEXT("UIsdkIPose"), &Z_Registration_Info_UClass_UIsdkIPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIPose), 2989574844U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h__Script_OculusInteraction_145250669{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Input_IsdkIPose_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
