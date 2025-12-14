// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Surfaces/IsdkISurface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkISurface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkISurface ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkISurface;
UClass* UIsdkISurface::GetPrivateStaticClass()
{
	using TClass = UIsdkISurface;
	if (!Z_Registration_Info_UClass_UIsdkISurface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkISurface"),
			Z_Registration_Info_UClass_UIsdkISurface.InnerSingleton,
			StaticRegisterNativesUIsdkISurface,
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
	return Z_Registration_Info_UClass_UIsdkISurface.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkISurface_NoRegister()
{
	return UIsdkISurface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkISurface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkISurface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UIsdkISurface constinit property declarations ************************
// ********** End Interface UIsdkISurface constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkISurface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkISurface_Statics
UObject* (*const Z_Construct_UClass_UIsdkISurface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkISurface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkISurface_Statics::ClassParams = {
	&UIsdkISurface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkISurface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkISurface_Statics::Class_MetaDataParams)
};
void UIsdkISurface::StaticRegisterNativesUIsdkISurface()
{
}
UClass* Z_Construct_UClass_UIsdkISurface()
{
	if (!Z_Registration_Info_UClass_UIsdkISurface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkISurface.OuterSingleton, Z_Construct_UClass_UIsdkISurface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkISurface.OuterSingleton;
}
UIsdkISurface::UIsdkISurface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkISurface);
// ********** End Interface UIsdkISurface **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkISurface, UIsdkISurface::StaticClass, TEXT("UIsdkISurface"), &Z_Registration_Info_UClass_UIsdkISurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkISurface), 3052452187U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h__Script_OculusInteraction_2311024798{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkISurface_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
