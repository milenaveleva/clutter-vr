// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkISurfacePatch.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkISurfacePatch() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkISurfacePatch ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkISurfacePatch;
UClass* UIsdkISurfacePatch::GetPrivateStaticClass()
{
	using TClass = UIsdkISurfacePatch;
	if (!Z_Registration_Info_UClass_UIsdkISurfacePatch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkISurfacePatch"),
			Z_Registration_Info_UClass_UIsdkISurfacePatch.InnerSingleton,
			StaticRegisterNativesUIsdkISurfacePatch,
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
	return Z_Registration_Info_UClass_UIsdkISurfacePatch.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister()
{
	return UIsdkISurfacePatch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkISurfacePatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkISurfacePatch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UIsdkISurfacePatch constinit property declarations *******************
// ********** End Interface UIsdkISurfacePatch constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkISurfacePatch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkISurfacePatch_Statics
UObject* (*const Z_Construct_UClass_UIsdkISurfacePatch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkISurfacePatch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkISurfacePatch_Statics::ClassParams = {
	&UIsdkISurfacePatch::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkISurfacePatch_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkISurfacePatch_Statics::Class_MetaDataParams)
};
void UIsdkISurfacePatch::StaticRegisterNativesUIsdkISurfacePatch()
{
}
UClass* Z_Construct_UClass_UIsdkISurfacePatch()
{
	if (!Z_Registration_Info_UClass_UIsdkISurfacePatch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkISurfacePatch.OuterSingleton, Z_Construct_UClass_UIsdkISurfacePatch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkISurfacePatch.OuterSingleton;
}
UIsdkISurfacePatch::UIsdkISurfacePatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkISurfacePatch);
// ********** End Interface UIsdkISurfacePatch *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkISurfacePatch, UIsdkISurfacePatch::StaticClass, TEXT("UIsdkISurfacePatch"), &Z_Registration_Info_UClass_UIsdkISurfacePatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkISurfacePatch), 460954893U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h__Script_OculusInteraction_4203965968{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkISurfacePatch_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
