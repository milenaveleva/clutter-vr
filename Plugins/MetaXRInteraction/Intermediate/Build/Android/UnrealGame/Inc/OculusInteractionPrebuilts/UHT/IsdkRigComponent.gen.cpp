// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkRigComponent.h"
#include "GameplayTagContainer.h"
#include "Subsystem/IsdkWidgetSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkRigComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandBones();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkVirtualUserInfo();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UFunction* Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkRigComponentLifecycleEvent ***************************************
struct Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FIsdkRigComponentLifecycleEvent constinit property declarations *******
// ********** End Delegate FIsdkRigComponentLifecycleEvent constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts, nullptr, "IsdkRigComponentLifecycleEvent__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkRigComponentLifecycleEvent_DelegateWrapper(const FMulticastScriptDelegate& IsdkRigComponentLifecycleEvent)
{
	IsdkRigComponentLifecycleEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIsdkRigComponentLifecycleEvent *****************************************

// ********** Begin Class UIsdkRigComponent Function GetActiveRigModifiers *************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics
{
	struct IsdkRigComponent_eventGetActiveRigModifiers_Parms
	{
		TArray<UIsdkRigModifier*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns all of the active rig modifiers successfully spawned from RigModifiersToSpawn\n   * @return TArray<UIsdkRigModifier*>& All RigModifiers that this RigComponent spawned\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns all of the active rig modifiers successfully spawned from RigModifiersToSpawn\n* @return TArray<UIsdkRigModifier*>& All RigModifiers that this RigComponent spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveRigModifiers constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveRigModifiers constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveRigModifiers Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkRigModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetActiveRigModifiers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::PropPointers) < 2048);
// ********** End Function GetActiveRigModifiers Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetActiveRigModifiers", 	Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::IsdkRigComponent_eventGetActiveRigModifiers_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::IsdkRigComponent_eventGetActiveRigModifiers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetActiveRigModifiers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UIsdkRigModifier*>*)Z_Param__Result=P_THIS->GetActiveRigModifiers();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetActiveRigModifiers ***************************

// ********** Begin Class UIsdkRigComponent Function GetGrabber ************************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics
{
	struct IsdkRigComponent_eventGetGrabber_Parms
	{
		UIsdkGrabberComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to the Grabber attached to this component's\n   * Grab Interaction Rig Component.\n   * @return UIsdkGrabberComponent Grabber Component attached to this component's GrabInteraction\n   * component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to the Grabber attached to this component's\nGrab Interaction Rig Component.\n@return UIsdkGrabberComponent Grabber Component attached to this component's GrabInteraction\ncomponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrabber constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrabber constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrabber Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetGrabber_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::PropPointers) < 2048);
// ********** End Function GetGrabber Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetGrabber", 	Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::IsdkRigComponent_eventGetGrabber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::IsdkRigComponent_eventGetGrabber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetGrabber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetGrabber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetGrabber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabberComponent**)Z_Param__Result=P_THIS->GetGrabber();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetGrabber **************************************

// ********** Begin Class UIsdkRigComponent Function GetGrabInteraction ****************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics
{
	struct IsdkRigComponent_eventGetGrabInteraction_Parms
	{
		UIsdkGrabInteractionRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to this rig component's Grab Interaction Rig Component\n   * @return UIsdkGrabInteractionRigComponent Rig component used for handling grab interactions\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to this rig component's Grab Interaction Rig Component\n@return UIsdkGrabInteractionRigComponent Rig component used for handling grab interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrabInteraction constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrabInteraction constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrabInteraction Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetGrabInteraction_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::PropPointers) < 2048);
// ********** End Function GetGrabInteraction Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetGrabInteraction", 	Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::IsdkRigComponent_eventGetGrabInteraction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::IsdkRigComponent_eventGetGrabInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetGrabInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabInteractionRigComponent**)Z_Param__Result=P_THIS->GetGrabInteraction();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetGrabInteraction ******************************

// ********** Begin Class UIsdkRigComponent Function GetHmdDataSource ******************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics
{
	struct IsdkRigComponent_eventGetHmdDataSource_Parms
	{
		TScriptInterface<IIsdkIHmdDataSource> HmdDataSourceOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns reference to the HMD DataSource being utilized by this Rig Component\n   * @return bool True if HMD DataSource passed by reference is valid\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns reference to the HMD DataSource being utilized by this Rig Component\n* @return bool True if HMD DataSource passed by reference is valid" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHmdDataSource constinit property declarations **********************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSourceOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHmdDataSource constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHmdDataSource Property Definitions *********************************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_HmdDataSourceOut = { "HmdDataSourceOut", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetHmdDataSource_Parms, HmdDataSourceOut), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkRigComponent_eventGetHmdDataSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRigComponent_eventGetHmdDataSource_Parms), &Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_HmdDataSourceOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::PropPointers) < 2048);
// ********** End Function GetHmdDataSource Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetHmdDataSource", 	Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::IsdkRigComponent_eventGetHmdDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::IsdkRigComponent_eventGetHmdDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetHmdDataSource)
{
	P_GET_TINTERFACE_REF(IIsdkIHmdDataSource,Z_Param_Out_HmdDataSourceOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHmdDataSource(Z_Param_Out_HmdDataSourceOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetHmdDataSource ********************************

// ********** Begin Class UIsdkRigComponent Function GetInputActions *******************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics
{
	struct IsdkRigComponent_eventGetInputActions_Parms
	{
		UIsdkInputActionsRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to this rig component's Input Actions Rig Component\n   * @return UIsdkInputActionsRigComponent Rig component used for binding input actions\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to this rig component's Input Actions Rig Component\n@return UIsdkInputActionsRigComponent Rig component used for binding input actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputActions constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputActions constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputActions Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetInputActions_Parms, ReturnValue), Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::PropPointers) < 2048);
// ********** End Function GetInputActions Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetInputActions", 	Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::IsdkRigComponent_eventGetInputActions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::IsdkRigComponent_eventGetInputActions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetInputActions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetInputActions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetInputActions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkInputActionsRigComponent**)Z_Param__Result=P_THIS->GetInputActions();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetInputActions *********************************

// ********** Begin Class UIsdkRigComponent Function GetInteractionGroup ***************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics
{
	struct IsdkRigComponent_eventGetInteractionGroup_Parms
	{
		UIsdkInteractionGroupRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to this rig component's Interaction Group Rig Component\n   * @return UIsdkInteractionGroupRigComponent Rig component used for activating/deactivating groups\n   * of interactors\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to this rig component's Interaction Group Rig Component\n@return UIsdkInteractionGroupRigComponent Rig component used for activating/deactivating groups\nof interactors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteractionGroup constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteractionGroup constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteractionGroup Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetInteractionGroup_Parms, ReturnValue), Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::PropPointers) < 2048);
// ********** End Function GetInteractionGroup Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetInteractionGroup", 	Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::IsdkRigComponent_eventGetInteractionGroup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::IsdkRigComponent_eventGetInteractionGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetInteractionGroup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkInteractionGroupRigComponent**)Z_Param__Result=P_THIS->GetInteractionGroup();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetInteractionGroup *****************************

// ********** Begin Class UIsdkRigComponent Function GetPokeInteraction ****************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics
{
	struct IsdkRigComponent_eventGetPokeInteraction_Parms
	{
		UIsdkPokeInteractionRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to this rig component's Poke Interaction Rig Component\n   * @return UIsdkPokeInteractionRigComponent Rig component used for handling poke interactions\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to this rig component's Poke Interaction Rig Component\n@return UIsdkPokeInteractionRigComponent Rig component used for handling poke interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokeInteraction constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokeInteraction constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokeInteraction Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetPokeInteraction_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::PropPointers) < 2048);
// ********** End Function GetPokeInteraction Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetPokeInteraction", 	Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::IsdkRigComponent_eventGetPokeInteraction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::IsdkRigComponent_eventGetPokeInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetPokeInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractionRigComponent**)Z_Param__Result=P_THIS->GetPokeInteraction();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetPokeInteraction ******************************

// ********** Begin Class UIsdkRigComponent Function GetPokeInteractor *****************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics
{
	struct IsdkRigComponent_eventGetPokeInteractor_Parms
	{
		UIsdkPokeInteractor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to the PokeInteractor attached to this component's Poke Interaction\n   * Rig Component.\n   * @return UIsdkPokeInteractor PokeInteractor attached to this component's PokeInteraction\n   * component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to the PokeInteractor attached to this component's Poke Interaction\nRig Component.\n@return UIsdkPokeInteractor PokeInteractor attached to this component's PokeInteraction\ncomponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokeInteractor constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokeInteractor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokeInteractor Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetPokeInteractor_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::PropPointers) < 2048);
// ********** End Function GetPokeInteractor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetPokeInteractor", 	Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::IsdkRigComponent_eventGetPokeInteractor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::IsdkRigComponent_eventGetPokeInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetPokeInteractor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractor**)Z_Param__Result=P_THIS->GetPokeInteractor();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetPokeInteractor *******************************

// ********** Begin Class UIsdkRigComponent Function GetPokeLimiterVisual **************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics
{
	struct IsdkRigComponent_eventGetPokeLimiterVisual_Parms
	{
		UIsdkPokeLimiterVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to the Poke Limiter Visual attached to this component's Poke\n   * Interaction Rig Component. Now deprecated, developers are encouraged to use\n   * IsdkPokeLimiterRigModifier instead\n   * @return UIsdkPokeLimiterVisual Poke Limiter Visual attached to this component's PokeInteraction\n   * component\n   *\n   * Deprecated v79\n   */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Utilize IsdkPokeLimiterRigModifier instead" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to the Poke Limiter Visual attached to this component's Poke\nInteraction Rig Component. Now deprecated, developers are encouraged to use\nIsdkPokeLimiterRigModifier instead\n@return UIsdkPokeLimiterVisual Poke Limiter Visual attached to this component's PokeInteraction\ncomponent\n\nDeprecated v79" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPokeLimiterVisual constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPokeLimiterVisual constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPokeLimiterVisual Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetPokeLimiterVisual_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::PropPointers) < 2048);
// ********** End Function GetPokeLimiterVisual Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetPokeLimiterVisual", 	Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::IsdkRigComponent_eventGetPokeLimiterVisual_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::IsdkRigComponent_eventGetPokeLimiterVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetPokeLimiterVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeLimiterVisual**)Z_Param__Result=P_THIS->GetPokeLimiterVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetPokeLimiterVisual ****************************

// ********** Begin Class UIsdkRigComponent Function GetRayInteraction *****************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics
{
	struct IsdkRigComponent_eventGetRayInteraction_Parms
	{
		UIsdkRayInteractionRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to this rig component's Ray Interaction Rig Component\n   * @return UIsdkRayInteractionRigComponent Rig component used for handling ray interactions\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to this rig component's Ray Interaction Rig Component\n@return UIsdkRayInteractionRigComponent Rig component used for handling ray interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRayInteraction constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRayInteraction constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRayInteraction Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetRayInteraction_Parms, ReturnValue), Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::PropPointers) < 2048);
// ********** End Function GetRayInteraction Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetRayInteraction", 	Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::IsdkRigComponent_eventGetRayInteraction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::IsdkRigComponent_eventGetRayInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetRayInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkRayInteractionRigComponent**)Z_Param__Result=P_THIS->GetRayInteraction();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetRayInteraction *******************************

// ********** Begin Class UIsdkRigComponent Function GetRayInteractor ******************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics
{
	struct IsdkRigComponent_eventGetRayInteractor_Parms
	{
		UIsdkRayInteractor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns a pointer to the RayInteractor attached to this component's Ray Interaction Rig\n   * Component.\n   * @return UIsdkRayInteractor RayInteractor attached to this component's RayInteraction\n   * component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a pointer to the RayInteractor attached to this component's Ray Interaction Rig\nComponent.\n@return UIsdkRayInteractor RayInteractor attached to this component's RayInteraction\ncomponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRayInteractor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRayInteractor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRayInteractor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetRayInteractor_Parms, ReturnValue), Z_Construct_UClass_UIsdkRayInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::PropPointers) < 2048);
// ********** End Function GetRayInteractor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetRayInteractor", 	Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::IsdkRigComponent_eventGetRayInteractor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::IsdkRigComponent_eventGetRayInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetRayInteractor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkRayInteractor**)Z_Param__Result=P_THIS->GetRayInteractor();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetRayInteractor ********************************

// ********** Begin Class UIsdkRigComponent Function GetWidgetVirtualUser **************************
struct Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics
{
	struct IsdkRigComponent_eventGetWidgetVirtualUser_Parms
	{
		FIsdkVirtualUserInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns struct reference representing a virtual user for interacting with widgets\n   * @see UIsdkWidgetSubsystem\n   * @return FIsdkVirtualUserInfo Struct for abstracting different handed interactors as distinct\n   * widget users\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns struct reference representing a virtual user for interacting with widgets\n@see UIsdkWidgetSubsystem\n@return FIsdkVirtualUserInfo Struct for abstracting different handed interactors as distinct\nwidget users" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidgetVirtualUser constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidgetVirtualUser constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidgetVirtualUser Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventGetWidgetVirtualUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 746341394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::PropPointers) < 2048);
// ********** End Function GetWidgetVirtualUser Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "GetWidgetVirtualUser", 	Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::IsdkRigComponent_eventGetWidgetVirtualUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::IsdkRigComponent_eventGetWidgetVirtualUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execGetWidgetVirtualUser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkVirtualUserInfo*)Z_Param__Result=P_THIS->GetWidgetVirtualUser();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function GetWidgetVirtualUser ****************************

// ********** Begin Class UIsdkRigComponent Function HandleVisualsDataSourcesCreatedEvent **********
struct Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Updates all component data sources and broadcasts that they are ready (DataSourcesReady\n   * delegate)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Updates all component data sources and broadcasts that they are ready (DataSourcesReady\ndelegate)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HandleVisualsDataSourcesCreatedEvent constinit property declarations **
// ********** End Function HandleVisualsDataSourcesCreatedEvent constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "HandleVisualsDataSourcesCreatedEvent", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execHandleVisualsDataSourcesCreatedEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleVisualsDataSourcesCreatedEvent();
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function HandleVisualsDataSourcesCreatedEvent ************

// ********** Begin Class UIsdkRigComponent Function SetWidgetVirtualUser **************************
struct Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics
{
	struct IsdkRigComponent_eventSetWidgetVirtualUser_Parms
	{
		FIsdkVirtualUserInfo InWidgetVirtualUser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Sets a virtual user info for interacting with widgets\n   * @see UIsdkWidgetSubsystem\n   * @param InWidgetVirtualUser the FIsdkVirtualUserInfo to utilize for abstracting different handed\n   * interactors as distinct widget users\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets a virtual user info for interacting with widgets\n@see UIsdkWidgetSubsystem\n@param InWidgetVirtualUser the FIsdkVirtualUserInfo to utilize for abstracting different handed\ninteractors as distinct widget users" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetVirtualUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWidgetVirtualUser constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWidgetVirtualUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWidgetVirtualUser constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWidgetVirtualUser Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::NewProp_InWidgetVirtualUser = { "InWidgetVirtualUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigComponent_eventSetWidgetVirtualUser_Parms, InWidgetVirtualUser), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetVirtualUser_MetaData), NewProp_InWidgetVirtualUser_MetaData) }; // 746341394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::NewProp_InWidgetVirtualUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::PropPointers) < 2048);
// ********** End Function SetWidgetVirtualUser Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigComponent, nullptr, "SetWidgetVirtualUser", 	Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::IsdkRigComponent_eventSetWidgetVirtualUser_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::IsdkRigComponent_eventSetWidgetVirtualUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigComponent::execSetWidgetVirtualUser)
{
	P_GET_STRUCT_REF(FIsdkVirtualUserInfo,Z_Param_Out_InWidgetVirtualUser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetVirtualUser(Z_Param_Out_InWidgetVirtualUser);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigComponent Function SetWidgetVirtualUser ****************************

// ********** Begin Class UIsdkRigComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRigComponent;
UClass* UIsdkRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkRigComponent"),
			Z_Registration_Info_UClass_UIsdkRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister()
{
	return UIsdkRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkRigComponent\n * @brief Abstract base class for initializing interaction components\n *\n * Abstract base class used to initialize the base components necessary\n * for interaction.  It also provides an interface for interactors to get input from controllers\n * hands, agnostic of which is actively being used.\n * @addtogroup InteractionSDKPrebuiltsPrebuilts\n */" },
#endif
		{ "DisplayName", "ISDK Rig Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkRigComponent\n@brief Abstract base class for initializing interaction components\n\nAbstract base class used to initialize the base components necessary\nfor interaction.  It also provides an interface for interactors to get input from controllers\nhands, agnostic of which is actively being used.\n@addtogroup InteractionSDKPrebuiltsPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourcesReady_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * DataSourcesReady is broadcast when HMD and hand / controller data are valid and ready to be\n   * used\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* DataSourcesReady is broadcast when HMD and hand / controller data are valid and ready to be\n* used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindInputActions_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * When true, during BeginPlay this actor will bind the configured input actions to the\n   * PlayerController at index 0.\n   * If false, a manual call to BindInputActionEvents must be made to bind the input actions.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, during BeginPlay this actor will bind the configured input actions to the\nPlayerController at index 0.\nIf false, a manual call to BindInputActionEvents must be made to bind the input actions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Handedness indicates which hand this rig component belongs to\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handedness indicates which hand this rig component belongs to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayInteractorSocket_MetaData[] = {
		{ "Category", "InteractionSDK|Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * RayInteractorSocket indicates which bone the ray interactor will attach to on either the\n   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RayInteractorSocket indicates which bone the ray interactor will attach to on either the\nsynthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractorSocket_MetaData[] = {
		{ "Category", "InteractionSDK|Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * PokeInteractorSocket indicates which bone the poke interactor will attach to on either the\n   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PokeInteractorSocket indicates which bone the poke interactor will attach to on either the\nsynthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabberSocket_MetaData[] = {
		{ "Category", "InteractionSDK|Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * GrabberSocket indicates which bone the grabber component will attach to on either the\n   * synthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GrabberSocket indicates which bone the grabber component will attach to on either the\nsynthetic hand mesh (if using hands) or on the poseable hand mesh (if using controller hands)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigModifiersToSpawn_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All Rig Modifiers that this Rig Component should spawn and initialize */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All Rig Modifiers that this Rig Component should spawn and initialize" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayInteraction_MetaData[] = {
		{ "BlueprintGetter", "GetRayInteraction" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * RayInteraction is a reference to this rig component's RayInteractionRigComponent, which binds\n   * hand and controller input to ray interactions\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RayInteraction is a reference to this rig component's RayInteractionRigComponent, which binds\nhand and controller input to ray interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteraction_MetaData[] = {
		{ "BlueprintGetter", "GetPokeInteraction" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * PokeInteraction is a reference to this rig component's PokeInteractionRigComponent, which binds\n   * hand and controller input to poke interactions\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PokeInteraction is a reference to this rig component's PokeInteractionRigComponent, which binds\nhand and controller input to poke interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabInteraction_MetaData[] = {
		{ "BlueprintGetter", "GetGrabInteraction" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * GrabInteraction is a reference to this rig component's GrabInteractionRigComponent, which binds\n   * hand and controller input to grab interactions\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GrabInteraction is a reference to this rig component's GrabInteractionRigComponent, which binds\nhand and controller input to grab interactions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "BlueprintGetter", "GetInputActions" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * InputActions is a reference to this rig component's InputActionsRigComponent, which is used\n   * to store input actions used for interaction\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InputActions is a reference to this rig component's InputActionsRigComponent, which is used\nto store input actions used for interaction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionGroup_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionGroup" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * InteractionGroup is a reference to this rig component's InteractionGroupComponent, which is\n   * used to help drive which interactors are enabled and disabled.\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InteractionGroup is a reference to this rig component's InteractionGroupComponent, which is\nused to help drive which interactors are enabled and disabled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetVirtualUser_MetaData[] = {
		{ "BlueprintGetter", "GetWidgetVirtualUser" },
		{ "BlueprintSetter", "SetWidgetVirtualUser" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * WidgetVirtualUser is used with UI interactions to determine which hand is interacting with\n   * a widget.\n   */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WidgetVirtualUser is used with UI interactions to determine which hand is interacting with\na widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRigModifiers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * All of the rig successfully modifiers spawned by this rig component\n   * @see UIsdkRigComponent#GetActiveRigModifiers\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All of the rig successfully modifiers spawned by this rig component\n@see UIsdkRigComponent#GetActiveRigModifiers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HmdDataSource_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * The HMD data source used for propagating data to this rig component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The HMD data source used for propagating data to this rig component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Gameplay Tag container for this rig component, used in propagating tags to children components\n   * for interaction queries\n   * @see UIsdkRigComponent#GetInteractionTags\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Tag container for this rig component, used in propagating tags to children components\nfor interaction queries\n@see UIsdkRigComponent#GetInteractionTags" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkRigComponent constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DataSourcesReady;
	static void NewProp_bAutoBindInputActions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindInputActions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RayInteractorSocket_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RayInteractorSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PokeInteractorSocket_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PokeInteractorSocket;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrabberSocket_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrabberSocket;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RigModifiersToSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RigModifiersToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabInteraction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetVirtualUser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveRigModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveRigModifiers;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkRigComponent constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetActiveRigModifiers"), .Pointer = &UIsdkRigComponent::execGetActiveRigModifiers },
		{ .NameUTF8 = UTF8TEXT("GetGrabber"), .Pointer = &UIsdkRigComponent::execGetGrabber },
		{ .NameUTF8 = UTF8TEXT("GetGrabInteraction"), .Pointer = &UIsdkRigComponent::execGetGrabInteraction },
		{ .NameUTF8 = UTF8TEXT("GetHmdDataSource"), .Pointer = &UIsdkRigComponent::execGetHmdDataSource },
		{ .NameUTF8 = UTF8TEXT("GetInputActions"), .Pointer = &UIsdkRigComponent::execGetInputActions },
		{ .NameUTF8 = UTF8TEXT("GetInteractionGroup"), .Pointer = &UIsdkRigComponent::execGetInteractionGroup },
		{ .NameUTF8 = UTF8TEXT("GetPokeInteraction"), .Pointer = &UIsdkRigComponent::execGetPokeInteraction },
		{ .NameUTF8 = UTF8TEXT("GetPokeInteractor"), .Pointer = &UIsdkRigComponent::execGetPokeInteractor },
		{ .NameUTF8 = UTF8TEXT("GetPokeLimiterVisual"), .Pointer = &UIsdkRigComponent::execGetPokeLimiterVisual },
		{ .NameUTF8 = UTF8TEXT("GetRayInteraction"), .Pointer = &UIsdkRigComponent::execGetRayInteraction },
		{ .NameUTF8 = UTF8TEXT("GetRayInteractor"), .Pointer = &UIsdkRigComponent::execGetRayInteractor },
		{ .NameUTF8 = UTF8TEXT("GetWidgetVirtualUser"), .Pointer = &UIsdkRigComponent::execGetWidgetVirtualUser },
		{ .NameUTF8 = UTF8TEXT("HandleVisualsDataSourcesCreatedEvent"), .Pointer = &UIsdkRigComponent::execHandleVisualsDataSourcesCreatedEvent },
		{ .NameUTF8 = UTF8TEXT("SetWidgetVirtualUser"), .Pointer = &UIsdkRigComponent::execSetWidgetVirtualUser },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetActiveRigModifiers, "GetActiveRigModifiers" }, // 1722114331
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetGrabber, "GetGrabber" }, // 1886165821
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetGrabInteraction, "GetGrabInteraction" }, // 2866147302
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetHmdDataSource, "GetHmdDataSource" }, // 1612232396
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetInputActions, "GetInputActions" }, // 4162160145
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetInteractionGroup, "GetInteractionGroup" }, // 2249259418
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteraction, "GetPokeInteraction" }, // 1134141068
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetPokeInteractor, "GetPokeInteractor" }, // 623440998
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetPokeLimiterVisual, "GetPokeLimiterVisual" }, // 938276704
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetRayInteraction, "GetRayInteraction" }, // 2470065806
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetRayInteractor, "GetRayInteractor" }, // 3800521311
		{ &Z_Construct_UFunction_UIsdkRigComponent_GetWidgetVirtualUser, "GetWidgetVirtualUser" }, // 65820230
		{ &Z_Construct_UFunction_UIsdkRigComponent_HandleVisualsDataSourcesCreatedEvent, "HandleVisualsDataSourcesCreatedEvent" }, // 222861173
		{ &Z_Construct_UFunction_UIsdkRigComponent_SetWidgetVirtualUser, "SetWidgetVirtualUser" }, // 3523439786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkRigComponent_Statics

// ********** Begin Class UIsdkRigComponent Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_DataSourcesReady = { "DataSourcesReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, DataSourcesReady), Z_Construct_UDelegateFunction_OculusInteractionPrebuilts_IsdkRigComponentLifecycleEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourcesReady_MetaData), NewProp_DataSourcesReady_MetaData) }; // 1502786340
void Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_bAutoBindInputActions_SetBit(void* Obj)
{
	((UIsdkRigComponent*)Obj)->bAutoBindInputActions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_bAutoBindInputActions = { "bAutoBindInputActions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRigComponent), &Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_bAutoBindInputActions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBindInputActions_MetaData), NewProp_bAutoBindInputActions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 2143392285
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteractorSocket_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteractorSocket = { "RayInteractorSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, RayInteractorSocket), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayInteractorSocket_MetaData), NewProp_RayInteractorSocket_MetaData) }; // 3097577295
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteractorSocket_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteractorSocket = { "PokeInteractorSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, PokeInteractorSocket), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractorSocket_MetaData), NewProp_PokeInteractorSocket_MetaData) }; // 3097577295
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabberSocket_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabberSocket = { "GrabberSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, GrabberSocket), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabberSocket_MetaData), NewProp_GrabberSocket_MetaData) }; // 3097577295
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RigModifiersToSpawn_Inner = { "RigModifiersToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UIsdkRigModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RigModifiersToSpawn = { "RigModifiersToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, RigModifiersToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigModifiersToSpawn_MetaData), NewProp_RigModifiersToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteraction = { "RayInteraction", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, RayInteraction), Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayInteraction_MetaData), NewProp_RayInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteraction = { "PokeInteraction", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, PokeInteraction), Z_Construct_UClass_UIsdkPokeInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteraction_MetaData), NewProp_PokeInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabInteraction = { "GrabInteraction", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, GrabInteraction), Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabInteraction_MetaData), NewProp_GrabInteraction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, InputActions), Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InteractionGroup = { "InteractionGroup", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, InteractionGroup), Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionGroup_MetaData), NewProp_InteractionGroup_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_WidgetVirtualUser = { "WidgetVirtualUser", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, WidgetVirtualUser), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetVirtualUser_MetaData), NewProp_WidgetVirtualUser_MetaData) }; // 746341394
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_ActiveRigModifiers_Inner = { "ActiveRigModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkRigModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_ActiveRigModifiers = { "ActiveRigModifiers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, ActiveRigModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRigModifiers_MetaData), NewProp_ActiveRigModifiers_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_HmdDataSource = { "HmdDataSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, HmdDataSource), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HmdDataSource_MetaData), NewProp_HmdDataSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InteractionTags = { "InteractionTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigComponent, InteractionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTags_MetaData), NewProp_InteractionTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_DataSourcesReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_bAutoBindInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteractorSocket_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteractorSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteractorSocket_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteractorSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabberSocket_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabberSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RigModifiersToSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RigModifiersToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_RayInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_PokeInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_GrabInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InteractionGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_WidgetVirtualUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_ActiveRigModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_ActiveRigModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_HmdDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigComponent_Statics::NewProp_InteractionTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkRigComponent Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UIsdkRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRigComponent_Statics::ClassParams = {
	&UIsdkRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkRigComponent::StaticRegisterNativesUIsdkRigComponent()
{
	UClass* Class = UIsdkRigComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkRigComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkRigComponent);
UIsdkRigComponent::~UIsdkRigComponent() {}
// ********** End Class UIsdkRigComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRigComponent, UIsdkRigComponent::StaticClass, TEXT("UIsdkRigComponent"), &Z_Registration_Info_UClass_UIsdkRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRigComponent), 26026718U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h__Script_OculusInteractionPrebuilts_3885223198{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
