// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkOneGrabTranslateTransformer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkOneGrabTranslateTransformer *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer;
UClass* UIsdkOneGrabTranslateTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkOneGrabTranslateTransformer;
	if (!Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkOneGrabTranslateTransformer"),
			Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkOneGrabTranslateTransformer,
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
	return Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_NoRegister()
{
	return UIsdkOneGrabTranslateTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkOneGrabTranslateTransformer\n * @brief Scene component utilized for transforming a grabbable object, modifying only its\n * translation and only when grabbed by one hand/controller\n * @see UIsdkTransformer\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "DisplayName", "ISDK One Grab Translate Transformer" },
		{ "IncludePath", "Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkOneGrabTranslateTransformer\n@brief Scene component utilized for transforming a grabbable object, modifying only its\ntranslation and only when grabbed by one hand/controller\n@see UIsdkTransformer\n@addtogroup InteractionSDK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeConstraint_MetaData[] = {
		{ "Category", "InteractionSDK|Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If true, use relative space when calculating constraints */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, use relative space when calculating constraints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionConstraint_MetaData[] = {
		{ "Category", "InteractionSDK|Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Struct containing potential constraint axes for translation */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabTranslateTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct containing potential constraint axes for translation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkOneGrabTranslateTransformer constinit property declarations *********
	static void NewProp_bIsRelativeConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkOneGrabTranslateTransformer constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkOneGrabTranslateTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics

// ********** Begin Class UIsdkOneGrabTranslateTransformer Property Definitions ********************
void Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint_SetBit(void* Obj)
{
	((UIsdkOneGrabTranslateTransformer*)Obj)->bIsRelativeConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint = { "bIsRelativeConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkOneGrabTranslateTransformer), &Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRelativeConstraint_MetaData), NewProp_bIsRelativeConstraint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_PositionConstraint = { "PositionConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkOneGrabTranslateTransformer, PositionConstraint), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionConstraint_MetaData), NewProp_PositionConstraint_MetaData) }; // 1970808006
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_bIsRelativeConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::NewProp_PositionConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers) < 2048);
// ********** End Class UIsdkOneGrabTranslateTransformer Property Definitions **********************
UObject* (*const Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::ClassParams = {
	&UIsdkOneGrabTranslateTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::Class_MetaDataParams)
};
void UIsdkOneGrabTranslateTransformer::StaticRegisterNativesUIsdkOneGrabTranslateTransformer()
{
}
UClass* Z_Construct_UClass_UIsdkOneGrabTranslateTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton, Z_Construct_UClass_UIsdkOneGrabTranslateTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkOneGrabTranslateTransformer);
UIsdkOneGrabTranslateTransformer::~UIsdkOneGrabTranslateTransformer() {}
// ********** End Class UIsdkOneGrabTranslateTransformer *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkOneGrabTranslateTransformer, UIsdkOneGrabTranslateTransformer::StaticClass, TEXT("UIsdkOneGrabTranslateTransformer"), &Z_Registration_Info_UClass_UIsdkOneGrabTranslateTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkOneGrabTranslateTransformer), 119477441U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_3796226529{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabTranslateTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
