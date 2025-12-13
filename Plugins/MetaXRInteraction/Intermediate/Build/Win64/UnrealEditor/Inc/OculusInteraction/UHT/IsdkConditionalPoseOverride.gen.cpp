// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalPoseOverride.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkConditionalPoseOverride() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalPoseOverride Function GetJointsOverride ******************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics
{
	struct IsdkConditionalPoseOverride_eventGetJointsOverride_Parms
	{
		TArray<FTransform> JointsOverriddenOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns a boolean representing if a joint override is currently active, passing an array\n   * of Transforms by reference of the current override\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns a boolean representing if a joint override is currently active, passing an array\n* of Transforms by reference of the current override" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetJointsOverride constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointsOverriddenOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointsOverriddenOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetJointsOverride constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetJointsOverride Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_JointsOverriddenOut_Inner = { "JointsOverriddenOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_JointsOverriddenOut = { "JointsOverriddenOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalPoseOverride_eventGetJointsOverride_Parms, JointsOverriddenOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditionalPoseOverride_eventGetJointsOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalPoseOverride_eventGetJointsOverride_Parms), &Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_JointsOverriddenOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_JointsOverriddenOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::PropPointers) < 2048);
// ********** End Function GetJointsOverride Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "GetJointsOverride", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::IsdkConditionalPoseOverride_eventGetJointsOverride_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::IsdkConditionalPoseOverride_eventGetJointsOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execGetJointsOverride)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_JointsOverriddenOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetJointsOverride(Z_Param_Out_JointsOverriddenOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function GetJointsOverride ********************

// ********** Begin Class UIsdkConditionalPoseOverride Function GetRootOverride ********************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics
{
	struct IsdkConditionalPoseOverride_eventGetRootOverride_Parms
	{
		FTransform TransformOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns a boolean representing if a root pose override is currently active, passing a\n   * Transform by reference of the current override\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns a boolean representing if a root pose override is currently active, passing a\n* Transform by reference of the current override" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRootOverride constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRootOverride constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRootOverride Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_TransformOut = { "TransformOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalPoseOverride_eventGetRootOverride_Parms, TransformOut), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditionalPoseOverride_eventGetRootOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalPoseOverride_eventGetRootOverride_Parms), &Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_TransformOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::PropPointers) < 2048);
// ********** End Function GetRootOverride Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "GetRootOverride", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::IsdkConditionalPoseOverride_eventGetRootOverride_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::IsdkConditionalPoseOverride_eventGetRootOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execGetRootOverride)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRootOverride(Z_Param_Out_TransformOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function GetRootOverride **********************

// ********** Begin Class UIsdkConditionalPoseOverride Function IsJointsOverrideActive *************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics
{
	struct IsdkConditionalPoseOverride_eventIsJointsOverrideActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns whether or not there is an active joint override\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns whether or not there is an active joint override" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsJointsOverrideActive constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsJointsOverrideActive constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsJointsOverrideActive Property Definitions ***************************
void Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditionalPoseOverride_eventIsJointsOverrideActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalPoseOverride_eventIsJointsOverrideActive_Parms), &Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::PropPointers) < 2048);
// ********** End Function IsJointsOverrideActive Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "IsJointsOverrideActive", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::IsdkConditionalPoseOverride_eventIsJointsOverrideActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::IsdkConditionalPoseOverride_eventIsJointsOverrideActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execIsJointsOverrideActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsJointsOverrideActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function IsJointsOverrideActive ***************

// ********** Begin Class UIsdkConditionalPoseOverride Function IsRootOverrideActive ***************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics
{
	struct IsdkConditionalPoseOverride_eventIsRootOverrideActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns whether or not there is an active root pose override\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns whether or not there is an active root pose override" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsRootOverrideActive constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRootOverrideActive constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRootOverrideActive Property Definitions *****************************
void Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditionalPoseOverride_eventIsRootOverrideActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalPoseOverride_eventIsRootOverrideActive_Parms), &Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::PropPointers) < 2048);
// ********** End Function IsRootOverrideActive Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "IsRootOverrideActive", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::IsdkConditionalPoseOverride_eventIsRootOverrideActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::IsdkConditionalPoseOverride_eventIsRootOverrideActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execIsRootOverrideActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRootOverrideActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function IsRootOverrideActive *****************

// ********** Begin Class UIsdkConditionalPoseOverride Function ResetJointsOverride ****************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Resets the current joint pose override, completely losing the previous state\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Resets the current joint pose override, completely losing the previous state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetJointsOverride constinit property declarations *******************
// ********** End Function ResetJointsOverride constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "ResetJointsOverride", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execResetJointsOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetJointsOverride();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function ResetJointsOverride ******************

// ********** Begin Class UIsdkConditionalPoseOverride Function ResetRootOverride ******************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Resets the current root pose override, completely losing the previous state\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Resets the current root pose override, completely losing the previous state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetRootOverride constinit property declarations *********************
// ********** End Function ResetRootOverride constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "ResetRootOverride", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execResetRootOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetRootOverride();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function ResetRootOverride ********************

// ********** Begin Class UIsdkConditionalPoseOverride Function SetJointsOverride ******************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics
{
	struct IsdkConditionalPoseOverride_eventSetJointsOverride_Parms
	{
		TArray<FTransform> JointsOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Sets an override of the joint poses with the given array of transforms. Will overwrite\n   * any previous override in place\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Sets an override of the joint poses with the given array of transforms. Will overwrite\n* any previous override in place" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetJointsOverride constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointsOverride_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointsOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetJointsOverride constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetJointsOverride Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::NewProp_JointsOverride_Inner = { "JointsOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::NewProp_JointsOverride = { "JointsOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalPoseOverride_eventSetJointsOverride_Parms, JointsOverride), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::NewProp_JointsOverride_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::NewProp_JointsOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::PropPointers) < 2048);
// ********** End Function SetJointsOverride Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "SetJointsOverride", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::IsdkConditionalPoseOverride_eventSetJointsOverride_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::IsdkConditionalPoseOverride_eventSetJointsOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execSetJointsOverride)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_JointsOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJointsOverride(Z_Param_Out_JointsOverride);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function SetJointsOverride ********************

// ********** Begin Class UIsdkConditionalPoseOverride Function SetRootOverride ********************
struct Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics
{
	struct IsdkConditionalPoseOverride_eventSetRootOverride_Parms
	{
		FTransform RootOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Sets an override of the root pose with a given transform\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Sets an override of the root pose with a given transform" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetRootOverride constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRootOverride constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRootOverride Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::NewProp_RootOverride = { "RootOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalPoseOverride_eventSetRootOverride_Parms, RootOverride), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::NewProp_RootOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::PropPointers) < 2048);
// ********** End Function SetRootOverride Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalPoseOverride, nullptr, "SetRootOverride", 	Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::IsdkConditionalPoseOverride_eventSetRootOverride_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::IsdkConditionalPoseOverride_eventSetRootOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalPoseOverride::execSetRootOverride)
{
	P_GET_STRUCT(FTransform,Z_Param_RootOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootOverride(Z_Param_RootOverride);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalPoseOverride Function SetRootOverride **********************

// ********** Begin Class UIsdkConditionalPoseOverride *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalPoseOverride;
UClass* UIsdkConditionalPoseOverride::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalPoseOverride;
	if (!Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkConditionalPoseOverride"),
			Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalPoseOverride,
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
	return Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister()
{
	return UIsdkConditionalPoseOverride::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Conditional that stores if the associated object that implements IsdkIPosedMesh is currently\n * being overridden or not, as well as the overriding pose information\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "IncludePath", "Core/IsdkConditionalPoseOverride.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalPoseOverride.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Conditional that stores if the associated object that implements IsdkIPosedMesh is currently\nbeing overridden or not, as well as the overriding pose information\n@addtogroup InteractionSDK" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkConditionalPoseOverride constinit property declarations *************
// ********** End Class UIsdkConditionalPoseOverride constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetJointsOverride"), .Pointer = &UIsdkConditionalPoseOverride::execGetJointsOverride },
		{ .NameUTF8 = UTF8TEXT("GetRootOverride"), .Pointer = &UIsdkConditionalPoseOverride::execGetRootOverride },
		{ .NameUTF8 = UTF8TEXT("IsJointsOverrideActive"), .Pointer = &UIsdkConditionalPoseOverride::execIsJointsOverrideActive },
		{ .NameUTF8 = UTF8TEXT("IsRootOverrideActive"), .Pointer = &UIsdkConditionalPoseOverride::execIsRootOverrideActive },
		{ .NameUTF8 = UTF8TEXT("ResetJointsOverride"), .Pointer = &UIsdkConditionalPoseOverride::execResetJointsOverride },
		{ .NameUTF8 = UTF8TEXT("ResetRootOverride"), .Pointer = &UIsdkConditionalPoseOverride::execResetRootOverride },
		{ .NameUTF8 = UTF8TEXT("SetJointsOverride"), .Pointer = &UIsdkConditionalPoseOverride::execSetJointsOverride },
		{ .NameUTF8 = UTF8TEXT("SetRootOverride"), .Pointer = &UIsdkConditionalPoseOverride::execSetRootOverride },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetJointsOverride, "GetJointsOverride" }, // 1977175698
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_GetRootOverride, "GetRootOverride" }, // 2500021596
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsJointsOverrideActive, "IsJointsOverrideActive" }, // 1485744294
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_IsRootOverrideActive, "IsRootOverrideActive" }, // 3899480648
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetJointsOverride, "ResetJointsOverride" }, // 541572420
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_ResetRootOverride, "ResetRootOverride" }, // 3421939530
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetJointsOverride, "SetJointsOverride" }, // 2603429389
		{ &Z_Construct_UFunction_UIsdkConditionalPoseOverride_SetRootOverride, "SetRootOverride" }, // 1898347286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalPoseOverride>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics
UObject* (*const Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditional,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::ClassParams = {
	&UIsdkConditionalPoseOverride::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::Class_MetaDataParams)
};
void UIsdkConditionalPoseOverride::StaticRegisterNativesUIsdkConditionalPoseOverride()
{
	UClass* Class = UIsdkConditionalPoseOverride::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.OuterSingleton, Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalPoseOverride.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkConditionalPoseOverride);
UIsdkConditionalPoseOverride::~UIsdkConditionalPoseOverride() {}
// ********** End Class UIsdkConditionalPoseOverride ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalPoseOverride, UIsdkConditionalPoseOverride::StaticClass, TEXT("UIsdkConditionalPoseOverride"), &Z_Registration_Info_UClass_UIsdkConditionalPoseOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalPoseOverride), 1960677191U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h__Script_OculusInteraction_4173614744{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
