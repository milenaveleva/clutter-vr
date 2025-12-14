// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkControllerVisualsRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkControllerVisualsRigComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkControllerVisualsRigComponent ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent;
UClass* UIsdkControllerVisualsRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerVisualsRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerVisualsRigComponent"),
			Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkControllerVisualsRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister()
{
	return UIsdkControllerVisualsRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerVisualsRigComponent\n * @brief Rig Component Visualizing and Tracking Controllers (abstract class)\n *\n * Holds logic pertaining to the visualization and tracking\n * of controllers (and any corresponding controller + hand visualization) while controllers are\n * the active tracked input (vs, say, hands).\n *\n * @see UIsdkTrackedDataSourceRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerVisualsRigComponent\n@brief Rig Component Visualizing and Tracking Controllers (abstract class)\n\nHolds logic pertaining to the visualization and tracking\nof controllers (and any corresponding controller + hand visualization) while controllers are\nthe active tracked input (vs, say, hands).\n\n@see UIsdkTrackedDataSourceRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMeshComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A skeletal mesh used to represent the game controller\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A skeletal mesh used to represent the game controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedHandMeshComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A skeletal mesh used to represent hands while holding a controller.  This mesh is driven\n// by an animations configured in-editor.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A skeletal mesh used to represent hands while holding a controller.  This mesh is driven\nby an animations configured in-editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseableHandMeshComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A skeletal mesh used to represent hands while holding a controller.  This mesh is driven by\n// runtime-generated hand pose data.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A skeletal mesh used to represent hands while holding a controller.  This mesh is driven by\nruntime-generated hand pose data." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerVisualsRigComponent constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimatedHandMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseableHandMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkControllerVisualsRigComponent constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerVisualsRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics

// ********** Begin Class UIsdkControllerVisualsRigComponent Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_ControllerMeshComponent = { "ControllerMeshComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerVisualsRigComponent, ControllerMeshComponent), Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerMeshComponent_MetaData), NewProp_ControllerMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_AnimatedHandMeshComponent = { "AnimatedHandMeshComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerVisualsRigComponent, AnimatedHandMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimatedHandMeshComponent_MetaData), NewProp_AnimatedHandMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_PoseableHandMeshComponent = { "PoseableHandMeshComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerVisualsRigComponent, PoseableHandMeshComponent), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseableHandMeshComponent_MetaData), NewProp_PoseableHandMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_ControllerMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_AnimatedHandMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::NewProp_PoseableHandMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkControllerVisualsRigComponent Property Definitions ********************
UObject* (*const Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::ClassParams = {
	&UIsdkControllerVisualsRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkControllerVisualsRigComponent::StaticRegisterNativesUIsdkControllerVisualsRigComponent()
{
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkControllerVisualsRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerVisualsRigComponent);
UIsdkControllerVisualsRigComponent::~UIsdkControllerVisualsRigComponent() {}
// ********** End Class UIsdkControllerVisualsRigComponent *****************************************

// ********** Begin Class UIsdkControllerVisualsRigComponentLeft ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft;
UClass* UIsdkControllerVisualsRigComponentLeft::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerVisualsRigComponentLeft;
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerVisualsRigComponentLeft"),
			Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.InnerSingleton,
			StaticRegisterNativesUIsdkControllerVisualsRigComponentLeft,
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
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_NoRegister()
{
	return UIsdkControllerVisualsRigComponentLeft::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerVisualsRigComponentLeft\n * @brief Rig Component Visualizing and Tracking Controllers for Left Handedness\n *\n * @see UIsdkControllerVisualsRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerVisualsRigComponentLeft\n@brief Rig Component Visualizing and Tracking Controllers for Left Handedness\n\n@see UIsdkControllerVisualsRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerVisualsRigComponentLeft constinit property declarations ***
// ********** End Class UIsdkControllerVisualsRigComponentLeft constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerVisualsRigComponentLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics
UObject* (*const Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkControllerVisualsRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::ClassParams = {
	&UIsdkControllerVisualsRigComponentLeft::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::Class_MetaDataParams)
};
void UIsdkControllerVisualsRigComponentLeft::StaticRegisterNativesUIsdkControllerVisualsRigComponentLeft()
{
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.OuterSingleton, Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerVisualsRigComponentLeft);
UIsdkControllerVisualsRigComponentLeft::~UIsdkControllerVisualsRigComponentLeft() {}
// ********** End Class UIsdkControllerVisualsRigComponentLeft *************************************

// ********** Begin Class UIsdkControllerVisualsRigComponentRight **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight;
UClass* UIsdkControllerVisualsRigComponentRight::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerVisualsRigComponentRight;
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerVisualsRigComponentRight"),
			Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.InnerSingleton,
			StaticRegisterNativesUIsdkControllerVisualsRigComponentRight,
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
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_NoRegister()
{
	return UIsdkControllerVisualsRigComponentRight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerVisualsRigComponentRight\n * @brief Rig Component Visualizing and Tracking Controllers for Right Handedness\n *\n * @see UIsdkControllerVisualsRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerVisualsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerVisualsRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerVisualsRigComponentRight\n@brief Rig Component Visualizing and Tracking Controllers for Right Handedness\n\n@see UIsdkControllerVisualsRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerVisualsRigComponentRight constinit property declarations **
// ********** End Class UIsdkControllerVisualsRigComponentRight constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerVisualsRigComponentRight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics
UObject* (*const Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkControllerVisualsRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::ClassParams = {
	&UIsdkControllerVisualsRigComponentRight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::Class_MetaDataParams)
};
void UIsdkControllerVisualsRigComponentRight::StaticRegisterNativesUIsdkControllerVisualsRigComponentRight()
{
}
UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.OuterSingleton, Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerVisualsRigComponentRight);
UIsdkControllerVisualsRigComponentRight::~UIsdkControllerVisualsRigComponentRight() {}
// ********** End Class UIsdkControllerVisualsRigComponentRight ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkControllerVisualsRigComponent, UIsdkControllerVisualsRigComponent::StaticClass, TEXT("UIsdkControllerVisualsRigComponent"), &Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerVisualsRigComponent), 4245455097U) },
		{ Z_Construct_UClass_UIsdkControllerVisualsRigComponentLeft, UIsdkControllerVisualsRigComponentLeft::StaticClass, TEXT("UIsdkControllerVisualsRigComponentLeft"), &Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerVisualsRigComponentLeft), 2828954788U) },
		{ Z_Construct_UClass_UIsdkControllerVisualsRigComponentRight, UIsdkControllerVisualsRigComponentRight::StaticClass, TEXT("UIsdkControllerVisualsRigComponentRight"), &Z_Registration_Info_UClass_UIsdkControllerVisualsRigComponentRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerVisualsRigComponentRight), 4008324588U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerVisualsRigComponent_h__Script_OculusInteractionPrebuilts_4193577882{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerVisualsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
