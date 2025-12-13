// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkHandPoseDataFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseDataFactory() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkHandPoseDataFactory();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkHandPoseDataFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandPoseDataFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseDataFactory;
UClass* UIsdkHandPoseDataFactory::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseDataFactory;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandPoseDataFactory"),
			Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseDataFactory,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseDataFactory_NoRegister()
{
	return UIsdkHandPoseDataFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n */" },
#endif
		{ "IncludePath", "IsdkHandPoseDataFactory.h" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseDataFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandPoseDataFactory constinit property declarations *****************
// ********** End Class UIsdkHandPoseDataFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseDataFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics
UObject* (*const Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::ClassParams = {
	&UIsdkHandPoseDataFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::Class_MetaDataParams)
};
void UIsdkHandPoseDataFactory::StaticRegisterNativesUIsdkHandPoseDataFactory()
{
}
UClass* Z_Construct_UClass_UIsdkHandPoseDataFactory()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseDataFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseDataFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandPoseDataFactory);
UIsdkHandPoseDataFactory::~UIsdkHandPoseDataFactory() {}
// ********** End Class UIsdkHandPoseDataFactory ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDataFactory_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseDataFactory, UIsdkHandPoseDataFactory::StaticClass, TEXT("UIsdkHandPoseDataFactory"), &Z_Registration_Info_UClass_UIsdkHandPoseDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseDataFactory), 3717090985U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDataFactory_h__Script_OculusInteractionEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDataFactory_h__Script_OculusInteractionEditor_1135890820{
	TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDataFactory_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDataFactory_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
