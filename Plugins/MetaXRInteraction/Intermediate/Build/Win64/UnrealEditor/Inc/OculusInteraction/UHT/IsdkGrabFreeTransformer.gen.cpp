// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabFreeTransformer.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkGrabFreeTransformer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisConstraints();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPointDelta();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkGrabPointDelta ***********************************************
struct Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkGrabPointDelta); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkGrabPointDelta); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @struct FIsdkGrabPointDelta\n * @brief A struct containing the deltas (rotation and centroid offset) of a grab point, used by\n * GrabTransformers to track changes in grab heuristics.\n * @see UIsdkGrabFreeTransformer\n */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@struct FIsdkGrabPointDelta\n@brief A struct containing the deltas (rotation and centroid offset) of a grab point, used by\nGrabTransformers to track changes in grab heuristics.\n@see UIsdkGrabFreeTransformer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkGrabPointDelta constinit property declarations ***************
// ********** End ScriptStruct FIsdkGrabPointDelta constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabPointDelta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta;
class UScriptStruct* FIsdkGrabPointDelta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabPointDelta, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabPointDelta"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabPointDelta",
	nullptr,
	0,
	sizeof(FIsdkGrabPointDelta),
	alignof(FIsdkGrabPointDelta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPointDelta()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton);
}
// ********** End ScriptStruct FIsdkGrabPointDelta *************************************************

// ********** Begin ScriptStruct FIsdkGrabFreeTransformerConfig ************************************
struct Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkGrabFreeTransformerConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkGrabFreeTransformerConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @struct FIsdkGrabFreeTransformerConfig\n * @brief A struct defining how the a Grab Free Transformer should function, including axis\n * constraints and relative versus world translations.\n * @see UIsdkGrabFreeTransformer\n */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@struct FIsdkGrabFreeTransformerConfig\n@brief A struct defining how the a Grab Free Transformer should function, including axis\nconstraints and relative versus world translations.\n@see UIsdkGrabFreeTransformer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeTranslation_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this transformer should use relative translations (versus world)*/" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this transformer should use relative translations (versus world)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateConstraintAxes_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Constraints that should be applied to translation/location axes of this transformer*/" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constraints that should be applied to translation/location axes of this transformer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateConstraintAxes_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Constraints that should be applied to rotation axes of this transformer*/" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constraints that should be applied to rotation axes of this transformer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeScale_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not this transformer's scale is treated as relative */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this transformer's scale is treated as relative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleConstraint_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Constraints that should be applied to scale axes of this transformer*/" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constraints that should be applied to scale axes of this transformer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkGrabFreeTransformerConfig constinit property declarations ****
	static void NewProp_bUseRelativeTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslateConstraintAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotateConstraintAxes;
	static void NewProp_bUseRelativeScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkGrabFreeTransformerConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabFreeTransformerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig;
class UScriptStruct* FIsdkGrabFreeTransformerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabFreeTransformerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkGrabFreeTransformerConfig Property Definitions ***************
void Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation_SetBit(void* Obj)
{
	((FIsdkGrabFreeTransformerConfig*)Obj)->bUseRelativeTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation = { "bUseRelativeTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkGrabFreeTransformerConfig), &Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeTranslation_MetaData), NewProp_bUseRelativeTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_TranslateConstraintAxes = { "TranslateConstraintAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, TranslateConstraintAxes), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateConstraintAxes_MetaData), NewProp_TranslateConstraintAxes_MetaData) }; // 1970808006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_RotateConstraintAxes = { "RotateConstraintAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, RotateConstraintAxes), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateConstraintAxes_MetaData), NewProp_RotateConstraintAxes_MetaData) }; // 1970808006
void Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale_SetBit(void* Obj)
{
	((FIsdkGrabFreeTransformerConfig*)Obj)->bUseRelativeScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale = { "bUseRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkGrabFreeTransformerConfig), &Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeScale_MetaData), NewProp_bUseRelativeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_ScaleConstraint = { "ScaleConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, ScaleConstraint), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleConstraint_MetaData), NewProp_ScaleConstraint_MetaData) }; // 740878257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_TranslateConstraintAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_RotateConstraintAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_ScaleConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkGrabFreeTransformerConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabFreeTransformerConfig",
	Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers),
	sizeof(FIsdkGrabFreeTransformerConfig),
	alignof(FIsdkGrabFreeTransformerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton);
}
// ********** End ScriptStruct FIsdkGrabFreeTransformerConfig **************************************

// ********** Begin Class UIsdkGrabFreeTransformer Function GetGrabCount ***************************
struct Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics
{
	struct IsdkGrabFreeTransformer_eventGetGrabCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of grab points on this transformer */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of grab points on this transformer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrabCount constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrabCount constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrabCount Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabFreeTransformer_eventGetGrabCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers) < 2048);
// ********** End Function GetGrabCount Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabFreeTransformer, nullptr, "GetGrabCount", 	Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::IsdkGrabFreeTransformer_eventGetGrabCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::IsdkGrabFreeTransformer_eventGetGrabCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabFreeTransformer::execGetGrabCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGrabCount();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabFreeTransformer Function GetGrabCount *****************************

// ********** Begin Class UIsdkGrabFreeTransformer *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabFreeTransformer;
UClass* UIsdkGrabFreeTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabFreeTransformer;
	if (!Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkGrabFreeTransformer"),
			Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkGrabFreeTransformer,
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
	return Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister()
{
	return UIsdkGrabFreeTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkGrabFreeTransformer\n * @brief Scene component utilized for transforming a grabbable object\n *\n * Transforming including scale and axis constraints and physics considerations, with multiple\n * potential configurations\n * @see UIsdkTransformer\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "DisplayName", "ISDK Grab Free Transformer" },
		{ "IncludePath", "Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkGrabFreeTransformer\n@brief Scene component utilized for transforming a grabbable object\n\nTransforming including scale and axis constraints and physics considerations, with multiple\npotential configurations\n@see UIsdkTransformer\n@addtogroup InteractionSDK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current interactable state, driven by events */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current interactable state, driven by events" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkGrabFreeTransformer constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkGrabFreeTransformer constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGrabCount"), .Pointer = &UIsdkGrabFreeTransformer::execGetGrabCount },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount, "GetGrabCount" }, // 1900027138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabFreeTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics

// ********** Begin Class UIsdkGrabFreeTransformer Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabFreeTransformer, Config), Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2049313030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers) < 2048);
// ********** End Class UIsdkGrabFreeTransformer Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::ClassParams = {
	&UIsdkGrabFreeTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::Class_MetaDataParams)
};
void UIsdkGrabFreeTransformer::StaticRegisterNativesUIsdkGrabFreeTransformer()
{
	UClass* Class = UIsdkGrabFreeTransformer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton, Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkGrabFreeTransformer);
UIsdkGrabFreeTransformer::~UIsdkGrabFreeTransformer() {}
// ********** End Class UIsdkGrabFreeTransformer ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkGrabPointDelta::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::NewStructOps, TEXT("IsdkGrabPointDelta"),&Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabPointDelta), 3415943392U) },
		{ FIsdkGrabFreeTransformerConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewStructOps, TEXT("IsdkGrabFreeTransformerConfig"),&Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabFreeTransformerConfig), 2049313030U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabFreeTransformer, UIsdkGrabFreeTransformer::StaticClass, TEXT("UIsdkGrabFreeTransformer"), &Z_Registration_Info_UClass_UIsdkGrabFreeTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabFreeTransformer), 1687870865U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_2279342886{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
