// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkControllerPointerPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkControllerPointerPose() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerPointerPose();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkControllerPointerPose ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerPointerPose;
UClass* UIsdkControllerPointerPose::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerPointerPose;
	if (!Z_Registration_Info_UClass_UIsdkControllerPointerPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerPointerPose"),
			Z_Registration_Info_UClass_UIsdkControllerPointerPose.InnerSingleton,
			StaticRegisterNativesUIsdkControllerPointerPose,
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
	return Z_Registration_Info_UClass_UIsdkControllerPointerPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerPointerPose_NoRegister()
{
	return UIsdkControllerPointerPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerPointerPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ActorComponent that stores the current Pointer Pose, implements the IsdkIHandPointerPose\n * interface */" },
#endif
		{ "IncludePath", "DataSources/IsdkControllerPointerPose.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkControllerPointerPose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ActorComponent that stores the current Pointer Pose, implements the IsdkIHandPointerPose\n* interface" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerPointerPose constinit property declarations ***************
// ********** End Class UIsdkControllerPointerPose constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerPointerPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerPointerPose_Statics
UObject* (*const Z_Construct_UClass_UIsdkControllerPointerPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerPointerPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkControllerPointerPose_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkControllerPointerPose, IIsdkIHandPointerPose), false },  // 920478983
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerPointerPose_Statics::ClassParams = {
	&UIsdkControllerPointerPose::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerPointerPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerPointerPose_Statics::Class_MetaDataParams)
};
void UIsdkControllerPointerPose::StaticRegisterNativesUIsdkControllerPointerPose()
{
}
UClass* Z_Construct_UClass_UIsdkControllerPointerPose()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerPointerPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerPointerPose.OuterSingleton, Z_Construct_UClass_UIsdkControllerPointerPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerPointerPose.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerPointerPose);
UIsdkControllerPointerPose::~UIsdkControllerPointerPose() {}
// ********** End Class UIsdkControllerPointerPose *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkControllerPointerPose, UIsdkControllerPointerPose::StaticClass, TEXT("UIsdkControllerPointerPose"), &Z_Registration_Info_UClass_UIsdkControllerPointerPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerPointerPose), 3532952068U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h__Script_OculusInteraction_3000826960{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerPointerPose_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
