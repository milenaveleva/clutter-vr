// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkMockInteractable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkMockInteractable() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMockInteractable();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMockInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkMockInteractable ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkMockInteractable;
UClass* UIsdkMockInteractable::GetPrivateStaticClass()
{
	using TClass = UIsdkMockInteractable;
	if (!Z_Registration_Info_UClass_UIsdkMockInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkMockInteractable"),
			Z_Registration_Info_UClass_UIsdkMockInteractable.InnerSingleton,
			StaticRegisterNativesUIsdkMockInteractable,
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
	return Z_Registration_Info_UClass_UIsdkMockInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkMockInteractable_NoRegister()
{
	return UIsdkMockInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkMockInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkMockInteractable.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkMockInteractable.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkMockInteractable constinit property declarations ********************
// ********** End Class UIsdkMockInteractable constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkMockInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkMockInteractable_Statics
UObject* (*const Z_Construct_UClass_UIsdkMockInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkInteractableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMockInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkMockInteractable_Statics::ClassParams = {
	&UIsdkMockInteractable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMockInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkMockInteractable_Statics::Class_MetaDataParams)
};
void UIsdkMockInteractable::StaticRegisterNativesUIsdkMockInteractable()
{
}
UClass* Z_Construct_UClass_UIsdkMockInteractable()
{
	if (!Z_Registration_Info_UClass_UIsdkMockInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkMockInteractable.OuterSingleton, Z_Construct_UClass_UIsdkMockInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkMockInteractable.OuterSingleton;
}
UIsdkMockInteractable::UIsdkMockInteractable() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkMockInteractable);
UIsdkMockInteractable::~UIsdkMockInteractable() {}
// ********** End Class UIsdkMockInteractable ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkMockInteractable_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkMockInteractable, UIsdkMockInteractable::StaticClass, TEXT("UIsdkMockInteractable"), &Z_Registration_Info_UClass_UIsdkMockInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkMockInteractable), 2495222318U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkMockInteractable_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkMockInteractable_h__Script_OculusInteraction_2079449035{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkMockInteractable_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkMockInteractable_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
