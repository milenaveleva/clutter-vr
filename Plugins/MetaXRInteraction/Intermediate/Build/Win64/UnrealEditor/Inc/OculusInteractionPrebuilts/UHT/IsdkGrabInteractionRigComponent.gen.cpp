// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkGrabInteractionRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkGrabInteractionRigComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabInteractionRigComponent Function GetEnabledConditional **********
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics
{
	struct IsdkGrabInteractionRigComponent_eventGetEnabledConditional_Parms
	{
		UIsdkConditionalGroupAll* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * Gets the EnabledConditionalGroup, which allows adding conditions that drive whether\n   * the grabber component is activated.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Gets the EnabledConditionalGroup, which allows adding conditions that drive whether\n* the grabber component is activated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnabledConditional constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnabledConditional constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnabledConditional Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabInteractionRigComponent_eventGetEnabledConditional_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::PropPointers) < 2048);
// ********** End Function GetEnabledConditional Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "GetEnabledConditional", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::IsdkGrabInteractionRigComponent_eventGetEnabledConditional_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::IsdkGrabInteractionRigComponent_eventGetEnabledConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execGetEnabledConditional)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalGroupAll**)Z_Param__Result=P_THIS->GetEnabledConditional();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function GetEnabledConditional ************

// ********** Begin Class UIsdkGrabInteractionRigComponent Function HandleIsEnabledConditionalChanged 
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics
{
	struct IsdkGrabInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleIsEnabledConditionalChanged constinit property declarations *****
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleIsEnabledConditionalChanged constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleIsEnabledConditionalChanged Property Definitions ****************
void Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((IsdkGrabInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkGrabInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms), &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleIsEnabledConditionalChanged Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "HandleIsEnabledConditionalChanged", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::IsdkGrabInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::IsdkGrabInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execHandleIsEnabledConditionalChanged)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleIsEnabledConditionalChanged(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function HandleIsEnabledConditionalChanged 

// ********** Begin Class UIsdkGrabInteractionRigComponent Function HandleRigPalmSelect ************
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics
{
	struct IsdkGrabInteractionRigComponent_eventHandleRigPalmSelect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsdkRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRigPalmSelect constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsdkRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleRigPalmSelect constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleRigPalmSelect Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabInteractionRigComponent_eventHandleRigPalmSelect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPalmSelect Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "HandleRigPalmSelect", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPalmSelect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPalmSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execHandleRigPalmSelect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPalmSelect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function HandleRigPalmSelect **************

// ********** Begin Class UIsdkGrabInteractionRigComponent Function HandleRigPalmUnselect **********
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics
{
	struct IsdkGrabInteractionRigComponent_eventHandleRigPalmUnselect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsdkRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRigPalmUnselect constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsdkRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleRigPalmUnselect constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleRigPalmUnselect Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabInteractionRigComponent_eventHandleRigPalmUnselect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPalmUnselect Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "HandleRigPalmUnselect", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPalmUnselect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPalmUnselect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execHandleRigPalmUnselect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPalmUnselect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function HandleRigPalmUnselect ************

// ********** Begin Class UIsdkGrabInteractionRigComponent Function HandleRigPinchSelect ***********
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics
{
	struct IsdkGrabInteractionRigComponent_eventHandleRigPinchSelect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsdkRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRigPinchSelect constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsdkRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleRigPinchSelect constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleRigPinchSelect Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabInteractionRigComponent_eventHandleRigPinchSelect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPinchSelect Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "HandleRigPinchSelect", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPinchSelect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPinchSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execHandleRigPinchSelect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPinchSelect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function HandleRigPinchSelect *************

// ********** Begin Class UIsdkGrabInteractionRigComponent Function HandleRigPinchUnselect *********
struct Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics
{
	struct IsdkGrabInteractionRigComponent_eventHandleRigPinchUnselect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsdkRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleRigPinchUnselect constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsdkRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleRigPinchUnselect constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleRigPinchUnselect Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabInteractionRigComponent_eventHandleRigPinchUnselect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPinchUnselect Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabInteractionRigComponent, nullptr, "HandleRigPinchUnselect", 	Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPinchUnselect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::IsdkGrabInteractionRigComponent_eventHandleRigPinchUnselect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabInteractionRigComponent::execHandleRigPinchUnselect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPinchUnselect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabInteractionRigComponent Function HandleRigPinchUnselect ***********

// ********** Begin Class UIsdkGrabInteractionRigComponent *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent;
UClass* UIsdkGrabInteractionRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabInteractionRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkGrabInteractionRigComponent"),
			Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkGrabInteractionRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister()
{
	return UIsdkGrabInteractionRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * IsdkGrabInteractionRigComponent is responsible for taking input from the player pawn and\n * piping it into an IsdkGrabberComponent.\n */" },
#endif
		{ "IncludePath", "Rig/IsdkGrabInteractionRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IsdkGrabInteractionRigComponent is responsible for taking input from the player pawn and\npiping it into an IsdkGrabberComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A reference to the grab component we'll bind input to\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reference to the grab component we'll bind input to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPointerPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HmdDataSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbTipSocketName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the thumb tip bone or socket that pinch grab colliders should be attached to.\n" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the thumb tip bone or socket that pinch grab colliders should be attached to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchAttachMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledConditionalGroup_MetaData[] = {
		{ "BlueprintGetter", "GetEnabledConditional" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows adding conditions that drive whether the grabber component is activated.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows adding conditions that drive whether the grabber component is activated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveConditional_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * A conditional that detects whether this component is active or not, is used by\n   * EnabledConditionalGroup to drive whether the grabber is active.\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkGrabInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* A conditional that detects whether this component is active or not, is used by\n* EnabledConditionalGroup to drive whether the grabber is active." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkGrabInteractionRigComponent constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandPointerPose;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThumbTipSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchAttachMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnabledConditionalGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsActiveConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkGrabInteractionRigComponent constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetEnabledConditional"), .Pointer = &UIsdkGrabInteractionRigComponent::execGetEnabledConditional },
		{ .NameUTF8 = UTF8TEXT("HandleIsEnabledConditionalChanged"), .Pointer = &UIsdkGrabInteractionRigComponent::execHandleIsEnabledConditionalChanged },
		{ .NameUTF8 = UTF8TEXT("HandleRigPalmSelect"), .Pointer = &UIsdkGrabInteractionRigComponent::execHandleRigPalmSelect },
		{ .NameUTF8 = UTF8TEXT("HandleRigPalmUnselect"), .Pointer = &UIsdkGrabInteractionRigComponent::execHandleRigPalmUnselect },
		{ .NameUTF8 = UTF8TEXT("HandleRigPinchSelect"), .Pointer = &UIsdkGrabInteractionRigComponent::execHandleRigPinchSelect },
		{ .NameUTF8 = UTF8TEXT("HandleRigPinchUnselect"), .Pointer = &UIsdkGrabInteractionRigComponent::execHandleRigPinchUnselect },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_GetEnabledConditional, "GetEnabledConditional" }, // 4227833300
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleIsEnabledConditionalChanged, "HandleIsEnabledConditionalChanged" }, // 3066848086
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmSelect, "HandleRigPalmSelect" }, // 1980261599
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPalmUnselect, "HandleRigPalmUnselect" }, // 2850114561
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchSelect, "HandleRigPinchSelect" }, // 3139604617
		{ &Z_Construct_UFunction_UIsdkGrabInteractionRigComponent_HandleRigPinchUnselect, "HandleRigPinchUnselect" }, // 4228894839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabInteractionRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics

// ********** Begin Class UIsdkGrabInteractionRigComponent Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, Grabber), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grabber_MetaData), NewProp_Grabber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_RigComponent = { "RigComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, RigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigComponent_MetaData), NewProp_RigComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_HandPointerPose = { "HandPointerPose", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, HandPointerPose), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPointerPose_MetaData), NewProp_HandPointerPose_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_HmdDataSource = { "HmdDataSource", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, HmdDataSource), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HmdDataSource_MetaData), NewProp_HmdDataSource_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_ThumbTipSocketName = { "ThumbTipSocketName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, ThumbTipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbTipSocketName_MetaData), NewProp_ThumbTipSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_PinchAttachMesh = { "PinchAttachMesh", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, PinchAttachMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchAttachMesh_MetaData), NewProp_PinchAttachMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup = { "EnabledConditionalGroup", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, EnabledConditionalGroup), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledConditionalGroup_MetaData), NewProp_EnabledConditionalGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_IsActiveConditional = { "IsActiveConditional", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabInteractionRigComponent, IsActiveConditional), Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActiveConditional_MetaData), NewProp_IsActiveConditional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_Grabber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_RigComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_HandPointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_HmdDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_ThumbTipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_PinchAttachMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::NewProp_IsActiveConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkGrabInteractionRigComponent Property Definitions **********************
UObject* (*const Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::ClassParams = {
	&UIsdkGrabInteractionRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkGrabInteractionRigComponent::StaticRegisterNativesUIsdkGrabInteractionRigComponent()
{
	UClass* Class = UIsdkGrabInteractionRigComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkGrabInteractionRigComponent);
UIsdkGrabInteractionRigComponent::~UIsdkGrabInteractionRigComponent() {}
// ********** End Class UIsdkGrabInteractionRigComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabInteractionRigComponent, UIsdkGrabInteractionRigComponent::StaticClass, TEXT("UIsdkGrabInteractionRigComponent"), &Z_Registration_Info_UClass_UIsdkGrabInteractionRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabInteractionRigComponent), 2603216999U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h__Script_OculusInteractionPrebuilts_3479643003{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
