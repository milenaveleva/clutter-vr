// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Pointable/IsdkIPointable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkIPointable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIPointable ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIPointable;
UClass* UIsdkIPointable::GetPrivateStaticClass()
{
	using TClass = UIsdkIPointable;
	if (!Z_Registration_Info_UClass_UIsdkIPointable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkIPointable"),
			Z_Registration_Info_UClass_UIsdkIPointable.InnerSingleton,
			StaticRegisterNativesUIsdkIPointable,
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
	return Z_Registration_Info_UClass_UIsdkIPointable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister()
{
	return UIsdkIPointable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIPointable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkIPointable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UIsdkIPointable constinit property declarations **********************
// ********** End Interface UIsdkIPointable constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIPointable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkIPointable_Statics
UObject* (*const Z_Construct_UClass_UIsdkIPointable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPointable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIPointable_Statics::ClassParams = {
	&UIsdkIPointable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPointable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIPointable_Statics::Class_MetaDataParams)
};
void UIsdkIPointable::StaticRegisterNativesUIsdkIPointable()
{
}
UClass* Z_Construct_UClass_UIsdkIPointable()
{
	if (!Z_Registration_Info_UClass_UIsdkIPointable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIPointable.OuterSingleton, Z_Construct_UClass_UIsdkIPointable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIPointable.OuterSingleton;
}
UIsdkIPointable::UIsdkIPointable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkIPointable);
// ********** End Interface UIsdkIPointable ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIPointable, UIsdkIPointable::StaticClass, TEXT("UIsdkIPointable"), &Z_Registration_Info_UClass_UIsdkIPointable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIPointable), 1385075321U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h__Script_OculusInteraction_1529573250{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkIPointable_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
