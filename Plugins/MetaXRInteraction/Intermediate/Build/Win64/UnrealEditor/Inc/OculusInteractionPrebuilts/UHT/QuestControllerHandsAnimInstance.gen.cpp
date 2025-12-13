// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/QuestControllerHandsAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeQuestControllerHandsAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UQuestControllerAnimInstance();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UQuestControllerHandsAnimInstance();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UQuestControllerHandsAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestControllerHandsAnimInstance ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance;
UClass* UQuestControllerHandsAnimInstance::GetPrivateStaticClass()
{
	using TClass = UQuestControllerHandsAnimInstance;
	if (!Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("QuestControllerHandsAnimInstance"),
			Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.InnerSingleton,
			StaticRegisterNativesUQuestControllerHandsAnimInstance,
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
	return Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestControllerHandsAnimInstance_NoRegister()
{
	return UQuestControllerHandsAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UQuestControllerHandsAnimInstance extends UQuestControllerAnimInstance to provide\n * some basic values intended to drive the animation of hands paired with a controller\n * mesh.\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/QuestControllerHandsAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UQuestControllerHandsAnimInstance extends UQuestControllerAnimInstance to provide\nsome basic values intended to drive the animation of hands paired with a controller\nmesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed at which fingers and thumbs should interpolate toward the button\n// they are touching or pressing, toward a maximum of 1, and a minimum of 0.\n// A larger number interpolates faster.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed at which fingers and thumbs should interpolate toward the button\nthey are touching or pressing, toward a maximum of 1, and a minimum of 0.\nA larger number interpolates faster." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPressBlendTime_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of time to blend between a \"touched\" and \"down\" state for most\n// button press animations.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time to blend between a \"touched\" and \"down\" state for most\nbutton press animations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerDeadZone_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For axial inputs, the range after which we will consider the input \"touched\".\n// We use this value in conjunction with the corresponding \"touched\" boolean value.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For axial inputs, the range after which we will consider the input \"touched\".\nWe use this value in conjunction with the corresponding \"touched\" boolean value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AButtonThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the thumb is positioned over the A button.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the thumb is positioned over the A button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BButtonThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the thumb is positioned over the B button.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the thumb is positioned over the B button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XButtonThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the thumb is positioned over the X button.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the thumb is positioned over the X button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YButtonThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the thumb is positioned over the Y button.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the thumb is positioned over the Y button." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFrontTriggerAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Left Front Trigger.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Left Front Trigger." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFrontTriggerAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Right Front Trigger.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Right Front Trigger." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Left Thumbstick.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Left Thumbstick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Right Thumbstick.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Right Thumbstick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPanelThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Left Panel.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Left Panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPanelThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Right Panel.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Right Panel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMenuThumbAlpha_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A 0-1 value indicating how much the finger is positioned over the Left Menu Button.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/QuestControllerHandsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A 0-1 value indicating how much the finger is positioned over the Left Menu Button." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UQuestControllerHandsAnimInstance constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ButtonPressBlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerDeadZone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AButtonThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BButtonThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XButtonThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YButtonThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftFrontTriggerAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightFrontTriggerAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftThumbstickAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumbstickAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftPanelThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightPanelThumbAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftMenuThumbAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UQuestControllerHandsAnimInstance constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestControllerHandsAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics

// ********** Begin Class UQuestControllerHandsAnimInstance Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationSpeed_MetaData), NewProp_InterpolationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_ButtonPressBlendTime = { "ButtonPressBlendTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, ButtonPressBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonPressBlendTime_MetaData), NewProp_ButtonPressBlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_TriggerDeadZone = { "TriggerDeadZone", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, TriggerDeadZone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerDeadZone_MetaData), NewProp_TriggerDeadZone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_AButtonThumbAlpha = { "AButtonThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, AButtonThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AButtonThumbAlpha_MetaData), NewProp_AButtonThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_BButtonThumbAlpha = { "BButtonThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, BButtonThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BButtonThumbAlpha_MetaData), NewProp_BButtonThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_XButtonThumbAlpha = { "XButtonThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, XButtonThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XButtonThumbAlpha_MetaData), NewProp_XButtonThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_YButtonThumbAlpha = { "YButtonThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, YButtonThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YButtonThumbAlpha_MetaData), NewProp_YButtonThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftFrontTriggerAlpha = { "LeftFrontTriggerAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, LeftFrontTriggerAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFrontTriggerAlpha_MetaData), NewProp_LeftFrontTriggerAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightFrontTriggerAlpha = { "RightFrontTriggerAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, RightFrontTriggerAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFrontTriggerAlpha_MetaData), NewProp_RightFrontTriggerAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftThumbstickAlpha = { "LeftThumbstickAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, LeftThumbstickAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickAlpha_MetaData), NewProp_LeftThumbstickAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightThumbstickAlpha = { "RightThumbstickAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, RightThumbstickAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickAlpha_MetaData), NewProp_RightThumbstickAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftPanelThumbAlpha = { "LeftPanelThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, LeftPanelThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPanelThumbAlpha_MetaData), NewProp_LeftPanelThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightPanelThumbAlpha = { "RightPanelThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, RightPanelThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPanelThumbAlpha_MetaData), NewProp_RightPanelThumbAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftMenuThumbAlpha = { "LeftMenuThumbAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestControllerHandsAnimInstance, LeftMenuThumbAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMenuThumbAlpha_MetaData), NewProp_LeftMenuThumbAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_InterpolationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_ButtonPressBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_TriggerDeadZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_AButtonThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_BButtonThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_XButtonThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_YButtonThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftFrontTriggerAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightFrontTriggerAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftThumbstickAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightThumbstickAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftPanelThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_RightPanelThumbAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::NewProp_LeftMenuThumbAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UQuestControllerHandsAnimInstance Property Definitions *********************
UObject* (*const Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestControllerAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::ClassParams = {
	&UQuestControllerHandsAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::Class_MetaDataParams)
};
void UQuestControllerHandsAnimInstance::StaticRegisterNativesUQuestControllerHandsAnimInstance()
{
}
UClass* Z_Construct_UClass_UQuestControllerHandsAnimInstance()
{
	if (!Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.OuterSingleton, Z_Construct_UClass_UQuestControllerHandsAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance.OuterSingleton;
}
UQuestControllerHandsAnimInstance::UQuestControllerHandsAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UQuestControllerHandsAnimInstance);
UQuestControllerHandsAnimInstance::~UQuestControllerHandsAnimInstance() {}
// ********** End Class UQuestControllerHandsAnimInstance ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerHandsAnimInstance_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestControllerHandsAnimInstance, UQuestControllerHandsAnimInstance::StaticClass, TEXT("UQuestControllerHandsAnimInstance"), &Z_Registration_Info_UClass_UQuestControllerHandsAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestControllerHandsAnimInstance), 260889830U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerHandsAnimInstance_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerHandsAnimInstance_h__Script_OculusInteractionPrebuilts_2741496820{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerHandsAnimInstance_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Animation_QuestControllerHandsAnimInstance_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
