// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Surfaces/IsdkPointablePlane.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkPointablePlane() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPointablePlane Function GetNormal ***********************************
struct Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics
{
	struct IsdkPointablePlane_eventGetNormal_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Gets the normal of this plane\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointablePlane.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the normal of this plane" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNormal constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNormal constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNormal Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointablePlane_eventGetNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::PropPointers) < 2048);
// ********** End Function GetNormal Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointablePlane, nullptr, "GetNormal", 	Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::IsdkPointablePlane_eventGetNormal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::IsdkPointablePlane_eventGetNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointablePlane_GetNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointablePlane_GetNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointablePlane::execGetNormal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetNormal();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointablePlane Function GetNormal *************************************

// ********** Begin Class UIsdkPointablePlane Function GetSize *************************************
struct Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics
{
	struct IsdkPointablePlane_eventGetSize_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Gets the size of the plane, which defines its two-dimensional extent\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointablePlane.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the size of the plane, which defines its two-dimensional extent" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSize constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSize constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSize Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointablePlane_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::PropPointers) < 2048);
// ********** End Function GetSize Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointablePlane, nullptr, "GetSize", 	Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::IsdkPointablePlane_eventGetSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::IsdkPointablePlane_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointablePlane_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointablePlane_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointablePlane::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointablePlane Function GetSize ***************************************

// ********** Begin Class UIsdkPointablePlane Function SetSize *************************************
struct Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics
{
	struct IsdkPointablePlane_eventSetSize_Parms
	{
		FVector2D InSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Sets the size of the plane, which defines its two-dimensional extent\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointablePlane.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the size of the plane, which defines its two-dimensional extent" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetSize constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSize constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSize Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointablePlane_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::PropPointers) < 2048);
// ********** End Function SetSize Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointablePlane, nullptr, "SetSize", 	Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::IsdkPointablePlane_eventSetSize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::IsdkPointablePlane_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointablePlane_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointablePlane_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointablePlane::execSetSize)
{
	P_GET_STRUCT(FVector2D,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InSize);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointablePlane Function SetSize ***************************************

// ********** Begin Class UIsdkPointablePlane ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPointablePlane;
UClass* UIsdkPointablePlane::GetPrivateStaticClass()
{
	using TClass = UIsdkPointablePlane;
	if (!Z_Registration_Info_UClass_UIsdkPointablePlane.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkPointablePlane"),
			Z_Registration_Info_UClass_UIsdkPointablePlane.InnerSingleton,
			StaticRegisterNativesUIsdkPointablePlane,
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
	return Z_Registration_Info_UClass_UIsdkPointablePlane.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister()
{
	return UIsdkPointablePlane::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPointablePlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UIsdkPointablePlane is used to represent a plane upon which interaction takes place.  It\n * extends IIsdkISurface to provide polymorphic behavior, where any shape of surface may be valid\n * for interaction.\n *\n * Plane Normal:\n * Local normal is FVector::BackVector; and Up/Right (when looking along FVector::ForwardVector)\n * are FVector::Up and FVector::Right. World normal is the local normal, with the component world\n * rotation applied.\n *\n * Plane Dimensions:\n * The 'size' property is the extent of the plane in the X=Right, Y=Up direction, from the center\n * of the plane. In other words, 2 * Size == {Width, Height}\n */" },
#endif
		{ "DisplayName", "ISDK Pointable Plane" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/Surfaces/IsdkPointablePlane.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointablePlane.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UIsdkPointablePlane is used to represent a plane upon which interaction takes place.  It\nextends IIsdkISurface to provide polymorphic behavior, where any shape of surface may be valid\nfor interaction.\n\nPlane Normal:\nLocal normal is FVector::BackVector; and Up/Right (when looking along FVector::ForwardVector)\nare FVector::Up and FVector::Right. World normal is the local normal, with the component world\nrotation applied.\n\nPlane Dimensions:\nThe 'size' property is the extent of the plane in the X=Right, Y=Up direction, from the center\nof the plane. In other words, 2 * Size == {Width, Height}" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "BlueprintGetter", "GetSize" },
		{ "BlueprintSetter", "SetSize" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Surfaces/IsdkPointablePlane.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkPointablePlane constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkPointablePlane constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNormal"), .Pointer = &UIsdkPointablePlane::execGetNormal },
		{ .NameUTF8 = UTF8TEXT("GetSize"), .Pointer = &UIsdkPointablePlane::execGetSize },
		{ .NameUTF8 = UTF8TEXT("SetSize"), .Pointer = &UIsdkPointablePlane::execSetSize },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPointablePlane_GetNormal, "GetNormal" }, // 2840341549
		{ &Z_Construct_UFunction_UIsdkPointablePlane_GetSize, "GetSize" }, // 4147184818
		{ &Z_Construct_UFunction_UIsdkPointablePlane_SetSize, "SetSize" }, // 3534223208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPointablePlane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkPointablePlane_Statics

// ********** Begin Class UIsdkPointablePlane Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPointablePlane_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointablePlane, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPointablePlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointablePlane_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointablePlane_Statics::PropPointers) < 2048);
// ********** End Class UIsdkPointablePlane Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UIsdkPointablePlane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointablePlane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkPointablePlane_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointablePlane, IIsdkIPose), false },  // 2989574844
	{ Z_Construct_UClass_UIsdkISurface_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointablePlane, IIsdkISurface), false },  // 3052452187
	{ Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister, (int32)VTABLE_OFFSET(UIsdkPointablePlane, IIsdkHasDebugSegments), false },  // 1480890301
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPointablePlane_Statics::ClassParams = {
	&UIsdkPointablePlane::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPointablePlane_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointablePlane_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointablePlane_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPointablePlane_Statics::Class_MetaDataParams)
};
void UIsdkPointablePlane::StaticRegisterNativesUIsdkPointablePlane()
{
	UClass* Class = UIsdkPointablePlane::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkPointablePlane_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkPointablePlane()
{
	if (!Z_Registration_Info_UClass_UIsdkPointablePlane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPointablePlane.OuterSingleton, Z_Construct_UClass_UIsdkPointablePlane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPointablePlane.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkPointablePlane);
UIsdkPointablePlane::~UIsdkPointablePlane() {}
// ********** End Class UIsdkPointablePlane ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPointablePlane, UIsdkPointablePlane::StaticClass, TEXT("UIsdkPointablePlane"), &Z_Registration_Info_UClass_UIsdkPointablePlane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPointablePlane), 645673638U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h__Script_OculusInteraction_1967872992{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Surfaces_IsdkPointablePlane_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
