// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkHandVisualsRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandVisualsRigComponent() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSyntheticHand_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentRight();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandVisualsRigComponent *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent;
UClass* UIsdkHandVisualsRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkHandVisualsRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandVisualsRigComponent"),
			Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkHandVisualsRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister()
{
	return UIsdkHandVisualsRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkHandVisualsRigComponent\n * @brief Rig Component Visualizing and Tracking Hands (abstract class)\n *\n * Holds logic pertaining to the visualization of hands and tracking\n * of hands while hands are the active tracked input (vs, say, controllers).\n *\n * @see UIsdkTrackedDataSourceRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkHandVisualsRigComponent\n@brief Rig Component Visualizing and Tracking Hands (abstract class)\n\nHolds logic pertaining to the visualization of hands and tracking\nof hands while hands are the active tracked input (vs, say, controllers).\n\n@see UIsdkTrackedDataSourceRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyntheticHand_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A synthetic hand, which follows the tracked hand, but for which the positioning and posing may\n// be altered by interaction\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A synthetic hand, which follows the tracked hand, but for which the positioning and posing may\nbe altered by interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedHandVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visuals corresponding directly to the user's hand\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visuals corresponding directly to the user's hand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyntheticHandVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visuals corresponding to the user's hand, for which the positioning and posing may be altered\n// by interaction\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visuals corresponding to the user's hand, for which the positioning and posing may be altered\nby interaction" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandVisualsRigComponent constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SyntheticHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedHandVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SyntheticHandVisual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkHandVisualsRigComponent constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandVisualsRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics

// ********** Begin Class UIsdkHandVisualsRigComponent Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_SyntheticHand = { "SyntheticHand", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandVisualsRigComponent, SyntheticHand), Z_Construct_UClass_UIsdkSyntheticHand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyntheticHand_MetaData), NewProp_SyntheticHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_TrackedHandVisual = { "TrackedHandVisual", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandVisualsRigComponent, TrackedHandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedHandVisual_MetaData), NewProp_TrackedHandVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_SyntheticHandVisual = { "SyntheticHandVisual", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandVisualsRigComponent, SyntheticHandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyntheticHandVisual_MetaData), NewProp_SyntheticHandVisual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_SyntheticHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_TrackedHandVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::NewProp_SyntheticHandVisual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkHandVisualsRigComponent Property Definitions **************************
UObject* (*const Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::ClassParams = {
	&UIsdkHandVisualsRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkHandVisualsRigComponent::StaticRegisterNativesUIsdkHandVisualsRigComponent()
{
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkHandVisualsRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandVisualsRigComponent);
UIsdkHandVisualsRigComponent::~UIsdkHandVisualsRigComponent() {}
// ********** End Class UIsdkHandVisualsRigComponent ***********************************************

// ********** Begin Class UIsdkHandVisualsRigComponentLeft *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft;
UClass* UIsdkHandVisualsRigComponentLeft::GetPrivateStaticClass()
{
	using TClass = UIsdkHandVisualsRigComponentLeft;
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandVisualsRigComponentLeft"),
			Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.InnerSingleton,
			StaticRegisterNativesUIsdkHandVisualsRigComponentLeft,
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
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_NoRegister()
{
	return UIsdkHandVisualsRigComponentLeft::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkHandVisualsRigComponentLeft\n * @brief Rig Component Visualizing and Tracking Hands for Left Handedness\n *\n * @see UIsdkHandVisualsRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkHandVisualsRigComponentLeft\n@brief Rig Component Visualizing and Tracking Hands for Left Handedness\n\n@see UIsdkHandVisualsRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandVisualsRigComponentLeft constinit property declarations *********
// ********** End Class UIsdkHandVisualsRigComponentLeft constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandVisualsRigComponentLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics
UObject* (*const Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandVisualsRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::ClassParams = {
	&UIsdkHandVisualsRigComponentLeft::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::Class_MetaDataParams)
};
void UIsdkHandVisualsRigComponentLeft::StaticRegisterNativesUIsdkHandVisualsRigComponentLeft()
{
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft()
{
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.OuterSingleton, Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandVisualsRigComponentLeft);
UIsdkHandVisualsRigComponentLeft::~UIsdkHandVisualsRigComponentLeft() {}
// ********** End Class UIsdkHandVisualsRigComponentLeft *******************************************

// ********** Begin Class UIsdkHandVisualsRigComponentRight ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight;
UClass* UIsdkHandVisualsRigComponentRight::GetPrivateStaticClass()
{
	using TClass = UIsdkHandVisualsRigComponentRight;
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandVisualsRigComponentRight"),
			Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.InnerSingleton,
			StaticRegisterNativesUIsdkHandVisualsRigComponentRight,
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
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_NoRegister()
{
	return UIsdkHandVisualsRigComponentRight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkHandVisualsRigComponentRight\n * @brief Rig Component Visualizing and Tracking Hands for Right Handedness\n *\n * @see UIsdkHandVisualsRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkHandVisualsRigComponentRight\n@brief Rig Component Visualizing and Tracking Hands for Right Handedness\n\n@see UIsdkHandVisualsRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandVisualsRigComponentRight constinit property declarations ********
// ********** End Class UIsdkHandVisualsRigComponentRight constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandVisualsRigComponentRight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics
UObject* (*const Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandVisualsRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::ClassParams = {
	&UIsdkHandVisualsRigComponentRight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::Class_MetaDataParams)
};
void UIsdkHandVisualsRigComponentRight::StaticRegisterNativesUIsdkHandVisualsRigComponentRight()
{
}
UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponentRight()
{
	if (!Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.OuterSingleton, Z_Construct_UClass_UIsdkHandVisualsRigComponentRight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandVisualsRigComponentRight);
UIsdkHandVisualsRigComponentRight::~UIsdkHandVisualsRigComponentRight() {}
// ********** End Class UIsdkHandVisualsRigComponentRight ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandVisualsRigComponent, UIsdkHandVisualsRigComponent::StaticClass, TEXT("UIsdkHandVisualsRigComponent"), &Z_Registration_Info_UClass_UIsdkHandVisualsRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandVisualsRigComponent), 410747527U) },
		{ Z_Construct_UClass_UIsdkHandVisualsRigComponentLeft, UIsdkHandVisualsRigComponentLeft::StaticClass, TEXT("UIsdkHandVisualsRigComponentLeft"), &Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandVisualsRigComponentLeft), 1111449518U) },
		{ Z_Construct_UClass_UIsdkHandVisualsRigComponentRight, UIsdkHandVisualsRigComponentRight::StaticClass, TEXT("UIsdkHandVisualsRigComponentRight"), &Z_Registration_Info_UClass_UIsdkHandVisualsRigComponentRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandVisualsRigComponentRight), 3698572019U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandVisualsRigComponent_h__Script_OculusInteractionPrebuilts_3878226838{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
