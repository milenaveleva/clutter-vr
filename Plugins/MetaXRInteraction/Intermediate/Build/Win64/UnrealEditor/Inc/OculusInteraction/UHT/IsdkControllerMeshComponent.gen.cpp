// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkControllerMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkControllerMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerMeshComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkControllerMeshComponent Function GetCurrentRootPose_Implementation **
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics
{
	struct IsdkControllerMeshComponent_eventGetCurrentRootPose_Implementation_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns the root pose of this mesh before any overrides have been applied (from\n   * IsdkIPosedMesh)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns the root pose of this mesh before any overrides have been applied (from\n* IsdkIPosedMesh)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentRootPose_Implementation constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentRootPose_Implementation constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentRootPose_Implementation Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetCurrentRootPose_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentRootPose_Implementation Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetCurrentRootPose_Implementation", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::IsdkControllerMeshComponent_eventGetCurrentRootPose_Implementation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::IsdkControllerMeshComponent_eventGetCurrentRootPose_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetCurrentRootPose_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCurrentRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetCurrentRootPose_Implementation ****

// ********** Begin Class UIsdkControllerMeshComponent Function GetFinalRootPose_Implementation ****
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics
{
	struct IsdkControllerMeshComponent_eventGetFinalRootPose_Implementation_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns the root pose of this mesh after all overrides have been applied (from\n   * IsdkIPosedMesh)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns the root pose of this mesh after all overrides have been applied (from\n* IsdkIPosedMesh)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFinalRootPose_Implementation constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFinalRootPose_Implementation constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFinalRootPose_Implementation Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetFinalRootPose_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers) < 2048);
// ********** End Function GetFinalRootPose_Implementation Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetFinalRootPose_Implementation", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::IsdkControllerMeshComponent_eventGetFinalRootPose_Implementation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::IsdkControllerMeshComponent_eventGetFinalRootPose_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetFinalRootPose_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetFinalRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetFinalRootPose_Implementation ******

// ********** Begin Class UIsdkControllerMeshComponent Function GetHandPointerPoseDataSource *******
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics
{
	struct IsdkControllerMeshComponent_eventGetHandPointerPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIHandPointerPose> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandPointerPoseDataSource constinit property declarations **********
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandPointerPoseDataSource constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandPointerPoseDataSource Property Definitions *********************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetHandPointerPoseDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::PropPointers) < 2048);
// ********** End Function GetHandPointerPoseDataSource Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetHandPointerPoseDataSource", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::IsdkControllerMeshComponent_eventGetHandPointerPoseDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::IsdkControllerMeshComponent_eventGetHandPointerPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetHandPointerPoseDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIHandPointerPose>*)Z_Param__Result=P_THIS->GetHandPointerPoseDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetHandPointerPoseDataSource *********

// ********** Begin Class UIsdkControllerMeshComponent Function GetPointerPoseComponent ************
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics
{
	struct IsdkControllerMeshComponent_eventGetPointerPoseComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointerPoseComponent constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointerPoseComponent constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointerPoseComponent Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetPointerPoseComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::PropPointers) < 2048);
// ********** End Function GetPointerPoseComponent Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetPointerPoseComponent", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::IsdkControllerMeshComponent_eventGetPointerPoseComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::IsdkControllerMeshComponent_eventGetPointerPoseComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetPointerPoseComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetPointerPoseComponent();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetPointerPoseComponent **************

// ********** Begin Class UIsdkControllerMeshComponent Function GetPoseOverride_Implementation *****
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics
{
	struct IsdkControllerMeshComponent_eventGetPoseOverride_Implementation_Parms
	{
		UIsdkConditionalPoseOverride* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * @brief Returns the Pose Override conditional object associated with this hand mesh (from\n   * IsdkIPosedMesh)\n   */" },
#endif
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* @brief Returns the Pose Override conditional object associated with this hand mesh (from\n* IsdkIPosedMesh)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPoseOverride_Implementation constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPoseOverride_Implementation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPoseOverride_Implementation Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetPoseOverride_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers) < 2048);
// ********** End Function GetPoseOverride_Implementation Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetPoseOverride_Implementation", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::IsdkControllerMeshComponent_eventGetPoseOverride_Implementation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::IsdkControllerMeshComponent_eventGetPoseOverride_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetPoseOverride_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalPoseOverride**)Z_Param__Result=P_THIS->GetPoseOverride_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetPoseOverride_Implementation *******

// ********** Begin Class UIsdkControllerMeshComponent Function GetRootPoseDataSource **************
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics
{
	struct IsdkControllerMeshComponent_eventGetRootPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIRootPose> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRootPoseDataSource constinit property declarations *****************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRootPoseDataSource constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRootPoseDataSource Property Definitions ****************************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventGetRootPoseDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::PropPointers) < 2048);
// ********** End Function GetRootPoseDataSource Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "GetRootPoseDataSource", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::IsdkControllerMeshComponent_eventGetRootPoseDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::IsdkControllerMeshComponent_eventGetRootPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execGetRootPoseDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIRootPose>*)Z_Param__Result=P_THIS->GetRootPoseDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function GetRootPoseDataSource ****************

// ********** Begin Class UIsdkControllerMeshComponent Function SetHandPointerPoseDataSource *******
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics
{
	struct IsdkControllerMeshComponent_eventSetHandPointerPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIHandPointerPose> InHandPointerPoseDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandPointerPoseDataSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHandPointerPoseDataSource constinit property declarations **********
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InHandPointerPoseDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHandPointerPoseDataSource constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHandPointerPoseDataSource Property Definitions *********************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::NewProp_InHandPointerPoseDataSource = { "InHandPointerPoseDataSource", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventSetHandPointerPoseDataSource_Parms, InHandPointerPoseDataSource), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandPointerPoseDataSource_MetaData), NewProp_InHandPointerPoseDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::NewProp_InHandPointerPoseDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::PropPointers) < 2048);
// ********** End Function SetHandPointerPoseDataSource Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "SetHandPointerPoseDataSource", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::IsdkControllerMeshComponent_eventSetHandPointerPoseDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::IsdkControllerMeshComponent_eventSetHandPointerPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execSetHandPointerPoseDataSource)
{
	P_GET_TINTERFACE_REF(IIsdkIHandPointerPose,Z_Param_Out_InHandPointerPoseDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandPointerPoseDataSource(Z_Param_Out_InHandPointerPoseDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function SetHandPointerPoseDataSource *********

// ********** Begin Class UIsdkControllerMeshComponent Function SetMotionController ****************
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics
{
	struct IsdkControllerMeshComponent_eventSetMotionController_Parms
	{
		USceneComponent* MotionControllerIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMotionController constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMotionController constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMotionController Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::NewProp_MotionControllerIn = { "MotionControllerIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventSetMotionController_Parms, MotionControllerIn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionControllerIn_MetaData), NewProp_MotionControllerIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::NewProp_MotionControllerIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::PropPointers) < 2048);
// ********** End Function SetMotionController Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "SetMotionController", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::IsdkControllerMeshComponent_eventSetMotionController_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::IsdkControllerMeshComponent_eventSetMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execSetMotionController)
{
	P_GET_OBJECT(USceneComponent,Z_Param_MotionControllerIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionController(Z_Param_MotionControllerIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function SetMotionController ******************

// ********** Begin Class UIsdkControllerMeshComponent Function SetRootPoseDataSource **************
struct Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics
{
	struct IsdkControllerMeshComponent_eventSetRootPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIRootPose> InRootPoseDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRootPoseDataSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRootPoseDataSource constinit property declarations *****************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InRootPoseDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRootPoseDataSource constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRootPoseDataSource Property Definitions ****************************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::NewProp_InRootPoseDataSource = { "InRootPoseDataSource", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkControllerMeshComponent_eventSetRootPoseDataSource_Parms, InRootPoseDataSource), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRootPoseDataSource_MetaData), NewProp_InRootPoseDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::NewProp_InRootPoseDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::PropPointers) < 2048);
// ********** End Function SetRootPoseDataSource Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkControllerMeshComponent, nullptr, "SetRootPoseDataSource", 	Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::IsdkControllerMeshComponent_eventSetRootPoseDataSource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::IsdkControllerMeshComponent_eventSetRootPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkControllerMeshComponent::execSetRootPoseDataSource)
{
	P_GET_TINTERFACE_REF(IIsdkIRootPose,Z_Param_Out_InRootPoseDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootPoseDataSource(Z_Param_Out_InRootPoseDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkControllerMeshComponent Function SetRootPoseDataSource ****************

// ********** Begin Class UIsdkControllerMeshComponent *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerMeshComponent;
UClass* UIsdkControllerMeshComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerMeshComponent;
	if (!Z_Registration_Info_UClass_UIsdkControllerMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkControllerMeshComponent"),
			Z_Registration_Info_UClass_UIsdkControllerMeshComponent.InnerSingleton,
			StaticRegisterNativesUIsdkControllerMeshComponent,
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
	return Z_Registration_Info_UClass_UIsdkControllerMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister()
{
	return UIsdkControllerMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "IsdkControllerMeshComponent.h" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPointerPoseDataSource_MetaData[] = {
		{ "BlueprintGetter", "GetHandPointerPoseDataSource" },
		{ "BlueprintSetter", "SetHandPointerPoseDataSource" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPoseDataSource_MetaData[] = {
		{ "BlueprintGetter", "GetRootPoseDataSource" },
		{ "BlueprintSetter", "SetRootPoseDataSource" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerPoseComponent_MetaData[] = {
		{ "BlueprintGetter", "GetPointerPoseComponent" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseOverride_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMotionController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketFollowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkControllerMeshComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkControllerMeshComponent constinit property declarations *************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandPointerPoseDataSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RootPoseDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointerPoseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SocketFollowComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkControllerMeshComponent constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentRootPose_Implementation"), .Pointer = &UIsdkControllerMeshComponent::execGetCurrentRootPose_Implementation },
		{ .NameUTF8 = UTF8TEXT("GetFinalRootPose_Implementation"), .Pointer = &UIsdkControllerMeshComponent::execGetFinalRootPose_Implementation },
		{ .NameUTF8 = UTF8TEXT("GetHandPointerPoseDataSource"), .Pointer = &UIsdkControllerMeshComponent::execGetHandPointerPoseDataSource },
		{ .NameUTF8 = UTF8TEXT("GetPointerPoseComponent"), .Pointer = &UIsdkControllerMeshComponent::execGetPointerPoseComponent },
		{ .NameUTF8 = UTF8TEXT("GetPoseOverride_Implementation"), .Pointer = &UIsdkControllerMeshComponent::execGetPoseOverride_Implementation },
		{ .NameUTF8 = UTF8TEXT("GetRootPoseDataSource"), .Pointer = &UIsdkControllerMeshComponent::execGetRootPoseDataSource },
		{ .NameUTF8 = UTF8TEXT("SetHandPointerPoseDataSource"), .Pointer = &UIsdkControllerMeshComponent::execSetHandPointerPoseDataSource },
		{ .NameUTF8 = UTF8TEXT("SetMotionController"), .Pointer = &UIsdkControllerMeshComponent::execSetMotionController },
		{ .NameUTF8 = UTF8TEXT("SetRootPoseDataSource"), .Pointer = &UIsdkControllerMeshComponent::execSetRootPoseDataSource },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetCurrentRootPose_Implementation, "GetCurrentRootPose_Implementation" }, // 4192208566
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetFinalRootPose_Implementation, "GetFinalRootPose_Implementation" }, // 910442696
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetHandPointerPoseDataSource, "GetHandPointerPoseDataSource" }, // 1357864638
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPointerPoseComponent, "GetPointerPoseComponent" }, // 3126672615
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetPoseOverride_Implementation, "GetPoseOverride_Implementation" }, // 2466653074
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_GetRootPoseDataSource, "GetRootPoseDataSource" }, // 3663043521
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_SetHandPointerPoseDataSource, "SetHandPointerPoseDataSource" }, // 1321189734
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_SetMotionController, "SetMotionController" }, // 3409522075
		{ &Z_Construct_UFunction_UIsdkControllerMeshComponent_SetRootPoseDataSource, "SetRootPoseDataSource" }, // 4137736321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkControllerMeshComponent_Statics

// ********** Begin Class UIsdkControllerMeshComponent Property Definitions ************************
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_HandPointerPoseDataSource = { "HandPointerPoseDataSource", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, HandPointerPoseDataSource), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPointerPoseDataSource_MetaData), NewProp_HandPointerPoseDataSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_RootPoseDataSource = { "RootPoseDataSource", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, RootPoseDataSource), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPoseDataSource_MetaData), NewProp_RootPoseDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_PointerPoseComponent = { "PointerPoseComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, PointerPoseComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerPoseComponent_MetaData), NewProp_PointerPoseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_PoseOverride = { "PoseOverride", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, PoseOverride), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseOverride_MetaData), NewProp_PoseOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_ParentMotionController = { "ParentMotionController", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, ParentMotionController), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMotionController_MetaData), NewProp_ParentMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_SocketFollowComponent = { "SocketFollowComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkControllerMeshComponent, SocketFollowComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketFollowComponent_MetaData), NewProp_SocketFollowComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_HandPointerPoseDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_RootPoseDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_PointerPoseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_PoseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_ParentMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::NewProp_SocketFollowComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkControllerMeshComponent Property Definitions **************************
UObject* (*const Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPosedMesh_NoRegister, (int32)VTABLE_OFFSET(UIsdkControllerMeshComponent, IIsdkIPosedMesh), false },  // 2314368067
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::ClassParams = {
	&UIsdkControllerMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::Class_MetaDataParams)
};
void UIsdkControllerMeshComponent::StaticRegisterNativesUIsdkControllerMeshComponent()
{
	UClass* Class = UIsdkControllerMeshComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkControllerMeshComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerMeshComponent.OuterSingleton, Z_Construct_UClass_UIsdkControllerMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkControllerMeshComponent);
UIsdkControllerMeshComponent::~UIsdkControllerMeshComponent() {}
// ********** End Class UIsdkControllerMeshComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkControllerMeshComponent, UIsdkControllerMeshComponent::StaticClass, TEXT("UIsdkControllerMeshComponent"), &Z_Registration_Info_UClass_UIsdkControllerMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerMeshComponent), 2591928069U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h__Script_OculusInteraction_3322082670{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
