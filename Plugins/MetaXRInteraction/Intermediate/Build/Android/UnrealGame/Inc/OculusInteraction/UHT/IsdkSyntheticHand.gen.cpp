// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkSyntheticHand.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkSyntheticHand() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSyntheticHand();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSyntheticHand_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkSyntheticHand *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkSyntheticHand;
UClass* UIsdkSyntheticHand::GetPrivateStaticClass()
{
	using TClass = UIsdkSyntheticHand;
	if (!Z_Registration_Info_UClass_UIsdkSyntheticHand.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkSyntheticHand"),
			Z_Registration_Info_UClass_UIsdkSyntheticHand.InnerSingleton,
			StaticRegisterNativesUIsdkSyntheticHand,
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
	return Z_Registration_Info_UClass_UIsdkSyntheticHand.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkSyntheticHand_NoRegister()
{
	return UIsdkSyntheticHand::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkSyntheticHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Hand Data Modifier that returns a HandDataSource driven by the API's Synthetic Hand */" },
#endif
		{ "DisplayName", "ISDK Synthetic Hand" },
		{ "IncludePath", "DataSources/IsdkSyntheticHand.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkSyntheticHand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand Data Modifier that returns a HandDataSource driven by the API's Synthetic Hand" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkSyntheticHand constinit property declarations ***********************
// ********** End Class UIsdkSyntheticHand constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkSyntheticHand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkSyntheticHand_Statics
UObject* (*const Z_Construct_UClass_UIsdkSyntheticHand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDataModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSyntheticHand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkSyntheticHand_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister, (int32)VTABLE_OFFSET(UIsdkSyntheticHand, IIsdkIRootPoseLocker), false },  // 3482934928
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkSyntheticHand_Statics::ClassParams = {
	&UIsdkSyntheticHand::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSyntheticHand_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkSyntheticHand_Statics::Class_MetaDataParams)
};
void UIsdkSyntheticHand::StaticRegisterNativesUIsdkSyntheticHand()
{
}
UClass* Z_Construct_UClass_UIsdkSyntheticHand()
{
	if (!Z_Registration_Info_UClass_UIsdkSyntheticHand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkSyntheticHand.OuterSingleton, Z_Construct_UClass_UIsdkSyntheticHand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkSyntheticHand.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkSyntheticHand);
UIsdkSyntheticHand::~UIsdkSyntheticHand() {}
// ********** End Class UIsdkSyntheticHand *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkSyntheticHand_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkSyntheticHand, UIsdkSyntheticHand::StaticClass, TEXT("UIsdkSyntheticHand"), &Z_Registration_Info_UClass_UIsdkSyntheticHand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkSyntheticHand), 2193381466U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkSyntheticHand_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkSyntheticHand_h__Script_OculusInteraction_1274311090{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkSyntheticHand_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkSyntheticHand_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
