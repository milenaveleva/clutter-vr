// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkGrabberComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkGrabberComponent() {}

// ********** Begin Cross Module References ********************************************************
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkDistanceGrabDetector_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabMotion_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayGrabDetector_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabberComponent Function GetDistanceGrabDetector *******************
struct Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics
{
	struct IsdkGrabberComponent_eventGetDistanceGrabDetector_Parms
	{
		UIsdkDistanceGrabDetector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceGrabDetector constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceGrabDetector constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceGrabDetector Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventGetDistanceGrabDetector_Parms, ReturnValue), Z_Construct_UClass_UIsdkDistanceGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::PropPointers) < 2048);
// ********** End Function GetDistanceGrabDetector Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "GetDistanceGrabDetector", 	Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::IsdkGrabberComponent_eventGetDistanceGrabDetector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::IsdkGrabberComponent_eventGetDistanceGrabDetector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execGetDistanceGrabDetector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkDistanceGrabDetector**)Z_Param__Result=P_THIS->GetDistanceGrabDetector();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function GetDistanceGrabDetector *********************

// ********** Begin Class UIsdkGrabberComponent Function GetGrabbedComponent ***********************
struct Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics
{
	struct IsdkGrabberComponent_eventGetGrabbedComponent_Parms
	{
		UIsdkGrabbableComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @return the component selected (grabbed) by this grabbable\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
		{ "ReturnDisplayName", "GrabbedComponent" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return the component selected (grabbed) by this grabbable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrabbedComponent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrabbedComponent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrabbedComponent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventGetGrabbedComponent_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::PropPointers) < 2048);
// ********** End Function GetGrabbedComponent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "GetGrabbedComponent", 	Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::IsdkGrabberComponent_eventGetGrabbedComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::IsdkGrabberComponent_eventGetGrabbedComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execGetGrabbedComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabbableComponent**)Z_Param__Result=P_THIS->GetGrabbedComponent();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function GetGrabbedComponent *************************

// ********** Begin Class UIsdkGrabberComponent Function GetHandGrabDetector ***********************
struct Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics
{
	struct IsdkGrabberComponent_eventGetHandGrabDetector_Parms
	{
		UIsdkHandGrabDetector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandGrabDetector constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandGrabDetector constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandGrabDetector Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventGetHandGrabDetector_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::PropPointers) < 2048);
// ********** End Function GetHandGrabDetector Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "GetHandGrabDetector", 	Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::IsdkGrabberComponent_eventGetHandGrabDetector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::IsdkGrabberComponent_eventGetHandGrabDetector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execGetHandGrabDetector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandGrabDetector**)Z_Param__Result=P_THIS->GetHandGrabDetector();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function GetHandGrabDetector *************************

// ********** Begin Class UIsdkGrabberComponent Function GetRayGrabDetector ************************
struct Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics
{
	struct IsdkGrabberComponent_eventGetRayGrabDetector_Parms
	{
		UIsdkRayGrabDetector* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRayGrabDetector constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRayGrabDetector constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRayGrabDetector Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventGetRayGrabDetector_Parms, ReturnValue), Z_Construct_UClass_UIsdkRayGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::PropPointers) < 2048);
// ********** End Function GetRayGrabDetector Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "GetRayGrabDetector", 	Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::IsdkGrabberComponent_eventGetRayGrabDetector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::IsdkGrabberComponent_eventGetRayGrabDetector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execGetRayGrabDetector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkRayGrabDetector**)Z_Param__Result=P_THIS->GetRayGrabDetector();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function GetRayGrabDetector **************************

// ********** Begin Class UIsdkGrabberComponent Function HandleGrabbableCancelEvent ****************
struct Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics
{
	struct IsdkGrabberComponent_eventHandleGrabbableCancelEvent_Parms
	{
		int32 InteractorID;
		UIsdkGrabTransformerComponent* InGrabTransformerComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrabTransformerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleGrabbableCancelEvent constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractorID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGrabTransformerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleGrabbableCancelEvent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleGrabbableCancelEvent Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::NewProp_InteractorID = { "InteractorID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventHandleGrabbableCancelEvent_Parms, InteractorID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::NewProp_InGrabTransformerComponent = { "InGrabTransformerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventHandleGrabbableCancelEvent_Parms, InGrabTransformerComponent), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrabTransformerComponent_MetaData), NewProp_InGrabTransformerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::NewProp_InteractorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::NewProp_InGrabTransformerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::PropPointers) < 2048);
// ********** End Function HandleGrabbableCancelEvent Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "HandleGrabbableCancelEvent", 	Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::IsdkGrabberComponent_eventHandleGrabbableCancelEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::IsdkGrabberComponent_eventHandleGrabbableCancelEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execHandleGrabbableCancelEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InteractorID);
	P_GET_OBJECT(UIsdkGrabTransformerComponent,Z_Param_InGrabTransformerComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGrabbableCancelEvent(Z_Param_InteractorID,Z_Param_InGrabTransformerComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function HandleGrabbableCancelEvent ******************

// ********** Begin Class UIsdkGrabberComponent Function IsGrabbing ********************************
struct Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics
{
	struct IsdkGrabberComponent_eventIsGrabbing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @return true if this grabber has a valid grabbed component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
		{ "ReturnDisplayName", "bIsGrabbing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return true if this grabber has a valid grabbed component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGrabbing constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGrabbing constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGrabbing Property Definitions ***************************************
void Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabberComponent_eventIsGrabbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabberComponent_eventIsGrabbing_Parms), &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::PropPointers) < 2048);
// ********** End Function IsGrabbing Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "IsGrabbing", 	Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::IsdkGrabberComponent_eventIsGrabbing_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::IsdkGrabberComponent_eventIsGrabbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execIsGrabbing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrabbing();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function IsGrabbing **********************************

// ********** Begin Class UIsdkGrabberComponent Function IsGrabDetectionTypeAllowed ****************
struct Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics
{
	struct IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms
	{
		EIsdkGrabDetectorType GrabType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Returns true if this grabber detects the given grab type.\n   * @param GrabType the type to change detection of\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this grabber detects the given grab type.\n@param GrabType the type to change detection of" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGrabDetectionTypeAllowed constinit property declarations ************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GrabType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrabType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGrabDetectionTypeAllowed constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGrabDetectionTypeAllowed Property Definitions ***********************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_GrabType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_GrabType = { "GrabType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms, GrabType), Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType, METADATA_PARAMS(0, nullptr) }; // 4211588302
void Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_GrabType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_GrabType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::PropPointers) < 2048);
// ********** End Function IsGrabDetectionTypeAllowed Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "IsGrabDetectionTypeAllowed", 	Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::IsdkGrabberComponent_eventIsGrabDetectionTypeAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execIsGrabDetectionTypeAllowed)
{
	P_GET_ENUM(EIsdkGrabDetectorType,Z_Param_GrabType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrabDetectionTypeAllowed(EIsdkGrabDetectorType(Z_Param_GrabType));
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function IsGrabDetectionTypeAllowed ******************

// ********** Begin Class UIsdkGrabberComponent Function IsGrabInputMethodAllowed ******************
struct Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics
{
	struct IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms
	{
		EIsdkGrabInputMethod InputMethod;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Returns true if this grabber utilizes the given input method.\n   * @param InputMethod the type to change utilization of\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this grabber utilizes the given input method.\n@param InputMethod the type to change utilization of" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGrabInputMethodAllowed constinit property declarations **************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMethod;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGrabInputMethodAllowed constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGrabInputMethodAllowed Property Definitions *************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod = { "InputMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms, InputMethod), Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1250502478
void Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_InputMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::PropPointers) < 2048);
// ********** End Function IsGrabInputMethodAllowed Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "IsGrabInputMethodAllowed", 	Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::IsdkGrabberComponent_eventIsGrabInputMethodAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execIsGrabInputMethodAllowed)
{
	P_GET_ENUM(EIsdkGrabInputMethod,Z_Param_InputMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrabInputMethodAllowed(EIsdkGrabInputMethod(Z_Param_InputMethod));
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function IsGrabInputMethodAllowed ********************

// ********** Begin Class UIsdkGrabberComponent Function SetGrabDetectionTypeAllowed ***************
struct Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics
{
	struct IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms
	{
		EIsdkGrabDetectorType GrabType;
		bool Allowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Sets whether grabber should detect the given grab type\n   * @param GrabType the type to change detection of\n   * @param Allowed whether the input method should be respected or not\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether grabber should detect the given grab type\n@param GrabType the type to change detection of\n@param Allowed whether the input method should be respected or not" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetGrabDetectionTypeAllowed constinit property declarations ***********
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GrabType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrabType;
	static void NewProp_Allowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Allowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGrabDetectionTypeAllowed constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGrabDetectionTypeAllowed Property Definitions **********************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_GrabType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_GrabType = { "GrabType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms, GrabType), Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType, METADATA_PARAMS(0, nullptr) }; // 4211588302
void Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_Allowed_SetBit(void* Obj)
{
	((IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms*)Obj)->Allowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_Allowed = { "Allowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_Allowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_GrabType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_GrabType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::NewProp_Allowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::PropPointers) < 2048);
// ********** End Function SetGrabDetectionTypeAllowed Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "SetGrabDetectionTypeAllowed", 	Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::IsdkGrabberComponent_eventSetGrabDetectionTypeAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execSetGrabDetectionTypeAllowed)
{
	P_GET_ENUM(EIsdkGrabDetectorType,Z_Param_GrabType);
	P_GET_UBOOL(Z_Param_Allowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabDetectionTypeAllowed(EIsdkGrabDetectorType(Z_Param_GrabType),Z_Param_Allowed);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function SetGrabDetectionTypeAllowed *****************

// ********** Begin Class UIsdkGrabberComponent Function SetGrabInputMethodAllowed *****************
struct Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics
{
	struct IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms
	{
		EIsdkGrabInputMethod InputMethod;
		bool Allowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Sets whether grabber should utilize the given input method\n   * @param InputMethod the type to change utilization of\n   * @param Allowed whether the input method should be respected or not\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether grabber should utilize the given input method\n@param InputMethod the type to change utilization of\n@param Allowed whether the input method should be respected or not" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetGrabInputMethodAllowed constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMethod;
	static void NewProp_Allowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Allowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGrabInputMethodAllowed constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGrabInputMethodAllowed Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod = { "InputMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms, InputMethod), Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1250502478
void Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed_SetBit(void* Obj)
{
	((IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms*)Obj)->Allowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed = { "Allowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms), &Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_InputMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::NewProp_Allowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::PropPointers) < 2048);
// ********** End Function SetGrabInputMethodAllowed Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabberComponent, nullptr, "SetGrabInputMethodAllowed", 	Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::IsdkGrabberComponent_eventSetGrabInputMethodAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabberComponent::execSetGrabInputMethodAllowed)
{
	P_GET_ENUM(EIsdkGrabInputMethod,Z_Param_InputMethod);
	P_GET_UBOOL(Z_Param_Allowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabInputMethodAllowed(EIsdkGrabInputMethod(Z_Param_InputMethod),Z_Param_Allowed);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabberComponent Function SetGrabInputMethodAllowed *******************

// ********** Begin Class UIsdkGrabberComponent ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabberComponent;
UClass* UIsdkGrabberComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabberComponent;
	if (!Z_Registration_Info_UClass_UIsdkGrabberComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkGrabberComponent"),
			Z_Registration_Info_UClass_UIsdkGrabberComponent.InnerSingleton,
			StaticRegisterNativesUIsdkGrabberComponent,
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
	return Z_Registration_Info_UClass_UIsdkGrabberComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister()
{
	return UIsdkGrabberComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabberComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkGrabberComponent\n * IsdkGrabberComponent drives the ability for a pawn to interact with actors that have an\n * IsdkGrabbableComponent attached to them.  This component uses a number of configurable colliders\n * per input method (eg, pinch / palm grab) to drive detection of grabbables.  Selection/Unselection\n * is expected to be driven externally by an IsdkGrabInteractionRigComponent.\n * @see UIsdkSceneInteractorComponent\n */" },
#endif
		{ "DisplayName", "ISDK Grabber Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkGrabberComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkGrabberComponent\nIsdkGrabberComponent drives the ability for a pawn to interact with actors that have an\nIsdkGrabbableComponent attached to them.  This component uses a number of configurable colliders\nper input method (eg, pinch / palm grab) to drive detection of grabbables.  Selection/Unselection\nis expected to be driven externally by an IsdkGrabInteractionRigComponent.\n@see UIsdkSceneInteractorComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputMethods_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * What input methods this component is allowed to detect\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What input methods this component is allowed to detect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedGrabDetectors_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * What types of grabs this component is allowed to detect\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What types of grabs this component is allowed to detect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchStrength_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandGrabDetector_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HandGrabDetector detects pinch and palm grabs via colliders attached to the hand/controller\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HandGrabDetector detects pinch and palm grabs via colliders attached to the hand/controller" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabDetector_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DistanceGrabDetector detects pinch and palm grabs via a frustum positioned relative to the\n// pointer transform\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DistanceGrabDetector detects pinch and palm grabs via a frustum positioned relative to the\npointer transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayGrabDetector_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RayGrabDetector detects pinch and palm grabs via a line trace out from the pointer transform\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RayGrabDetector detects pinch and palm grabs via a line trace out from the pointer transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredGrabbables_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A set of all grabbables hovered by the grabber this frame\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A set of all grabbables hovered by the grabber this frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGrabMotion_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The grab motion which is currently being applied to the grabbed grabbable\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The grab motion which is currently being applied to the grabbed grabbable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGrabDetector_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The grab detector which detected the grabbable that is currently being grabbed\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The grab detector which detected the grabbable that is currently being grabbed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHoverDetector_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The grab detector which detected the grabbable that is currently being hovered.  Prioritized\n// in order of Hand > Ray > Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The grab detector which detected the grabbable that is currently being hovered.  Prioritized\nin order of Hand > Ray > Distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabNiagaraSystem_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The niagara particle system used to display distance grab effects while hovering or grabbing\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The niagara particle system used to display distance grab effects while hovering or grabbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabNiagaraComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The component that holds the DistanceGrabNiagaraSystem\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component that holds the DistanceGrabNiagaraSystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayGrabNiagaraSystem_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The niagara particle system used to display ray grab effects\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The niagara particle system used to display ray grab effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayGrabNiagaraComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The component that holds the RayGrabNiagaraSystem\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The component that holds the RayGrabNiagaraSystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPointerPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkGrabberComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkGrabberComponent constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedInputMethods_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedInputMethods_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedInputMethods;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllowedGrabDetectors_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGrabDetectors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedGrabDetectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PinchStrength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandGrabDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayGrabDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredGrabbables_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HoveredGrabbables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGrabMotion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGrabDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHoverDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabNiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabNiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayGrabNiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayGrabNiagaraComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandPointerPose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkGrabberComponent constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDistanceGrabDetector"), .Pointer = &UIsdkGrabberComponent::execGetDistanceGrabDetector },
		{ .NameUTF8 = UTF8TEXT("GetGrabbedComponent"), .Pointer = &UIsdkGrabberComponent::execGetGrabbedComponent },
		{ .NameUTF8 = UTF8TEXT("GetHandGrabDetector"), .Pointer = &UIsdkGrabberComponent::execGetHandGrabDetector },
		{ .NameUTF8 = UTF8TEXT("GetRayGrabDetector"), .Pointer = &UIsdkGrabberComponent::execGetRayGrabDetector },
		{ .NameUTF8 = UTF8TEXT("HandleGrabbableCancelEvent"), .Pointer = &UIsdkGrabberComponent::execHandleGrabbableCancelEvent },
		{ .NameUTF8 = UTF8TEXT("IsGrabbing"), .Pointer = &UIsdkGrabberComponent::execIsGrabbing },
		{ .NameUTF8 = UTF8TEXT("IsGrabDetectionTypeAllowed"), .Pointer = &UIsdkGrabberComponent::execIsGrabDetectionTypeAllowed },
		{ .NameUTF8 = UTF8TEXT("IsGrabInputMethodAllowed"), .Pointer = &UIsdkGrabberComponent::execIsGrabInputMethodAllowed },
		{ .NameUTF8 = UTF8TEXT("SetGrabDetectionTypeAllowed"), .Pointer = &UIsdkGrabberComponent::execSetGrabDetectionTypeAllowed },
		{ .NameUTF8 = UTF8TEXT("SetGrabInputMethodAllowed"), .Pointer = &UIsdkGrabberComponent::execSetGrabInputMethodAllowed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_GetDistanceGrabDetector, "GetDistanceGrabDetector" }, // 142107221
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_GetGrabbedComponent, "GetGrabbedComponent" }, // 1643392918
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_GetHandGrabDetector, "GetHandGrabDetector" }, // 1648333105
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_GetRayGrabDetector, "GetRayGrabDetector" }, // 106099831
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_HandleGrabbableCancelEvent, "HandleGrabbableCancelEvent" }, // 869802473
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabbing, "IsGrabbing" }, // 3131928084
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabDetectionTypeAllowed, "IsGrabDetectionTypeAllowed" }, // 2800845590
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_IsGrabInputMethodAllowed, "IsGrabInputMethodAllowed" }, // 3540019337
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabDetectionTypeAllowed, "SetGrabDetectionTypeAllowed" }, // 613944116
		{ &Z_Construct_UFunction_UIsdkGrabberComponent_SetGrabInputMethodAllowed, "SetGrabInputMethodAllowed" }, // 3486103451
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabberComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkGrabberComponent_Statics

// ********** Begin Class UIsdkGrabberComponent Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods_ElementProp = { "AllowedInputMethods", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, METADATA_PARAMS(0, nullptr) }; // 1250502478
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods = { "AllowedInputMethods", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, AllowedInputMethods), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedInputMethods_MetaData), NewProp_AllowedInputMethods_MetaData) }; // 1250502478
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors_ElementProp = { "AllowedGrabDetectors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType, METADATA_PARAMS(0, nullptr) }; // 4211588302
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors = { "AllowedGrabDetectors", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, AllowedGrabDetectors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedGrabDetectors_MetaData), NewProp_AllowedGrabDetectors_MetaData) }; // 4211588302
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_PinchStrength = { "PinchStrength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, PinchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchStrength_MetaData), NewProp_PinchStrength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HandGrabDetector = { "HandGrabDetector", nullptr, (EPropertyFlags)0x012408000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, HandGrabDetector), Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandGrabDetector_MetaData), NewProp_HandGrabDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabDetector = { "DistanceGrabDetector", nullptr, (EPropertyFlags)0x012408000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, DistanceGrabDetector), Z_Construct_UClass_UIsdkDistanceGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabDetector_MetaData), NewProp_DistanceGrabDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabDetector = { "RayGrabDetector", nullptr, (EPropertyFlags)0x012408000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, RayGrabDetector), Z_Construct_UClass_UIsdkRayGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayGrabDetector_MetaData), NewProp_RayGrabDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HoveredGrabbables_ElementProp = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HoveredGrabbables = { "HoveredGrabbables", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, HoveredGrabbables), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredGrabbables_MetaData), NewProp_HoveredGrabbables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentGrabMotion = { "CurrentGrabMotion", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, CurrentGrabMotion), Z_Construct_UClass_UIsdkGrabMotion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGrabMotion_MetaData), NewProp_CurrentGrabMotion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentGrabDetector = { "CurrentGrabDetector", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, CurrentGrabDetector), Z_Construct_UClass_UIsdkGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGrabDetector_MetaData), NewProp_CurrentGrabDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentHoverDetector = { "CurrentHoverDetector", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, CurrentHoverDetector), Z_Construct_UClass_UIsdkGrabDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHoverDetector_MetaData), NewProp_CurrentHoverDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabNiagaraSystem = { "DistanceGrabNiagaraSystem", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, DistanceGrabNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabNiagaraSystem_MetaData), NewProp_DistanceGrabNiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabNiagaraComponent = { "DistanceGrabNiagaraComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, DistanceGrabNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabNiagaraComponent_MetaData), NewProp_DistanceGrabNiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabNiagaraSystem = { "RayGrabNiagaraSystem", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, RayGrabNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayGrabNiagaraSystem_MetaData), NewProp_RayGrabNiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabNiagaraComponent = { "RayGrabNiagaraComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, RayGrabNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayGrabNiagaraComponent_MetaData), NewProp_RayGrabNiagaraComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HandPointerPose = { "HandPointerPose", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, HandPointerPose), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPointerPose_MetaData), NewProp_HandPointerPose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabberComponent, GrabbedComponent), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbedComponent_MetaData), NewProp_GrabbedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabberComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedInputMethods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_AllowedGrabDetectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_PinchStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HandGrabDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HoveredGrabbables_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HoveredGrabbables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentGrabMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentGrabDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_CurrentHoverDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_DistanceGrabNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_RayGrabNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_HandPointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabberComponent_Statics::NewProp_GrabbedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabberComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkGrabberComponent Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UIsdkGrabberComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkSceneInteractorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabberComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabberComponent_Statics::ClassParams = {
	&UIsdkGrabberComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabberComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabberComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabberComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabberComponent_Statics::Class_MetaDataParams)
};
void UIsdkGrabberComponent::StaticRegisterNativesUIsdkGrabberComponent()
{
	UClass* Class = UIsdkGrabberComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkGrabberComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkGrabberComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabberComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabberComponent.OuterSingleton, Z_Construct_UClass_UIsdkGrabberComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabberComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkGrabberComponent);
UIsdkGrabberComponent::~UIsdkGrabberComponent() {}
// ********** End Class UIsdkGrabberComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabberComponent, UIsdkGrabberComponent::StaticClass, TEXT("UIsdkGrabberComponent"), &Z_Registration_Info_UClass_UIsdkGrabberComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabberComponent), 1709006930U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h__Script_OculusInteraction_2494712007{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabberComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
