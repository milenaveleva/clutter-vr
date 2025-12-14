// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Interaction/Grabbable/IsdkITransformer.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkFunctionLibrary();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkFunctionLibrary_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkBoundsClipper();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPose();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTargetTransform();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFunctionLibrary Function FindGrabbableByComponent *******************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics
{
	struct IsdkFunctionLibrary_eventFindGrabbableByComponent_Parms
	{
		USceneComponent* Component;
		UIsdkGrabbableComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindGrabbableByComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindGrabbableByComponent constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindGrabbableByComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventFindGrabbableByComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventFindGrabbableByComponent_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::PropPointers) < 2048);
// ********** End Function FindGrabbableByComponent Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "FindGrabbableByComponent", 	Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::IsdkFunctionLibrary_eventFindGrabbableByComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::IsdkFunctionLibrary_eventFindGrabbableByComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execFindGrabbableByComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabbableComponent**)Z_Param__Result=UIsdkFunctionLibrary::FindGrabbableByComponent(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function FindGrabbableByComponent *********************

// ********** Begin Class UIsdkFunctionLibrary Function FindTrackingDataSubsystem ******************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics
{
	struct IsdkFunctionLibrary_eventFindTrackingDataSubsystem_Parms
	{
		UWorld* World;
		TScriptInterface<IIsdkITrackingDataSubsystem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Finds the tracking subsystem for the given actor\n   * @param World which world contains the subsystem\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Finds the tracking subsystem for the given actor\n@param World which world contains the subsystem" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FindTrackingDataSubsystem constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindTrackingDataSubsystem constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindTrackingDataSubsystem Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventFindTrackingDataSubsystem_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventFindTrackingDataSubsystem_Parms, ReturnValue), Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::PropPointers) < 2048);
// ********** End Function FindTrackingDataSubsystem Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "FindTrackingDataSubsystem", 	Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::IsdkFunctionLibrary_eventFindTrackingDataSubsystem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::IsdkFunctionLibrary_eventFindTrackingDataSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execFindTrackingDataSubsystem)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkITrackingDataSubsystem>*)Z_Param__Result=UIsdkFunctionLibrary::FindTrackingDataSubsystem(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function FindTrackingDataSubsystem ********************

// ********** Begin Class UIsdkFunctionLibrary Function GetControllerHandBehavior ******************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics
{
	struct IsdkFunctionLibrary_eventGetControllerHandBehavior_Parms
	{
		UObject* WorldContextObject;
		EControllerHandBehavior ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Get the current ControllerHandBehavior\n   * @return the current ControllerHandBehavior\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
		{ "ReturnDisplayName", "ControllerHandBehavior" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current ControllerHandBehavior\n@return the current ControllerHandBehavior" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerHandBehavior constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerHandBehavior constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerHandBehavior Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetControllerHandBehavior_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetControllerHandBehavior_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior, METADATA_PARAMS(0, nullptr) }; // 1789409571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::PropPointers) < 2048);
// ********** End Function GetControllerHandBehavior Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "GetControllerHandBehavior", 	Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::IsdkFunctionLibrary_eventGetControllerHandBehavior_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::IsdkFunctionLibrary_eventGetControllerHandBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execGetControllerHandBehavior)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EControllerHandBehavior*)Z_Param__Result=UIsdkFunctionLibrary::GetControllerHandBehavior(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function GetControllerHandBehavior ********************

// ********** Begin Class UIsdkFunctionLibrary Function GetDefaultJointRadii ***********************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics
{
	struct IsdkFunctionLibrary_eventGetDefaultJointRadii_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultJointRadii constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultJointRadii constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultJointRadii Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetDefaultJointRadii_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultJointRadii Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "GetDefaultJointRadii", 	Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::IsdkFunctionLibrary_eventGetDefaultJointRadii_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::IsdkFunctionLibrary_eventGetDefaultJointRadii_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execGetDefaultJointRadii)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=UIsdkFunctionLibrary::GetDefaultJointRadii();
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function GetDefaultJointRadii *************************

// ********** Begin Class UIsdkFunctionLibrary Function GetDefaultOpenXRFingerMapping **************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics
{
	struct IsdkFunctionLibrary_eventGetDefaultOpenXRFingerMapping_Parms
	{
		TArray<FIsdkExternalHandPositionFrame_FingerJointMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultOpenXRFingerMapping constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultOpenXRFingerMapping constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultOpenXRFingerMapping Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, METADATA_PARAMS(0, nullptr) }; // 230323569
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetDefaultOpenXRFingerMapping_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 230323569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultOpenXRFingerMapping Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "GetDefaultOpenXRFingerMapping", 	Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::IsdkFunctionLibrary_eventGetDefaultOpenXRFingerMapping_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::IsdkFunctionLibrary_eventGetDefaultOpenXRFingerMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execGetDefaultOpenXRFingerMapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIsdkExternalHandPositionFrame_FingerJointMapping>*)Z_Param__Result=UIsdkFunctionLibrary::GetDefaultOpenXRFingerMapping();
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function GetDefaultOpenXRFingerMapping ****************

// ********** Begin Class UIsdkFunctionLibrary Function GetDefaultOpenXRThumbMapping ***************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics
{
	struct IsdkFunctionLibrary_eventGetDefaultOpenXRThumbMapping_Parms
	{
		TArray<FIsdkExternalHandPositionFrame_ThumbJointMapping> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultOpenXRThumbMapping constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultOpenXRThumbMapping constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultOpenXRThumbMapping Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, METADATA_PARAMS(0, nullptr) }; // 3578312779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetDefaultOpenXRThumbMapping_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3578312779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultOpenXRThumbMapping Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "GetDefaultOpenXRThumbMapping", 	Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::IsdkFunctionLibrary_eventGetDefaultOpenXRThumbMapping_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::IsdkFunctionLibrary_eventGetDefaultOpenXRThumbMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execGetDefaultOpenXRThumbMapping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIsdkExternalHandPositionFrame_ThumbJointMapping>*)Z_Param__Result=UIsdkFunctionLibrary::GetDefaultOpenXRThumbMapping();
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function GetDefaultOpenXRThumbMapping *****************

// ********** Begin Class UIsdkFunctionLibrary Function GetISDKGameplayTagsFromActor ***************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics
{
	struct IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms
	{
		const AActor* ActorIn;
		FGameplayTagContainer ContainerOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Will iterate through every component of an actor, get all ISDK GameplayTags via interface, and\n   * collate them into one container */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will iterate through every component of an actor, get all ISDK GameplayTags via interface, and\n  * collate them into one container" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetISDKGameplayTagsFromActor constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetISDKGameplayTagsFromActor constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetISDKGameplayTagsFromActor Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ActorIn = { "ActorIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms, ActorIn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorIn_MetaData), NewProp_ActorIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
void Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms), &Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ActorIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::PropPointers) < 2048);
// ********** End Function GetISDKGameplayTagsFromActor Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "GetISDKGameplayTagsFromActor", 	Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::IsdkFunctionLibrary_eventGetISDKGameplayTagsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execGetISDKGameplayTagsFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorIn);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UIsdkFunctionLibrary::GetISDKGameplayTagsFromActor(Z_Param_ActorIn,Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function GetISDKGameplayTagsFromActor *****************

// ********** Begin Class UIsdkFunctionLibrary Function MakeBoundsClippersFromPose *****************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics
{
	struct IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms
	{
		TScriptInterface<IIsdkIPose> InPose;
		FVector2D Size;
		TArray<FIsdkBoundsClipper> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helpers\n" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPose_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeBoundsClippersFromPose constinit property declarations ************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeBoundsClippersFromPose constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeBoundsClippersFromPose Property Definitions ***********************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_InPose = { "InPose", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms, InPose), Z_Construct_UClass_UIsdkIPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPose_MetaData), NewProp_InPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkBoundsClipper, METADATA_PARAMS(0, nullptr) }; // 3667170436
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3667170436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_InPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::PropPointers) < 2048);
// ********** End Function MakeBoundsClippersFromPose Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MakeBoundsClippersFromPose", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::IsdkFunctionLibrary_eventMakeBoundsClippersFromPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMakeBoundsClippersFromPose)
{
	P_GET_TINTERFACE_REF(IIsdkIPose,Z_Param_Out_InPose);
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIsdkBoundsClipper>*)Z_Param__Result=UIsdkFunctionLibrary::MakeBoundsClippersFromPose(Z_Param_Out_InPose,Z_Param_Size);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MakeBoundsClippersFromPose *******************

// ********** Begin Class UIsdkFunctionLibrary Function MakeGrabPoseStruct *************************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics
{
	struct IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms
	{
		int32 Identifier;
		FVector Location;
		FQuat Orientation;
		FIsdkGrabPose ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeGrabPoseStruct constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeGrabPoseStruct constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeGrabPoseStruct Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms, Identifier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkGrabPose, METADATA_PARAMS(0, nullptr) }; // 1410713248
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeGrabPoseStruct Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MakeGrabPoseStruct", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::IsdkFunctionLibrary_eventMakeGrabPoseStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMakeGrabPoseStruct)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Identifier);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_Orientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkGrabPose*)Z_Param__Result=UIsdkFunctionLibrary::MakeGrabPoseStruct(Z_Param_Identifier,Z_Param_Out_Location,Z_Param_Out_Orientation);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MakeGrabPoseStruct ***************************

// ********** Begin Class UIsdkFunctionLibrary Function MakeTargetTransformStruct ******************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics
{
	struct IsdkFunctionLibrary_eventMakeTargetTransformStruct_Parms
	{
		const USceneComponent* Target;
		FIsdkTargetTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeTargetTransformStruct constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeTargetTransformStruct constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeTargetTransformStruct Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeTargetTransformStruct_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMakeTargetTransformStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkTargetTransform, METADATA_PARAMS(0, nullptr) }; // 3350651162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::PropPointers) < 2048);
// ********** End Function MakeTargetTransformStruct Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MakeTargetTransformStruct", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::IsdkFunctionLibrary_eventMakeTargetTransformStruct_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::IsdkFunctionLibrary_eventMakeTargetTransformStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMakeTargetTransformStruct)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkTargetTransform*)Z_Param__Result=UIsdkFunctionLibrary::MakeTargetTransformStruct(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MakeTargetTransformStruct ********************

// ********** Begin Class UIsdkFunctionLibrary Function MapXrFingerJoint ***************************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics
{
	struct IsdkFunctionLibrary_eventMapXrFingerJoint_Parms
	{
		EIsdkFingerType Finger;
		EIsdkFingerJoint Joint;
		int32 Index;
		FIsdkExternalHandPositionFrame_FingerJointMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MapXrFingerJoint constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Joint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Joint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MapXrFingerJoint constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MapXrFingerJoint Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrFingerJoint_Parms, Finger), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 155703524
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Joint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrFingerJoint_Parms, Joint), Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint, METADATA_PARAMS(0, nullptr) }; // 2728139297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrFingerJoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrFingerJoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, METADATA_PARAMS(0, nullptr) }; // 230323569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Finger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Finger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Joint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Joint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::PropPointers) < 2048);
// ********** End Function MapXrFingerJoint Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MapXrFingerJoint", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::IsdkFunctionLibrary_eventMapXrFingerJoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::IsdkFunctionLibrary_eventMapXrFingerJoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMapXrFingerJoint)
{
	P_GET_ENUM(EIsdkFingerType,Z_Param_Finger);
	P_GET_ENUM(EIsdkFingerJoint,Z_Param_Joint);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkExternalHandPositionFrame_FingerJointMapping*)Z_Param__Result=UIsdkFunctionLibrary::MapXrFingerJoint(EIsdkFingerType(Z_Param_Finger),EIsdkFingerJoint(Z_Param_Joint),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MapXrFingerJoint *****************************

// ********** Begin Class UIsdkFunctionLibrary Function MapXrThumbJoint ****************************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics
{
	struct IsdkFunctionLibrary_eventMapXrThumbJoint_Parms
	{
		EIsdkThumbJoint Joint;
		int32 Index;
		FIsdkExternalHandPositionFrame_ThumbJointMapping ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MapXrThumbJoint constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Joint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Joint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MapXrThumbJoint constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MapXrThumbJoint Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Joint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrThumbJoint_Parms, Joint), Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint, METADATA_PARAMS(0, nullptr) }; // 706532749
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrThumbJoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMapXrThumbJoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, METADATA_PARAMS(0, nullptr) }; // 3578312779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Joint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Joint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::PropPointers) < 2048);
// ********** End Function MapXrThumbJoint Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MapXrThumbJoint", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::IsdkFunctionLibrary_eventMapXrThumbJoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::IsdkFunctionLibrary_eventMapXrThumbJoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMapXrThumbJoint)
{
	P_GET_ENUM(EIsdkThumbJoint,Z_Param_Joint);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkExternalHandPositionFrame_ThumbJointMapping*)Z_Param__Result=UIsdkFunctionLibrary::MapXrThumbJoint(EIsdkThumbJoint(Z_Param_Joint),Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MapXrThumbJoint ******************************

// ********** Begin Class UIsdkFunctionLibrary Function MirrorHandTransform ************************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics
{
	struct IsdkFunctionLibrary_eventMirrorHandTransform_Parms
	{
		FTransform HandTransformIn;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* For a given Transform representing a hand joint, mirror it (reflecting across the thumb side)\n   * and return the new transform */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For a given Transform representing a hand joint, mirror it (reflecting across the thumb side)\n  * and return the new transform" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function MirrorHandTransform constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandTransformIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MirrorHandTransform constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MirrorHandTransform Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::NewProp_HandTransformIn = { "HandTransformIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMirrorHandTransform_Parms, HandTransformIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventMirrorHandTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::NewProp_HandTransformIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::PropPointers) < 2048);
// ********** End Function MirrorHandTransform Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "MirrorHandTransform", 	Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::IsdkFunctionLibrary_eventMirrorHandTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::IsdkFunctionLibrary_eventMirrorHandTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execMirrorHandTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_HandTransformIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UIsdkFunctionLibrary::MirrorHandTransform(Z_Param_HandTransformIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function MirrorHandTransform **************************

// ********** Begin Class UIsdkFunctionLibrary Function SetControllerHandBehavior ******************
struct Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics
{
	struct IsdkFunctionLibrary_eventSetControllerHandBehavior_Parms
	{
		UObject* WorldContextObject;
		EControllerHandBehavior ControllerHandBehavior;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Set the behavior and display of the controller and hands when holding a controller.  May\n   * behave differently on the oculus runtime than on other runtimes.\n   *\n   * Controller and Hands (Animated) - Show both the controller and hands.  Hands will use an\n   *   animation blueprint to drive their animations.\n   *\n   * Controller Only - Show only the controller.\n   *\n   * Hands Only (Procedural) - Show only the hands.  Hands will be posed by runtime bone transforms\n   *   coming from the oculus runtime.\n   *\n   * Hands Only (Animated) - Show only the hands.  Hands will use an animation blueprint to drive\n   *   their animations.\n   *\n   * Note that for non-oculus runtimes, the procedural variants are disabled and will\n   * fall back to their animated counterparts.\n   *\n   * @param WorldContextObject A UObject from which to find the UWorld reference from\n   * @param ControllerHandBehavior the ControllerHandBehavior to set\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the behavior and display of the controller and hands when holding a controller.  May\nbehave differently on the oculus runtime than on other runtimes.\n\nController and Hands (Animated) - Show both the controller and hands.  Hands will use an\n  animation blueprint to drive their animations.\n\nController Only - Show only the controller.\n\nHands Only (Procedural) - Show only the hands.  Hands will be posed by runtime bone transforms\n  coming from the oculus runtime.\n\nHands Only (Animated) - Show only the hands.  Hands will use an animation blueprint to drive\n  their animations.\n\nNote that for non-oculus runtimes, the procedural variants are disabled and will\nfall back to their animated counterparts.\n\n@param WorldContextObject A UObject from which to find the UWorld reference from\n@param ControllerHandBehavior the ControllerHandBehavior to set" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetControllerHandBehavior constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerHandBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerHandBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetControllerHandBehavior constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetControllerHandBehavior Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventSetControllerHandBehavior_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_ControllerHandBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_ControllerHandBehavior = { "ControllerHandBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFunctionLibrary_eventSetControllerHandBehavior_Parms, ControllerHandBehavior), Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior, METADATA_PARAMS(0, nullptr) }; // 1789409571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_ControllerHandBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::NewProp_ControllerHandBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::PropPointers) < 2048);
// ********** End Function SetControllerHandBehavior Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFunctionLibrary, nullptr, "SetControllerHandBehavior", 	Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::IsdkFunctionLibrary_eventSetControllerHandBehavior_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::IsdkFunctionLibrary_eventSetControllerHandBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFunctionLibrary::execSetControllerHandBehavior)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EControllerHandBehavior,Z_Param_ControllerHandBehavior);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkFunctionLibrary::SetControllerHandBehavior(Z_Param_WorldContextObject,EControllerHandBehavior(Z_Param_ControllerHandBehavior));
	P_NATIVE_END;
}
// ********** End Class UIsdkFunctionLibrary Function SetControllerHandBehavior ********************

// ********** Begin Class UIsdkFunctionLibrary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFunctionLibrary;
UClass* UIsdkFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UIsdkFunctionLibrary;
	if (!Z_Registration_Info_UClass_UIsdkFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkFunctionLibrary"),
			Z_Registration_Info_UClass_UIsdkFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUIsdkFunctionLibrary,
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
	return Z_Registration_Info_UClass_UIsdkFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFunctionLibrary_NoRegister()
{
	return UIsdkFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IsdkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/IsdkFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkFunctionLibrary constinit property declarations *********************
// ********** End Class UIsdkFunctionLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindGrabbableByComponent"), .Pointer = &UIsdkFunctionLibrary::execFindGrabbableByComponent },
		{ .NameUTF8 = UTF8TEXT("FindTrackingDataSubsystem"), .Pointer = &UIsdkFunctionLibrary::execFindTrackingDataSubsystem },
		{ .NameUTF8 = UTF8TEXT("GetControllerHandBehavior"), .Pointer = &UIsdkFunctionLibrary::execGetControllerHandBehavior },
		{ .NameUTF8 = UTF8TEXT("GetDefaultJointRadii"), .Pointer = &UIsdkFunctionLibrary::execGetDefaultJointRadii },
		{ .NameUTF8 = UTF8TEXT("GetDefaultOpenXRFingerMapping"), .Pointer = &UIsdkFunctionLibrary::execGetDefaultOpenXRFingerMapping },
		{ .NameUTF8 = UTF8TEXT("GetDefaultOpenXRThumbMapping"), .Pointer = &UIsdkFunctionLibrary::execGetDefaultOpenXRThumbMapping },
		{ .NameUTF8 = UTF8TEXT("GetISDKGameplayTagsFromActor"), .Pointer = &UIsdkFunctionLibrary::execGetISDKGameplayTagsFromActor },
		{ .NameUTF8 = UTF8TEXT("MakeBoundsClippersFromPose"), .Pointer = &UIsdkFunctionLibrary::execMakeBoundsClippersFromPose },
		{ .NameUTF8 = UTF8TEXT("MakeGrabPoseStruct"), .Pointer = &UIsdkFunctionLibrary::execMakeGrabPoseStruct },
		{ .NameUTF8 = UTF8TEXT("MakeTargetTransformStruct"), .Pointer = &UIsdkFunctionLibrary::execMakeTargetTransformStruct },
		{ .NameUTF8 = UTF8TEXT("MapXrFingerJoint"), .Pointer = &UIsdkFunctionLibrary::execMapXrFingerJoint },
		{ .NameUTF8 = UTF8TEXT("MapXrThumbJoint"), .Pointer = &UIsdkFunctionLibrary::execMapXrThumbJoint },
		{ .NameUTF8 = UTF8TEXT("MirrorHandTransform"), .Pointer = &UIsdkFunctionLibrary::execMirrorHandTransform },
		{ .NameUTF8 = UTF8TEXT("SetControllerHandBehavior"), .Pointer = &UIsdkFunctionLibrary::execSetControllerHandBehavior },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_FindGrabbableByComponent, "FindGrabbableByComponent" }, // 2963753958
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_FindTrackingDataSubsystem, "FindTrackingDataSubsystem" }, // 288361915
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_GetControllerHandBehavior, "GetControllerHandBehavior" }, // 3355923546
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultJointRadii, "GetDefaultJointRadii" }, // 2551603504
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRFingerMapping, "GetDefaultOpenXRFingerMapping" }, // 3580656487
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_GetDefaultOpenXRThumbMapping, "GetDefaultOpenXRThumbMapping" }, // 2611850938
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_GetISDKGameplayTagsFromActor, "GetISDKGameplayTagsFromActor" }, // 3817255835
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MakeBoundsClippersFromPose, "MakeBoundsClippersFromPose" }, // 964347197
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MakeGrabPoseStruct, "MakeGrabPoseStruct" }, // 479738275
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MakeTargetTransformStruct, "MakeTargetTransformStruct" }, // 4055152524
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrFingerJoint, "MapXrFingerJoint" }, // 138886358
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MapXrThumbJoint, "MapXrThumbJoint" }, // 2154996165
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_MirrorHandTransform, "MirrorHandTransform" }, // 3665237992
		{ &Z_Construct_UFunction_UIsdkFunctionLibrary_SetControllerHandBehavior, "SetControllerHandBehavior" }, // 2189679733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UIsdkFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFunctionLibrary_Statics::ClassParams = {
	&UIsdkFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFunctionLibrary_Statics::Class_MetaDataParams)
};
void UIsdkFunctionLibrary::StaticRegisterNativesUIsdkFunctionLibrary()
{
	UClass* Class = UIsdkFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UIsdkFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UIsdkFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFunctionLibrary.OuterSingleton;
}
UIsdkFunctionLibrary::UIsdkFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkFunctionLibrary);
UIsdkFunctionLibrary::~UIsdkFunctionLibrary() {}
// ********** End Class UIsdkFunctionLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFunctionLibrary, UIsdkFunctionLibrary::StaticClass, TEXT("UIsdkFunctionLibrary"), &Z_Registration_Info_UClass_UIsdkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFunctionLibrary), 1894739524U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h__Script_OculusInteraction_875516257{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkFunctionLibrary_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
