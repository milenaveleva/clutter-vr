// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandFingerRecognizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandFingerRecognizer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerRecognizer_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandFingerRecognizer ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandFingerRecognizer;
UClass* UIsdkHandFingerRecognizer::GetPrivateStaticClass()
{
	using TClass = UIsdkHandFingerRecognizer;
	if (!Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandFingerRecognizer"),
			Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.InnerSingleton,
			StaticRegisterNativesUIsdkHandFingerRecognizer,
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
	return Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandFingerRecognizer_NoRegister()
{
	return UIsdkHandFingerRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Child of UIsdkHandDigitRecognizer, used specifically for recognizing fingers (non-thumb)\n */" },
#endif
		{ "IncludePath", "HandPoseDetection/IsdkHandFingerRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child of UIsdkHandDigitRecognizer, used specifically for recognizing fingers (non-thumb)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerType_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The finger (non-thumb) type to be assessed */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The finger (non-thumb) type to be assessed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalcType_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The type of finger (non-thumb) action/position this is set to recognize */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of finger (non-thumb) action/position this is set to recognize" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandFingerRecognizer constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CalcType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CalcType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkHandFingerRecognizer constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandFingerRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics

// ********** Begin Class UIsdkHandFingerRecognizer Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_FingerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_FingerType = { "FingerType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerRecognizer, FingerType), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerType_MetaData), NewProp_FingerType_MetaData) }; // 155703524
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_CalcType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_CalcType = { "CalcType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerRecognizer, CalcType), Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalcType_MetaData), NewProp_CalcType_MetaData) }; // 2857846514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_FingerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_FingerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_CalcType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::NewProp_CalcType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::PropPointers) < 2048);
// ********** End Class UIsdkHandFingerRecognizer Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDigitRecognizer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::ClassParams = {
	&UIsdkHandFingerRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::Class_MetaDataParams)
};
void UIsdkHandFingerRecognizer::StaticRegisterNativesUIsdkHandFingerRecognizer()
{
}
UClass* Z_Construct_UClass_UIsdkHandFingerRecognizer()
{
	if (!Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.OuterSingleton, Z_Construct_UClass_UIsdkHandFingerRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandFingerRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandFingerRecognizer);
UIsdkHandFingerRecognizer::~UIsdkHandFingerRecognizer() {}
// ********** End Class UIsdkHandFingerRecognizer **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerRecognizer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandFingerRecognizer, UIsdkHandFingerRecognizer::StaticClass, TEXT("UIsdkHandFingerRecognizer"), &Z_Registration_Info_UClass_UIsdkHandFingerRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandFingerRecognizer), 2539720010U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerRecognizer_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerRecognizer_h__Script_OculusInteraction_500291725{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerRecognizer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerRecognizer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
