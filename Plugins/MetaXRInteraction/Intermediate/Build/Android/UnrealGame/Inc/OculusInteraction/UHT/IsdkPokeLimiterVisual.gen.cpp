// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkPokeLimiterVisual.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkPokeLimiterVisual() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSyntheticHand_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPokeLimiterVisual Function GetDataSource ****************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics
{
	struct IsdkPokeLimiterVisual_eventGetDataSource_Parms
	{
		UIsdkHandDataSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns the Hand Data source connected to the hand being used in the interaction\n   * @return UIsdkHandDataSource* Reference to the current hand data source (related to a\n   * PokeInteractor) this limiter is acting upon\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the Hand Data source connected to the hand being used in the interaction\n@return UIsdkHandDataSource* Reference to the current hand data source (related to a\nPokeInteractor) this limiter is acting upon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDataSource constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDataSource constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDataSource Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventGetDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::PropPointers) < 2048);
// ********** End Function GetDataSource Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "GetDataSource", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::IsdkPokeLimiterVisual_eventGetDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::IsdkPokeLimiterVisual_eventGetDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execGetDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandDataSource**)Z_Param__Result=P_THIS->GetDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function GetDataSource ******************************

// ********** Begin Class UIsdkPokeLimiterVisual Function GetPokeInteractor ************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics
{
	struct IsdkPokeLimiterVisual_eventGetPokeInteractor_Parms
	{
		UIsdkPokeInteractor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns the PokeInteractor currently engaged\n   * @return UIsdkPokeInteractor* Reference to the current PokeInteractor this limiter is acting\n   * upon\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the PokeInteractor currently engaged\n@return UIsdkPokeInteractor* Reference to the current PokeInteractor this limiter is acting\nupon" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventGetPokeInteractor_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::PropPointers) < 2048);
// ********** End Function GetPokeInteractor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "GetPokeInteractor", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::IsdkPokeLimiterVisual_eventGetPokeInteractor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::IsdkPokeLimiterVisual_eventGetPokeInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execGetPokeInteractor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractor**)Z_Param__Result=P_THIS->GetPokeInteractor();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function GetPokeInteractor **************************

// ********** Begin Class UIsdkPokeLimiterVisual Function GetSyntheticHand *************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics
{
	struct IsdkPokeLimiterVisual_eventGetSyntheticHand_Parms
	{
		UIsdkSyntheticHand* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Returns reference to the SyntheticHand being used in the interaction\n   * @return UIsdkSyntheticHand* Reference to the current synthetic hand (related to a\n   * PokeInteractor) this limiter is acting upon\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns reference to the SyntheticHand being used in the interaction\n@return UIsdkSyntheticHand* Reference to the current synthetic hand (related to a\nPokeInteractor) this limiter is acting upon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSyntheticHand constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSyntheticHand constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSyntheticHand Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventGetSyntheticHand_Parms, ReturnValue), Z_Construct_UClass_UIsdkSyntheticHand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::PropPointers) < 2048);
// ********** End Function GetSyntheticHand Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "GetSyntheticHand", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::IsdkPokeLimiterVisual_eventGetSyntheticHand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::IsdkPokeLimiterVisual_eventGetSyntheticHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execGetSyntheticHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkSyntheticHand**)Z_Param__Result=P_THIS->GetSyntheticHand();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function GetSyntheticHand ***************************

// ********** Begin Class UIsdkPokeLimiterVisual Function SetDataSource ****************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics
{
	struct IsdkPokeLimiterVisual_eventSetDataSource_Parms
	{
		UIsdkHandDataSource* InHandDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintSetter", "" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Sets the Hand Data source connected to the hand being used in the interaction, will set\n   * dependencies after\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the Hand Data source connected to the hand being used in the interaction, will set\ndependencies after" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandDataSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDataSource constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InHandDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDataSource constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDataSource Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::NewProp_InHandDataSource = { "InHandDataSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventSetDataSource_Parms, InHandDataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandDataSource_MetaData), NewProp_InHandDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::NewProp_InHandDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::PropPointers) < 2048);
// ********** End Function SetDataSource Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "SetDataSource", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::IsdkPokeLimiterVisual_eventSetDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::IsdkPokeLimiterVisual_eventSetDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execSetDataSource)
{
	P_GET_OBJECT(UIsdkHandDataSource,Z_Param_InHandDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataSource(Z_Param_InHandDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function SetDataSource ******************************

// ********** Begin Class UIsdkPokeLimiterVisual Function SetPokeInteractor ************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics
{
	struct IsdkPokeLimiterVisual_eventSetPokeInteractor_Parms
	{
		UIsdkPokeInteractor* InPokeInteractor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintSetter", "" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Sets the PokeInteractor to be engaged with this limiter, will set dependencies after\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the PokeInteractor to be engaged with this limiter, will set dependencies after" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPokeInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPokeInteractor constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPokeInteractor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPokeInteractor constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPokeInteractor Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::NewProp_InPokeInteractor = { "InPokeInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventSetPokeInteractor_Parms, InPokeInteractor), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPokeInteractor_MetaData), NewProp_InPokeInteractor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::NewProp_InPokeInteractor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::PropPointers) < 2048);
// ********** End Function SetPokeInteractor Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "SetPokeInteractor", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::IsdkPokeLimiterVisual_eventSetPokeInteractor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::IsdkPokeLimiterVisual_eventSetPokeInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execSetPokeInteractor)
{
	P_GET_OBJECT(UIsdkPokeInteractor,Z_Param_InPokeInteractor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokeInteractor(Z_Param_InPokeInteractor);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function SetPokeInteractor **************************

// ********** Begin Class UIsdkPokeLimiterVisual Function SetSyntheticHand *************************
struct Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics
{
	struct IsdkPokeLimiterVisual_eventSetSyntheticHand_Parms
	{
		UIsdkSyntheticHand* InSyntheticHand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintSetter", "" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Sets the SyntheticHand to be used in the interaction, will set dependencies after\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the SyntheticHand to be used in the interaction, will set dependencies after" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSyntheticHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSyntheticHand constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSyntheticHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSyntheticHand constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSyntheticHand Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::NewProp_InSyntheticHand = { "InSyntheticHand", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeLimiterVisual_eventSetSyntheticHand_Parms, InSyntheticHand), Z_Construct_UClass_UIsdkSyntheticHand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSyntheticHand_MetaData), NewProp_InSyntheticHand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::NewProp_InSyntheticHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::PropPointers) < 2048);
// ********** End Function SetSyntheticHand Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeLimiterVisual, nullptr, "SetSyntheticHand", 	Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::IsdkPokeLimiterVisual_eventSetSyntheticHand_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::IsdkPokeLimiterVisual_eventSetSyntheticHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeLimiterVisual::execSetSyntheticHand)
{
	P_GET_OBJECT(UIsdkSyntheticHand,Z_Param_InSyntheticHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSyntheticHand(Z_Param_InSyntheticHand);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeLimiterVisual Function SetSyntheticHand ***************************

// ********** Begin Class UIsdkPokeLimiterVisual ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeLimiterVisual;
UClass* UIsdkPokeLimiterVisual::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeLimiterVisual;
	if (!Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkPokeLimiterVisual"),
			Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.InnerSingleton,
			StaticRegisterNativesUIsdkPokeLimiterVisual,
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
	return Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister()
{
	return UIsdkPokeLimiterVisual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkPokeLimiterVisual\n * @brief An ActorComponent that is typically attached to a RigComponent, and will limit linked hand\n * visuals from passing through poked surfaces.\n *\n * The hand visual will be snapped to the poked surface regardless of how far past the user moves\n * their hand.\n *\n * This class is now deprecated in favor of utilizing the IsdkPokeLimiterRigModifier\n * @see UIsdkRigComponent\n * @see UIsdkPokeInteractor\n * @addtogroup InteractionSDK\n *\n * Deprecated v79\n */" },
#endif
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Utilize IsdkPokeLimiterRigModifier instead" },
		{ "DisplayName", "ISDK Poke Limiter Visual" },
		{ "IncludePath", "Interaction/IsdkPokeLimiterVisual.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkPokeLimiterVisual\n@brief An ActorComponent that is typically attached to a RigComponent, and will limit linked hand\nvisuals from passing through poked surfaces.\n\nThe hand visual will be snapped to the poked surface regardless of how far past the user moves\ntheir hand.\n\nThis class is now deprecated in favor of utilizing the IsdkPokeLimiterRigModifier\n@see UIsdkRigComponent\n@see UIsdkPokeInteractor\n@addtogroup InteractionSDK\n\nDeprecated v79" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractor_MetaData[] = {
		{ "BlueprintGetter", "GetPokeInteractor" },
		{ "BlueprintSetter", "SetPokeInteractor" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyntheticHand_MetaData[] = {
		{ "BlueprintGetter", "GetSyntheticHand" },
		{ "BlueprintSetter", "SetSyntheticHand" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[] = {
		{ "BlueprintGetter", "GetDataSource" },
		{ "BlueprintSetter", "SetDataSource" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Updated_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeLimiterVisual.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkPokeLimiterVisual constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SyntheticHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataSource;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Updated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkPokeLimiterVisual constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDataSource"), .Pointer = &UIsdkPokeLimiterVisual::execGetDataSource },
		{ .NameUTF8 = UTF8TEXT("GetPokeInteractor"), .Pointer = &UIsdkPokeLimiterVisual::execGetPokeInteractor },
		{ .NameUTF8 = UTF8TEXT("GetSyntheticHand"), .Pointer = &UIsdkPokeLimiterVisual::execGetSyntheticHand },
		{ .NameUTF8 = UTF8TEXT("SetDataSource"), .Pointer = &UIsdkPokeLimiterVisual::execSetDataSource },
		{ .NameUTF8 = UTF8TEXT("SetPokeInteractor"), .Pointer = &UIsdkPokeLimiterVisual::execSetPokeInteractor },
		{ .NameUTF8 = UTF8TEXT("SetSyntheticHand"), .Pointer = &UIsdkPokeLimiterVisual::execSetSyntheticHand },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetDataSource, "GetDataSource" }, // 3701058996
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetPokeInteractor, "GetPokeInteractor" }, // 1539460274
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_GetSyntheticHand, "GetSyntheticHand" }, // 2914668030
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetDataSource, "SetDataSource" }, // 2285427908
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetPokeInteractor, "SetPokeInteractor" }, // 3189125206
		{ &Z_Construct_UFunction_UIsdkPokeLimiterVisual_SetSyntheticHand, "SetSyntheticHand" }, // 1249407985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeLimiterVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics

// ********** Begin Class UIsdkPokeLimiterVisual Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_PokeInteractor = { "PokeInteractor", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterVisual, PokeInteractor), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractor_MetaData), NewProp_PokeInteractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_SyntheticHand = { "SyntheticHand", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterVisual, SyntheticHand), Z_Construct_UClass_UIsdkSyntheticHand_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyntheticHand_MetaData), NewProp_SyntheticHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterVisual, DataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSource_MetaData), NewProp_DataSource_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeLimiterVisual, Updated), Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Updated_MetaData), NewProp_Updated_MetaData) }; // 3062544910
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_PokeInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_SyntheticHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_DataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::NewProp_Updated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::PropPointers) < 2048);
// ********** End Class UIsdkPokeLimiterVisual Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::ClassParams = {
	&UIsdkPokeLimiterVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::Class_MetaDataParams)
};
void UIsdkPokeLimiterVisual::StaticRegisterNativesUIsdkPokeLimiterVisual()
{
	UClass* Class = UIsdkPokeLimiterVisual::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.OuterSingleton, Z_Construct_UClass_UIsdkPokeLimiterVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeLimiterVisual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkPokeLimiterVisual);
UIsdkPokeLimiterVisual::~UIsdkPokeLimiterVisual() {}
// ********** End Class UIsdkPokeLimiterVisual *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeLimiterVisual, UIsdkPokeLimiterVisual::StaticClass, TEXT("UIsdkPokeLimiterVisual"), &Z_Registration_Info_UClass_UIsdkPokeLimiterVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeLimiterVisual), 2240773612U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h__Script_OculusInteraction_45723116{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeLimiterVisual_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
