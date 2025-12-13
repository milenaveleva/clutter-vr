// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkSceneInteractableComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkSceneInteractableComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSceneInteractableInteractorCountChanged ******************************
struct Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms
	{
		UIsdkSceneInteractableComponent* Sender;
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSceneInteractableInteractorCountChanged constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSceneInteractableInteractorCountChanged constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSceneInteractableInteractorCountChanged Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms, Sender), Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSceneInteractableInteractorCountChanged Property Definitions ***********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "SceneInteractableInteractorCountChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSceneInteractableInteractorCountChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractableInteractorCountChanged, UIsdkSceneInteractableComponent* Sender, int32 NewCount)
{
	struct _Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms
	{
		UIsdkSceneInteractableComponent* Sender;
		int32 NewCount;
	};
	_Script_OculusInteraction_eventSceneInteractableInteractorCountChanged_Parms Parms;
	Parms.Sender=Sender;
	Parms.NewCount=NewCount;
	SceneInteractableInteractorCountChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSceneInteractableInteractorCountChanged ********************************

// ********** Begin Delegate FSceneInteractableEnabledStateChanged *********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms
	{
		UIsdkSceneInteractableComponent* Sender;
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSceneInteractableEnabledStateChanged constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSceneInteractableEnabledStateChanged constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSceneInteractableEnabledStateChanged Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms, Sender), Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
void Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms), &Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSceneInteractableEnabledStateChanged Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "SceneInteractableEnabledStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSceneInteractableEnabledStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractableEnabledStateChanged, UIsdkSceneInteractableComponent* Sender, bool NewState)
{
	struct _Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms
	{
		UIsdkSceneInteractableComponent* Sender;
		bool NewState;
	};
	_Script_OculusInteraction_eventSceneInteractableEnabledStateChanged_Parms Parms;
	Parms.Sender=Sender;
	Parms.NewState=NewState ? true : false;
	SceneInteractableEnabledStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSceneInteractableEnabledStateChanged ***********************************

// ********** Begin Class UIsdkSceneInteractableComponent Function Disable *************************
struct Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Disables this interactable component, broadcasts EnabledStateChangedDelegate\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Disables this interactable component, broadcasts EnabledStateChangedDelegate" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Disable constinit property declarations *******************************
// ********** End Function Disable constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractableComponent, nullptr, "Disable", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractableComponent::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractableComponent Function Disable ***************************

// ********** Begin Class UIsdkSceneInteractableComponent Function Enable **************************
struct Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Enables this interactable component, broadcasts EnabledStateChangedDelegate\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Enables this interactable component, broadcasts EnabledStateChangedDelegate" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Enable constinit property declarations ********************************
// ********** End Function Enable constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractableComponent, nullptr, "Enable", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractableComponent::execEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enable();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractableComponent Function Enable ****************************

// ********** Begin Class UIsdkSceneInteractableComponent Function GetGameplayTagContainer_Implementation 
struct Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics
{
	struct IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms
	{
		FGameplayTagContainer ContainerOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Retrieves the current GameplayTag container for this component. Implemented from\n   * interface\n   * @see IIsdkIGameplayTagContainer\n   * @param ContainerOut GameplayTag Container returned as reference.\n   * @return bool Whether or not the returned GameplayTag container is valid and/or contains tags.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Retrieves the current GameplayTag container for this component. Implemented from\ninterface\n@see IIsdkIGameplayTagContainer\n@param ContainerOut GameplayTag Container returned as reference.\n@return bool Whether or not the returned GameplayTag container is valid and/or contains tags." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGameplayTagContainer_Implementation constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGameplayTagContainer_Implementation constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGameplayTagContainer_Implementation Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
void Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms), &Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers) < 2048);
// ********** End Function GetGameplayTagContainer_Implementation Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractableComponent, nullptr, "GetGameplayTagContainer_Implementation", 	Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::IsdkSceneInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractableComponent::execGetGameplayTagContainer_Implementation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTagContainer_Implementation(Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractableComponent Function GetGameplayTagContainer_Implementation 

// ********** Begin Class UIsdkSceneInteractableComponent Function GetInteractableState ************
struct Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics
{
	struct IsdkSceneInteractableComponent_eventGetInteractableState_Parms
	{
		EIsdkInteractableState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK|Scene Interactable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns the current state of this interactable as an enum, implemented from interface,\n   * calls GetCurrentState()\n   * @see IIsdkIInteractableState\n   * @return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the current state of this interactable as an enum, implemented from interface,\ncalls GetCurrentState()\n@see IIsdkIInteractableState\n@return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteractableState constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteractableState constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteractableState Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkSceneInteractableComponent_eventGetInteractableState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 894680486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::PropPointers) < 2048);
// ********** End Function GetInteractableState Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractableComponent, nullptr, "GetInteractableState", 	Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::IsdkSceneInteractableComponent_eventGetInteractableState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::IsdkSceneInteractableComponent_eventGetInteractableState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractableComponent::execGetInteractableState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkInteractableState*)Z_Param__Result=P_THIS->GetInteractableState();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractableComponent Function GetInteractableState **************

// ********** Begin Class UIsdkSceneInteractableComponent Function IsEnabled ***********************
struct Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics
{
	struct IsdkSceneInteractableComponent_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns whether or not this interactable component is currently enabled\n   * @return bool If this scene interactable component is enabled\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns whether or not this interactable component is currently enabled\n@return bool If this scene interactable component is enabled" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsEnabled constinit property declarations *****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsEnabled constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsEnabled Property Definitions ****************************************
void Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkSceneInteractableComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkSceneInteractableComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsEnabled Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractableComponent, nullptr, "IsEnabled", 	Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::IsdkSceneInteractableComponent_eventIsEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::IsdkSceneInteractableComponent_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractableComponent::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractableComponent Function IsEnabled *************************

// ********** Begin Class UIsdkSceneInteractableComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkSceneInteractableComponent;
UClass* UIsdkSceneInteractableComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkSceneInteractableComponent;
	if (!Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkSceneInteractableComponent"),
			Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.InnerSingleton,
			StaticRegisterNativesUIsdkSceneInteractableComponent,
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
	return Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister()
{
	return UIsdkSceneInteractableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkSceneInteractableComponent\n * @brief Base class for interactables not tracked by the API\n *\n * Scene component used as base class for interactable components not being tracked by the API.\n * Provides functions and methods for getting current state, delegates, querying relationships and\n * GameplayTag containers. Relationships are established and tracked between\n * UIsdkSceneInteractableComponents and UIsdkSceneInteractorComponents by this component.\n *\n * @see IIsdkIGameplayTagContainer\n * @see IIsdkIInteractableState\n * @see UIsdkSceneInteractorComponent\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "DisplayName", "ISDK Scene Interactable" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkSceneInteractableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkSceneInteractableComponent\n@brief Base class for interactables not tracked by the API\n\nScene component used as base class for interactable components not being tracked by the API.\nProvides functions and methods for getting current state, delegates, querying relationships and\nGameplayTag containers. Relationships are established and tracked between\nUIsdkSceneInteractableComponents and UIsdkSceneInteractorComponents by this component.\n\n@see IIsdkIGameplayTagContainer\n@see IIsdkIInteractableState\n@see UIsdkSceneInteractorComponent\n@addtogroup InteractionSDK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateChangedDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delegate broadcast when the state of this interactable changes */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate broadcast when the state of this interactable changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorCountChangedDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delegate broadcast when the number of interactors engaged with this interactable changes */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate broadcast when the number of interactors engaged with this interactable changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledStateChangedDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delegate broadcast when this interactable becomes enabled or disabled */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate broadcast when this interactable becomes enabled or disabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GameplayTags used for labeling and driving interaction behavior. Returned by\n// IIsdkIGameplayTagContainer::GetGameplayTagContainer().\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayTags used for labeling and driving interaction behavior. Returned by\nIIsdkIGameplayTagContainer::GetGameplayTagContainer()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "BlueprintGetter", "GetInteractableState" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The current interaction state of this interactable, driven by interactor events */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current interaction state of this interactable, driven by interactor events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "BlueprintGetter", "IsEnabled" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractableComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkSceneInteractableComponent constinit property declarations **********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StateChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorCountChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnabledStateChangedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkSceneInteractableComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Disable"), .Pointer = &UIsdkSceneInteractableComponent::execDisable },
		{ .NameUTF8 = UTF8TEXT("Enable"), .Pointer = &UIsdkSceneInteractableComponent::execEnable },
		{ .NameUTF8 = UTF8TEXT("GetGameplayTagContainer_Implementation"), .Pointer = &UIsdkSceneInteractableComponent::execGetGameplayTagContainer_Implementation },
		{ .NameUTF8 = UTF8TEXT("GetInteractableState"), .Pointer = &UIsdkSceneInteractableComponent::execGetInteractableState },
		{ .NameUTF8 = UTF8TEXT("IsEnabled"), .Pointer = &UIsdkSceneInteractableComponent::execIsEnabled },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkSceneInteractableComponent_Disable, "Disable" }, // 1696140692
		{ &Z_Construct_UFunction_UIsdkSceneInteractableComponent_Enable, "Enable" }, // 3550952373
		{ &Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetGameplayTagContainer_Implementation, "GetGameplayTagContainer_Implementation" }, // 2173675544
		{ &Z_Construct_UFunction_UIsdkSceneInteractableComponent_GetInteractableState, "GetInteractableState" }, // 2195657732
		{ &Z_Construct_UFunction_UIsdkSceneInteractableComponent_IsEnabled, "IsEnabled" }, // 658144837
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkSceneInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics

// ********** Begin Class UIsdkSceneInteractableComponent Property Definitions *********************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_StateChangedDelegate = { "StateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractableComponent, StateChangedDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateChangedDelegate_MetaData), NewProp_StateChangedDelegate_MetaData) }; // 2653977970
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_InteractorCountChangedDelegate = { "InteractorCountChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractableComponent, InteractorCountChangedDelegate), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableInteractorCountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorCountChangedDelegate_MetaData), NewProp_InteractorCountChangedDelegate_MetaData) }; // 3549404183
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_EnabledStateChangedDelegate = { "EnabledStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractableComponent, EnabledStateChangedDelegate), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractableEnabledStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledStateChangedDelegate_MetaData), NewProp_EnabledStateChangedDelegate_MetaData) }; // 1790636385
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_InteractableTags = { "InteractableTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractableComponent, InteractableTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableTags_MetaData), NewProp_InteractableTags_MetaData) }; // 3438578166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractableComponent, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 894680486
void Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((UIsdkSceneInteractableComponent*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkSceneInteractableComponent), &Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_StateChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_InteractorCountChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_EnabledStateChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_InteractableTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkSceneInteractableComponent Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister, (int32)VTABLE_OFFSET(UIsdkSceneInteractableComponent, IIsdkIGameplayTagContainer), false },  // 899830290
	{ Z_Construct_UClass_UIsdkIInteractableState_NoRegister, (int32)VTABLE_OFFSET(UIsdkSceneInteractableComponent, IIsdkIInteractableState), false },  // 2740697658
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::ClassParams = {
	&UIsdkSceneInteractableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::Class_MetaDataParams)
};
void UIsdkSceneInteractableComponent::StaticRegisterNativesUIsdkSceneInteractableComponent()
{
	UClass* Class = UIsdkSceneInteractableComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.OuterSingleton, Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkSceneInteractableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkSceneInteractableComponent);
UIsdkSceneInteractableComponent::~UIsdkSceneInteractableComponent() {}
// ********** End Class UIsdkSceneInteractableComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkSceneInteractableComponent, UIsdkSceneInteractableComponent::StaticClass, TEXT("UIsdkSceneInteractableComponent"), &Z_Registration_Info_UClass_UIsdkSceneInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkSceneInteractableComponent), 554918686U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h__Script_OculusInteraction_340266966{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
