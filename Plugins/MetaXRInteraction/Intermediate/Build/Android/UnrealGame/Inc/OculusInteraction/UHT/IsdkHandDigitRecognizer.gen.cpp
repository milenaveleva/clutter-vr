// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandDigitRecognizer.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandDigitRecognizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRangeParams();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandDigitRecognizer Function GetNormalizedRawValue ******************
struct Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics
{
	struct IsdkHandDigitRecognizer_eventGetNormalizedRawValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the raw value normalized by the recognizer's expected range */" },
#endif
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the raw value normalized by the recognizer's expected range" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNormalizedRawValue constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNormalizedRawValue constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNormalizedRawValue Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDigitRecognizer_eventGetNormalizedRawValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::PropPointers) < 2048);
// ********** End Function GetNormalizedRawValue Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDigitRecognizer, nullptr, "GetNormalizedRawValue", 	Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::IsdkHandDigitRecognizer_eventGetNormalizedRawValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::IsdkHandDigitRecognizer_eventGetNormalizedRawValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDigitRecognizer::execGetNormalizedRawValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNormalizedRawValue();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDigitRecognizer Function GetNormalizedRawValue ********************

// ********** Begin Class UIsdkHandDigitRecognizer Function GetRawExpectedRange ********************
struct Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics
{
	struct IsdkHandDigitRecognizer_eventGetRawExpectedRange_Parms
	{
		FVector2f ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the expected range of the recognizer, represented by min/max */" },
#endif
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the expected range of the recognizer, represented by min/max" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRawExpectedRange constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRawExpectedRange constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRawExpectedRange Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDigitRecognizer_eventGetRawExpectedRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::PropPointers) < 2048);
// ********** End Function GetRawExpectedRange Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDigitRecognizer, nullptr, "GetRawExpectedRange", 	Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::IsdkHandDigitRecognizer_eventGetRawExpectedRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::IsdkHandDigitRecognizer_eventGetRawExpectedRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDigitRecognizer::execGetRawExpectedRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2f*)Z_Param__Result=P_THIS->GetRawExpectedRange();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDigitRecognizer Function GetRawExpectedRange **********************

// ********** Begin Class UIsdkHandDigitRecognizer Function GetRawValue ****************************
struct Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics
{
	struct IsdkHandDigitRecognizer_eventGetRawValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the raw value of the recognizer */" },
#endif
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the raw value of the recognizer" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRawValue constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRawValue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRawValue Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDigitRecognizer_eventGetRawValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::PropPointers) < 2048);
// ********** End Function GetRawValue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDigitRecognizer, nullptr, "GetRawValue", 	Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::IsdkHandDigitRecognizer_eventGetRawValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::IsdkHandDigitRecognizer_eventGetRawValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDigitRecognizer::execGetRawValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRawValue();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDigitRecognizer Function GetRawValue ******************************

// ********** Begin Class UIsdkHandDigitRecognizer Function IsActive *******************************
struct Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics
{
	struct IsdkHandDigitRecognizer_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether or not the API recognizer is active */" },
#endif
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the API recognizer is active" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsActive constinit property declarations ******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsActive constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsActive Property Definitions *****************************************
void Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandDigitRecognizer_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandDigitRecognizer_eventIsActive_Parms), &Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::PropPointers) < 2048);
// ********** End Function IsActive Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDigitRecognizer, nullptr, "IsActive", 	Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::IsdkHandDigitRecognizer_eventIsActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::IsdkHandDigitRecognizer_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDigitRecognizer::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDigitRecognizer Function IsActive *********************************

// ********** Begin Class UIsdkHandDigitRecognizer Function UpdateState ****************************
struct Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics
{
	struct IsdkHandDigitRecognizer_eventUpdateState_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Primary driver for updating the recognizer (including instantiating the API implementation if\n   * needed), needs to be called externally */" },
#endif
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary driver for updating the recognizer (including instantiating the API implementation if\n  * needed), needs to be called externally" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateState constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateState constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateState Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDigitRecognizer_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::PropPointers) < 2048);
// ********** End Function UpdateState Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDigitRecognizer, nullptr, "UpdateState", 	Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::IsdkHandDigitRecognizer_eventUpdateState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::IsdkHandDigitRecognizer_eventUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDigitRecognizer::execUpdateState)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateState(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDigitRecognizer Function UpdateState ******************************

// ********** Begin Class UIsdkHandDigitRecognizer *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandDigitRecognizer;
UClass* UIsdkHandDigitRecognizer::GetPrivateStaticClass()
{
	using TClass = UIsdkHandDigitRecognizer;
	if (!Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandDigitRecognizer"),
			Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.InnerSingleton,
			StaticRegisterNativesUIsdkHandDigitRecognizer,
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
	return Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer_NoRegister()
{
	return UIsdkHandDigitRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Container for API-driven Digit Recognizer\n */" },
#endif
		{ "IncludePath", "HandPoseDetection/IsdkHandDigitRecognizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for API-driven Digit Recognizer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Hand Visual Component referenced during digit recognition */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Hand Visual Component referenced during digit recognition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeParameters_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Struct of upper and lower tolerances and limits during digit recognition */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandDigitRecognizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct of upper and lower tolerances and limits during digit recognition" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandDigitRecognizer constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RangeParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkHandDigitRecognizer constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNormalizedRawValue"), .Pointer = &UIsdkHandDigitRecognizer::execGetNormalizedRawValue },
		{ .NameUTF8 = UTF8TEXT("GetRawExpectedRange"), .Pointer = &UIsdkHandDigitRecognizer::execGetRawExpectedRange },
		{ .NameUTF8 = UTF8TEXT("GetRawValue"), .Pointer = &UIsdkHandDigitRecognizer::execGetRawValue },
		{ .NameUTF8 = UTF8TEXT("IsActive"), .Pointer = &UIsdkHandDigitRecognizer::execIsActive },
		{ .NameUTF8 = UTF8TEXT("UpdateState"), .Pointer = &UIsdkHandDigitRecognizer::execUpdateState },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetNormalizedRawValue, "GetNormalizedRawValue" }, // 57922314
		{ &Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawExpectedRange, "GetRawExpectedRange" }, // 643127888
		{ &Z_Construct_UFunction_UIsdkHandDigitRecognizer_GetRawValue, "GetRawValue" }, // 3651884688
		{ &Z_Construct_UFunction_UIsdkHandDigitRecognizer_IsActive, "IsActive" }, // 3341721049
		{ &Z_Construct_UFunction_UIsdkHandDigitRecognizer_UpdateState, "UpdateState" }, // 848466990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandDigitRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics

// ********** Begin Class UIsdkHandDigitRecognizer Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x001100000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDigitRecognizer, HandMesh), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMesh_MetaData), NewProp_HandMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::NewProp_RangeParameters = { "RangeParameters", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDigitRecognizer, RangeParameters), Z_Construct_UScriptStruct_FIsdkDigitRangeParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeParameters_MetaData), NewProp_RangeParameters_MetaData) }; // 1998521608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::NewProp_HandMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::NewProp_RangeParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::PropPointers) < 2048);
// ********** End Class UIsdkHandDigitRecognizer Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::ClassParams = {
	&UIsdkHandDigitRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::Class_MetaDataParams)
};
void UIsdkHandDigitRecognizer::StaticRegisterNativesUIsdkHandDigitRecognizer()
{
	UClass* Class = UIsdkHandDigitRecognizer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer()
{
	if (!Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.OuterSingleton, Z_Construct_UClass_UIsdkHandDigitRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandDigitRecognizer.OuterSingleton;
}
UIsdkHandDigitRecognizer::UIsdkHandDigitRecognizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandDigitRecognizer);
UIsdkHandDigitRecognizer::~UIsdkHandDigitRecognizer() {}
// ********** End Class UIsdkHandDigitRecognizer ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandDigitRecognizer, UIsdkHandDigitRecognizer::StaticClass, TEXT("UIsdkHandDigitRecognizer"), &Z_Registration_Info_UClass_UIsdkHandDigitRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandDigitRecognizer), 3040151446U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h__Script_OculusInteraction_3813302145{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandDigitRecognizer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
