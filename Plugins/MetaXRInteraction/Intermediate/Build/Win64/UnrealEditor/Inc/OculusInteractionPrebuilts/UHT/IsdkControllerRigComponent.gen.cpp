// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkControllerRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkControllerRigComponent() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkControllerRigComponent Function GetControllerVisuals ****************
struct Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics
{
	struct IsdkControllerRigComponent_eventGetControllerVisuals_Parms
	{
		UIsdkControllerVisualsRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns the Controller Visuals associated with this controller as a Visuals Rig\n   * Component\n   * @see UIsdkControllerRigComponent#GetVisuals\n   * @return UIsdkControllerVisualsRigComponent The controller visuals component used by this\n   * controller\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the Controller Visuals associated with this controller as a Visuals Rig\nComponent\n@see UIsdkControllerRigComponent#GetVisuals\n@return UIsdkControllerVisualsRigComponent The controller visuals component used by this\ncontroller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerVisuals constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerVisuals constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerVisuals Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerRigComponent_eventGetControllerVisuals_Parms, ReturnValue), Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::PropPointers) < 2048);
// ********** End Function GetControllerVisuals Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "GetControllerVisuals", 	Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::IsdkControllerRigComponent_eventGetControllerVisuals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::IsdkControllerRigComponent_eventGetControllerVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execGetControllerVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkControllerVisualsRigComponent**)Z_Param__Result=P_THIS->GetControllerVisuals();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function GetControllerVisuals ******************

// ********** Begin Class UIsdkControllerRigComponent Function HandleControllerHandBehaviorChanged *
struct Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics
{
	struct IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms
	{
		TScriptInterface<IIsdkITrackingDataSubsystem> IsdkITrackingDataSubsystem;
		EControllerHandBehavior ControllerHandBehavior;
		EControllerHandBehavior ControllerHandBehavior1;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleControllerHandBehaviorChanged constinit property declarations ***
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_IsdkITrackingDataSubsystem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHandBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHandBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHandBehavior1_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHandBehavior1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleControllerHandBehaviorChanged constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleControllerHandBehaviorChanged Property Definitions **************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_IsdkITrackingDataSubsystem = { "IsdkITrackingDataSubsystem", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms, IsdkITrackingDataSubsystem), Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior = { "ControllerHandBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms, ControllerHandBehavior), Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior, METADATA_PARAMS(0, nullptr) }; // 1789409571
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior1 = { "ControllerHandBehavior1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms, ControllerHandBehavior1), Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior, METADATA_PARAMS(0, nullptr) }; // 1789409571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_IsdkITrackingDataSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior1_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::NewProp_ControllerHandBehavior1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleControllerHandBehaviorChanged Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "HandleControllerHandBehaviorChanged", 	Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::IsdkControllerRigComponent_eventHandleControllerHandBehaviorChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execHandleControllerHandBehaviorChanged)
{
	P_GET_TINTERFACE(IIsdkITrackingDataSubsystem,Z_Param_IsdkITrackingDataSubsystem);
	P_GET_ENUM(EControllerHandBehavior,Z_Param_ControllerHandBehavior);
	P_GET_ENUM(EControllerHandBehavior,Z_Param_ControllerHandBehavior1);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleControllerHandBehaviorChanged(Z_Param_IsdkITrackingDataSubsystem,EControllerHandBehavior(Z_Param_ControllerHandBehavior),EControllerHandBehavior(Z_Param_ControllerHandBehavior1));
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function HandleControllerHandBehaviorChanged ***

// ********** Begin Class UIsdkControllerRigComponent Function HandlePalmGrabFinishedInput *********
struct Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePalmGrabFinishedInput constinit property declarations ***********
// ********** End Function HandlePalmGrabFinishedInput constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "HandlePalmGrabFinishedInput", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execHandlePalmGrabFinishedInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePalmGrabFinishedInput();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function HandlePalmGrabFinishedInput ***********

// ********** Begin Class UIsdkControllerRigComponent Function HandlePalmGrabStartedInput **********
struct Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePalmGrabStartedInput constinit property declarations ************
// ********** End Function HandlePalmGrabStartedInput constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "HandlePalmGrabStartedInput", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execHandlePalmGrabStartedInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePalmGrabStartedInput();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function HandlePalmGrabStartedInput ************

// ********** Begin Class UIsdkControllerRigComponent Function HandlePinchGrabFinishedInput ********
struct Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePinchGrabFinishedInput constinit property declarations **********
// ********** End Function HandlePinchGrabFinishedInput constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "HandlePinchGrabFinishedInput", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execHandlePinchGrabFinishedInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePinchGrabFinishedInput();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function HandlePinchGrabFinishedInput **********

// ********** Begin Class UIsdkControllerRigComponent Function HandlePinchGrabStartedInput *********
struct Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePinchGrabStartedInput constinit property declarations ***********
// ********** End Function HandlePinchGrabStartedInput constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerRigComponent, nullptr, "HandlePinchGrabStartedInput", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerRigComponent::execHandlePinchGrabStartedInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePinchGrabStartedInput();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerRigComponent Function HandlePinchGrabStartedInput ***********

// ********** Begin Class UIsdkControllerRigComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerRigComponent;
UClass* UIsdkControllerRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerRigComponent"),
			Z_Registration_Info_UClass_UIsdkControllerRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkControllerRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkControllerRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponent_NoRegister()
{
	return UIsdkControllerRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerRigComponent\n * @brief Drives all controller-based interaction behaviors\n *\n * Highest level ISDK scene component driving interaction\n * behavior while the user is holder a controller.  It is intended to be placed directly below a\n * motion controller in the scene hierarchy, one for each hand.  The component takes input events\n * from the controller and provides a means for interactors to read those events in a\n * controller/hand agnostic manner.\n *\n * @see UIsdkRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerRigComponent\n@brief Drives all controller-based interaction behaviors\n\nHighest level ISDK scene component driving interaction\nbehavior while the user is holder a controller.  It is intended to be placed directly below a\nmotion controller in the scene hierarchy, one for each hand.  The component takes input events\nfrom the controller and provides a means for interactors to read those events in a\ncontroller/hand agnostic manner.\n\n@see UIsdkRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerVisualsComponent_MetaData[] = {
		{ "BlueprintGetter", "GetControllerVisuals" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Pointer to the rig component used for the visuals associated with this controller rig\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the rig component used for the visuals associated with this controller rig" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerRigComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerVisualsComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkControllerRigComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetControllerVisuals"), .Pointer = &UIsdkControllerRigComponent::execGetControllerVisuals },
		{ .NameUTF8 = UTF8TEXT("HandleControllerHandBehaviorChanged"), .Pointer = &UIsdkControllerRigComponent::execHandleControllerHandBehaviorChanged },
		{ .NameUTF8 = UTF8TEXT("HandlePalmGrabFinishedInput"), .Pointer = &UIsdkControllerRigComponent::execHandlePalmGrabFinishedInput },
		{ .NameUTF8 = UTF8TEXT("HandlePalmGrabStartedInput"), .Pointer = &UIsdkControllerRigComponent::execHandlePalmGrabStartedInput },
		{ .NameUTF8 = UTF8TEXT("HandlePinchGrabFinishedInput"), .Pointer = &UIsdkControllerRigComponent::execHandlePinchGrabFinishedInput },
		{ .NameUTF8 = UTF8TEXT("HandlePinchGrabStartedInput"), .Pointer = &UIsdkControllerRigComponent::execHandlePinchGrabStartedInput },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_GetControllerVisuals, "GetControllerVisuals" }, // 3977815049
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_HandleControllerHandBehaviorChanged, "HandleControllerHandBehaviorChanged" }, // 2825565406
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabFinishedInput, "HandlePalmGrabFinishedInput" }, // 1072343447
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePalmGrabStartedInput, "HandlePalmGrabStartedInput" }, // 3461239027
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabFinishedInput, "HandlePinchGrabFinishedInput" }, // 4100648833
		{ &Z_Construct_UFunction_UIsdkControllerRigComponent_HandlePinchGrabStartedInput, "HandlePinchGrabStartedInput" }, // 3499556455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerRigComponent_Statics

// ********** Begin Class UIsdkControllerRigComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerRigComponent_Statics::NewProp_ControllerVisualsComponent = { "ControllerVisualsComponent", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerRigComponent, ControllerVisualsComponent), Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerVisualsComponent_MetaData), NewProp_ControllerVisualsComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkControllerRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerRigComponent_Statics::NewProp_ControllerVisualsComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkControllerRigComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UIsdkControllerRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerRigComponent_Statics::ClassParams = {
	&UIsdkControllerRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkControllerRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkControllerRigComponent::StaticRegisterNativesUIsdkControllerRigComponent()
{
	UClass* Class = UIsdkControllerRigComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkControllerRigComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkControllerRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerRigComponent);
UIsdkControllerRigComponent::~UIsdkControllerRigComponent() {}
// ********** End Class UIsdkControllerRigComponent ************************************************

// ********** Begin Class UIsdkControllerRigComponentLeft ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft;
UClass* UIsdkControllerRigComponentLeft::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerRigComponentLeft;
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerRigComponentLeft"),
			Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.InnerSingleton,
			StaticRegisterNativesUIsdkControllerRigComponentLeft,
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
	return Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft_NoRegister()
{
	return UIsdkControllerRigComponentLeft::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerRigComponentLeft\n * @brief Rig Component Tracking Controller for Left Handedness\n *\n * @see UIsdkControllerRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "DisplayName", "ISDK Controller Rig Left" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerRigComponentLeft\n@brief Rig Component Tracking Controller for Left Handedness\n\n@see UIsdkControllerRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerRigComponentLeft constinit property declarations **********
// ********** End Class UIsdkControllerRigComponentLeft constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerRigComponentLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics
UObject* (*const Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkControllerRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::ClassParams = {
	&UIsdkControllerRigComponentLeft::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::Class_MetaDataParams)
};
void UIsdkControllerRigComponentLeft::StaticRegisterNativesUIsdkControllerRigComponentLeft()
{
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.OuterSingleton, Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerRigComponentLeft);
UIsdkControllerRigComponentLeft::~UIsdkControllerRigComponentLeft() {}
// ********** End Class UIsdkControllerRigComponentLeft ********************************************

// ********** Begin Class UIsdkControllerRigComponentRight *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerRigComponentRight;
UClass* UIsdkControllerRigComponentRight::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerRigComponentRight;
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerRigComponentRight"),
			Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.InnerSingleton,
			StaticRegisterNativesUIsdkControllerRigComponentRight,
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
	return Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight_NoRegister()
{
	return UIsdkControllerRigComponentRight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkControllerRigComponentLeft\n * @brief Rig Component Tracking Controller for Right Handedness\n *\n * @see UIsdkControllerRigComponent\n * @addtogroup InteractionSDKPrebuiltsPrebuilts\n */" },
#endif
		{ "DisplayName", "ISDK Controller Rig Right" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkControllerRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkControllerRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkControllerRigComponentLeft\n@brief Rig Component Tracking Controller for Right Handedness\n\n@see UIsdkControllerRigComponent\n@addtogroup InteractionSDKPrebuiltsPrebuilts" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerRigComponentRight constinit property declarations *********
// ********** End Class UIsdkControllerRigComponentRight constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerRigComponentRight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics
UObject* (*const Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkControllerRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::ClassParams = {
	&UIsdkControllerRigComponentRight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::Class_MetaDataParams)
};
void UIsdkControllerRigComponentRight::StaticRegisterNativesUIsdkControllerRigComponentRight()
{
}
UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.OuterSingleton, Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerRigComponentRight.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerRigComponentRight);
UIsdkControllerRigComponentRight::~UIsdkControllerRigComponentRight() {}
// ********** End Class UIsdkControllerRigComponentRight *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkControllerRigComponent, UIsdkControllerRigComponent::StaticClass, TEXT("UIsdkControllerRigComponent"), &Z_Registration_Info_UClass_UIsdkControllerRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerRigComponent), 194267503U) },
		{ Z_Construct_UClass_UIsdkControllerRigComponentLeft, UIsdkControllerRigComponentLeft::StaticClass, TEXT("UIsdkControllerRigComponentLeft"), &Z_Registration_Info_UClass_UIsdkControllerRigComponentLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerRigComponentLeft), 2840040798U) },
		{ Z_Construct_UClass_UIsdkControllerRigComponentRight, UIsdkControllerRigComponentRight::StaticClass, TEXT("UIsdkControllerRigComponentRight"), &Z_Registration_Info_UClass_UIsdkControllerRigComponentRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerRigComponentRight), 37745810U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h__Script_OculusInteractionPrebuilts_1940890088{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
