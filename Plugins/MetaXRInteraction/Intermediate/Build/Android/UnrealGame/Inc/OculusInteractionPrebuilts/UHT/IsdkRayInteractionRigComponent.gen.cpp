// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkRayInteractionRigComponent.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkRayInteractionRigComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTrackingDataSources();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayInteractionRigComponent Function BindDataSources *****************
struct Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics
{
	struct IsdkRayInteractionRigComponent_eventBindDataSources_Parms
	{
		FIsdkTrackingDataSources DataSources;
		TScriptInterface<IIsdkIHmdDataSource> HmdDataSourceIn;
		USceneComponent* AttachToComponent;
		FName AttachToComponentSocket;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Attaches given USceneComponent to the RayInteractor, binds the data sources for joints\n   * and HMD to it\n   * @param DataSources Data source for active hand/joint poses\n   * @param HmdDataSourceIn Data source for active HMD\n   * @param AttachToComponent Component to attach to\n   * @param AttachToComponentSocket Component socket name to attach to on given component\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Attaches given USceneComponent to the RayInteractor, binds the data sources for joints\nand HMD to it\n@param DataSources Data source for active hand/joint poses\n@param HmdDataSourceIn Data source for active HMD\n@param AttachToComponent Component to attach to\n@param AttachToComponentSocket Component socket name to attach to on given component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSources_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function BindDataSources constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataSources;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSourceIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachToComponentSocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BindDataSources constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BindDataSources Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_DataSources = { "DataSources", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventBindDataSources_Parms, DataSources), Z_Construct_UScriptStruct_FIsdkTrackingDataSources, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSources_MetaData), NewProp_DataSources_MetaData) }; // 450180261
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_HmdDataSourceIn = { "HmdDataSourceIn", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventBindDataSources_Parms, HmdDataSourceIn), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventBindDataSources_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_AttachToComponentSocket = { "AttachToComponentSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventBindDataSources_Parms, AttachToComponentSocket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_DataSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_HmdDataSourceIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::NewProp_AttachToComponentSocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::PropPointers) < 2048);
// ********** End Function BindDataSources Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractionRigComponent, nullptr, "BindDataSources", 	Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::IsdkRayInteractionRigComponent_eventBindDataSources_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::IsdkRayInteractionRigComponent_eventBindDataSources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractionRigComponent::execBindDataSources)
{
	P_GET_STRUCT_REF(FIsdkTrackingDataSources,Z_Param_Out_DataSources);
	P_GET_TINTERFACE_REF(IIsdkIHmdDataSource,Z_Param_Out_HmdDataSourceIn);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachToComponentSocket);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindDataSources(Z_Param_Out_DataSources,Z_Param_Out_HmdDataSourceIn,Z_Param_AttachToComponent,Z_Param_AttachToComponentSocket);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractionRigComponent Function BindDataSources *******************

// ********** Begin Class UIsdkRayInteractionRigComponent Function GetEnabledConditional ***********
struct Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics
{
	struct IsdkRayInteractionRigComponent_eventGetEnabledConditional_Parms
	{
		UIsdkConditionalGroupAll* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Retrieves the Conditional Group for if this component is enabled.\n   * @return UIsdkConditionalGroupAll* Conditional Group. All constituent conditionals of the group\n   * must be true for it to resolve true.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Retrieves the Conditional Group for if this component is enabled.\n@return UIsdkConditionalGroupAll* Conditional Group. All constituent conditionals of the group\nmust be true for it to resolve true." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventGetEnabledConditional_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::PropPointers) < 2048);
// ********** End Function GetEnabledConditional Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractionRigComponent, nullptr, "GetEnabledConditional", 	Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::IsdkRayInteractionRigComponent_eventGetEnabledConditional_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::IsdkRayInteractionRigComponent_eventGetEnabledConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractionRigComponent::execGetEnabledConditional)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalGroupAll**)Z_Param__Result=P_THIS->GetEnabledConditional();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractionRigComponent Function GetEnabledConditional *************

// ********** Begin Class UIsdkRayInteractionRigComponent Function HandleRigPinchSelect ************
struct Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics
{
	struct IsdkRayInteractionRigComponent_eventHandleRigPinchSelect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventHandleRigPinchSelect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPinchSelect Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractionRigComponent, nullptr, "HandleRigPinchSelect", 	Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::IsdkRayInteractionRigComponent_eventHandleRigPinchSelect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::IsdkRayInteractionRigComponent_eventHandleRigPinchSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractionRigComponent::execHandleRigPinchSelect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPinchSelect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractionRigComponent Function HandleRigPinchSelect **************

// ********** Begin Class UIsdkRayInteractionRigComponent Function HandleRigPinchUnselect **********
struct Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics
{
	struct IsdkRayInteractionRigComponent_eventHandleRigPinchUnselect_Parms
	{
		UIsdkRigComponent* IsdkRigComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::NewProp_IsdkRigComponent = { "IsdkRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractionRigComponent_eventHandleRigPinchUnselect_Parms, IsdkRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsdkRigComponent_MetaData), NewProp_IsdkRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::NewProp_IsdkRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers) < 2048);
// ********** End Function HandleRigPinchUnselect Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractionRigComponent, nullptr, "HandleRigPinchUnselect", 	Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::IsdkRayInteractionRigComponent_eventHandleRigPinchUnselect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::IsdkRayInteractionRigComponent_eventHandleRigPinchUnselect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractionRigComponent::execHandleRigPinchUnselect)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_IsdkRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRigPinchUnselect(Z_Param_IsdkRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractionRigComponent Function HandleRigPinchUnselect ************

// ********** Begin Class UIsdkRayInteractionRigComponent Function UpdateRayVisual *****************
struct Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Propagates state from Ray Interactor component to the Ray Visual component, along with\n   * pinch strength from parent RigComponent\n   * @see UIsdkRayVisualFunctionLibrary#UpdateRayVisualWithRayInteractor\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Propagates state from Ray Interactor component to the Ray Visual component, along with\npinch strength from parent RigComponent\n@see UIsdkRayVisualFunctionLibrary#UpdateRayVisualWithRayInteractor" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateRayVisual constinit property declarations ***********************
// ********** End Function UpdateRayVisual constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractionRigComponent, nullptr, "UpdateRayVisual", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractionRigComponent::execUpdateRayVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateRayVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractionRigComponent Function UpdateRayVisual *******************

// ********** Begin Class UIsdkRayInteractionRigComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent;
UClass* UIsdkRayInteractionRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkRayInteractionRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkRayInteractionRigComponent"),
			Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkRayInteractionRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent_NoRegister()
{
	return UIsdkRayInteractionRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkRayInteractionRigComponent\n * @brief Actor component that stores references to ray-related interaction components.\n *\n * Data sources and visualizers.\n * @see UIsdkRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "IncludePath", "Rig/IsdkRayInteractionRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkRayInteractionRigComponent\n@brief Actor component that stores references to ray-related interaction components.\n\nData sources and visualizers.\n@see UIsdkRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayInteractor_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Ray Interactor component reference, utilized for generating events and routing state\n   * from to other related components\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Ray Interactor component reference, utilized for generating events and routing state\nfrom to other related components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Reference to current Ray Visual component used to spawn and update the cursor and\n   * PinchArrow subcomponents\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Reference to current Ray Visual component used to spawn and update the cursor and\nPinchArrow subcomponents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayVisualClass_MetaData[] = {
		{ "Category", "InteractionSDK|Ray Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Subclass utilized to spawn the Ray Visual Component, may be derived class or Unreal\n   * blueprint\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Subclass utilized to spawn the Ray Visual Component, may be derived class or Unreal\nblueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HmdDataSource_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief HMD Data source to pull data from for current state and pose information for the active\n   * headset\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief HMD Data source to pull data from for current state and pose information for the active\nheadset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Reference to the parent RigComponent\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Reference to the parent RigComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledConditionalGroup_MetaData[] = {
		{ "BlueprintGetter", "GetEnabledConditional" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveConditional_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRayInteractionRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkRayInteractionRigComponent constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayInteractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayVisual;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RayVisualClass;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnabledConditionalGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsActiveConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkRayInteractionRigComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BindDataSources"), .Pointer = &UIsdkRayInteractionRigComponent::execBindDataSources },
		{ .NameUTF8 = UTF8TEXT("GetEnabledConditional"), .Pointer = &UIsdkRayInteractionRigComponent::execGetEnabledConditional },
		{ .NameUTF8 = UTF8TEXT("HandleRigPinchSelect"), .Pointer = &UIsdkRayInteractionRigComponent::execHandleRigPinchSelect },
		{ .NameUTF8 = UTF8TEXT("HandleRigPinchUnselect"), .Pointer = &UIsdkRayInteractionRigComponent::execHandleRigPinchUnselect },
		{ .NameUTF8 = UTF8TEXT("UpdateRayVisual"), .Pointer = &UIsdkRayInteractionRigComponent::execUpdateRayVisual },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRayInteractionRigComponent_BindDataSources, "BindDataSources" }, // 1401538292
		{ &Z_Construct_UFunction_UIsdkRayInteractionRigComponent_GetEnabledConditional, "GetEnabledConditional" }, // 247472960
		{ &Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchSelect, "HandleRigPinchSelect" }, // 1718016130
		{ &Z_Construct_UFunction_UIsdkRayInteractionRigComponent_HandleRigPinchUnselect, "HandleRigPinchUnselect" }, // 3778369603
		{ &Z_Construct_UFunction_UIsdkRayInteractionRigComponent_UpdateRayVisual, "UpdateRayVisual" }, // 4013683361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayInteractionRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics

// ********** Begin Class UIsdkRayInteractionRigComponent Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayInteractor = { "RayInteractor", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, RayInteractor), Z_Construct_UClass_UIsdkRayInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayInteractor_MetaData), NewProp_RayInteractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayVisual = { "RayVisual", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, RayVisual), Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayVisual_MetaData), NewProp_RayVisual_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayVisualClass = { "RayVisualClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, RayVisualClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayVisualClass_MetaData), NewProp_RayVisualClass_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_HmdDataSource = { "HmdDataSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, HmdDataSource), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HmdDataSource_MetaData), NewProp_HmdDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RigComponent = { "RigComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, RigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigComponent_MetaData), NewProp_RigComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup = { "EnabledConditionalGroup", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, EnabledConditionalGroup), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledConditionalGroup_MetaData), NewProp_EnabledConditionalGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_IsActiveConditional = { "IsActiveConditional", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractionRigComponent, IsActiveConditional), Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActiveConditional_MetaData), NewProp_IsActiveConditional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RayVisualClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_HmdDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_RigComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::NewProp_IsActiveConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkRayInteractionRigComponent Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::ClassParams = {
	&UIsdkRayInteractionRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkRayInteractionRigComponent::StaticRegisterNativesUIsdkRayInteractionRigComponent()
{
	UClass* Class = UIsdkRayInteractionRigComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkRayInteractionRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkRayInteractionRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkRayInteractionRigComponent);
UIsdkRayInteractionRigComponent::~UIsdkRayInteractionRigComponent() {}
// ********** End Class UIsdkRayInteractionRigComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayInteractionRigComponent, UIsdkRayInteractionRigComponent::StaticClass, TEXT("UIsdkRayInteractionRigComponent"), &Z_Registration_Info_UClass_UIsdkRayInteractionRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayInteractionRigComponent), 3298174163U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h__Script_OculusInteractionPrebuilts_3312171268{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRayInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
