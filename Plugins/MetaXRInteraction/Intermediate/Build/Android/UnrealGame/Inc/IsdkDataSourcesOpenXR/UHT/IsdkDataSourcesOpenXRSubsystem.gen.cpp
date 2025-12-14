// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkDataSourcesOpenXRSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkDataSourcesOpenXRSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkDataSourcesOpenXRSubsystem ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem;
UClass* UIsdkDataSourcesOpenXRSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkDataSourcesOpenXRSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkDataSourcesOpenXRSubsystem"),
			Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkDataSourcesOpenXRSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_NoRegister()
{
	return UIsdkDataSourcesOpenXRSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkDataSourcesOpenXRSubsystem\n * @brief Manages the setup and lifecycle of OpenXR data sources, such as hands, controllers, and\n * HMDs, within the Interaction SDK.\n *\n * This subsystem automates the creation and management of OpenXR data sources which are created\n * through the UIsdkTrackedDataSourceRigComponent, making it easier to integrate OpenXR tracking\n * into your project without needing to manually handle the setup.\n *\n * @see UIsdkFromOpenXRHandDataSource\n * @see UIsdkFromOpenXRControllerDataSource\n * @see UIsdkFromOpenXRHmdDataSource\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "IncludePath", "IsdkDataSourcesOpenXRSubsystem.h" },
		{ "ModuleRelativePath", "Public/IsdkDataSourcesOpenXRSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkDataSourcesOpenXRSubsystem\n@brief Manages the setup and lifecycle of OpenXR data sources, such as hands, controllers, and\nHMDs, within the Interaction SDK.\n\nThis subsystem automates the creation and management of OpenXR data sources which are created\nthrough the UIsdkTrackedDataSourceRigComponent, making it easier to integrate OpenXR tracking\ninto your project without needing to manually handle the setup.\n\n@see UIsdkFromOpenXRHandDataSource\n@see UIsdkFromOpenXRControllerDataSource\n@see UIsdkFromOpenXRHmdDataSource\n@addtogroup InteractionSDK" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkDataSourcesOpenXRSubsystem constinit property declarations **********
// ********** End Class UIsdkDataSourcesOpenXRSubsystem constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkDataSourcesOpenXRSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics
UObject* (*const Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, (int32)VTABLE_OFFSET(UIsdkDataSourcesOpenXRSubsystem, IIsdkITrackingDataSubsystem), false },  // 3054605332
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::ClassParams = {
	&UIsdkDataSourcesOpenXRSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::Class_MetaDataParams)
};
void UIsdkDataSourcesOpenXRSubsystem::StaticRegisterNativesUIsdkDataSourcesOpenXRSubsystem()
{
}
UClass* Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem.OuterSingleton;
}
UIsdkDataSourcesOpenXRSubsystem::UIsdkDataSourcesOpenXRSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkDataSourcesOpenXRSubsystem);
UIsdkDataSourcesOpenXRSubsystem::~UIsdkDataSourcesOpenXRSubsystem() {}
// ********** End Class UIsdkDataSourcesOpenXRSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_IsdkDataSourcesOpenXR_Public_IsdkDataSourcesOpenXRSubsystem_h__Script_IsdkDataSourcesOpenXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkDataSourcesOpenXRSubsystem, UIsdkDataSourcesOpenXRSubsystem::StaticClass, TEXT("UIsdkDataSourcesOpenXRSubsystem"), &Z_Registration_Info_UClass_UIsdkDataSourcesOpenXRSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkDataSourcesOpenXRSubsystem), 4004736205U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_IsdkDataSourcesOpenXR_Public_IsdkDataSourcesOpenXRSubsystem_h__Script_IsdkDataSourcesOpenXR_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_IsdkDataSourcesOpenXR_Public_IsdkDataSourcesOpenXRSubsystem_h__Script_IsdkDataSourcesOpenXR_489529341{
	TEXT("/Script/IsdkDataSourcesOpenXR"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_IsdkDataSourcesOpenXR_Public_IsdkDataSourcesOpenXRSubsystem_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_IsdkDataSourcesOpenXR_Public_IsdkDataSourcesOpenXRSubsystem_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
