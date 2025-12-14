// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkHandRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandRigComponent() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponentLeft();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponentLeft_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponentRight();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandRigComponentRight_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandRigComponent Function GetHandVisuals ****************************
struct Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics
{
	struct IsdkHandRigComponent_eventGetHandVisuals_Parms
	{
		UIsdkHandVisualsRigComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandVisuals constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandVisuals constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandVisuals Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandRigComponent_eventGetHandVisuals_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::PropPointers) < 2048);
// ********** End Function GetHandVisuals Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandRigComponent, nullptr, "GetHandVisuals", 	Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::IsdkHandRigComponent_eventGetHandVisuals_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::IsdkHandRigComponent_eventGetHandVisuals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandRigComponent::execGetHandVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandVisualsRigComponent**)Z_Param__Result=P_THIS->GetHandVisuals();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandRigComponent Function GetHandVisuals ******************************

// ********** Begin Class UIsdkHandRigComponent Function HandlePalmGrabFinished ********************
struct Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePalmGrabFinished constinit property declarations ****************
// ********** End Function HandlePalmGrabFinished constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandRigComponent, nullptr, "HandlePalmGrabFinished", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandRigComponent::execHandlePalmGrabFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePalmGrabFinished();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandRigComponent Function HandlePalmGrabFinished **********************

// ********** Begin Class UIsdkHandRigComponent Function HandlePalmGrabStarted *********************
struct Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePalmGrabStarted constinit property declarations *****************
// ********** End Function HandlePalmGrabStarted constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandRigComponent, nullptr, "HandlePalmGrabStarted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandRigComponent::execHandlePalmGrabStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePalmGrabStarted();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandRigComponent Function HandlePalmGrabStarted ***********************

// ********** Begin Class UIsdkHandRigComponent Function HandlePinchGrabFinished *******************
struct Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePinchGrabFinished constinit property declarations ***************
// ********** End Function HandlePinchGrabFinished constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandRigComponent, nullptr, "HandlePinchGrabFinished", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandRigComponent::execHandlePinchGrabFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePinchGrabFinished();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandRigComponent Function HandlePinchGrabFinished *********************

// ********** Begin Class UIsdkHandRigComponent Function HandlePinchGrabStarted ********************
struct Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePinchGrabStarted constinit property declarations ****************
// ********** End Function HandlePinchGrabStarted constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandRigComponent, nullptr, "HandlePinchGrabStarted", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandRigComponent::execHandlePinchGrabStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePinchGrabStarted();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandRigComponent Function HandlePinchGrabStarted **********************

// ********** Begin Class UIsdkHandRigComponent ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandRigComponent;
UClass* UIsdkHandRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkHandRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandRigComponent"),
			Z_Registration_Info_UClass_UIsdkHandRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkHandRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkHandRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandRigComponent_NoRegister()
{
	return UIsdkHandRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK|Rig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief UIsdkHandRigComponent is the highest level ISDK scene component driving interaction\n * behavior while the user is not holding a controller.  It is intended to be placed directly below\n * a motion controller in the scene hierarchy, one for each hand.  The component takes input events\n * from the hand and provides a means for interactors to read those events in a controller/hand\n * agnostic manner.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief UIsdkHandRigComponent is the highest level ISDK scene component driving interaction\nbehavior while the user is not holding a controller.  It is intended to be placed directly below\na motion controller in the scene hierarchy, one for each hand.  The component takes input events\nfrom the hand and provides a means for interactors to read those events in a controller/hand\nagnostic manner." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisualsComponent_MetaData[] = {
		{ "BlueprintGetter", "GetHandVisuals" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Properties for access of attached components.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties for access of attached components." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchGrabRecognizer_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * PinchGrabRecognizer recognizes pinch motions in the user's hands, which we use to drive\n   * pinch grab behavior in the grabber.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* PinchGrabRecognizer recognizes pinch motions in the user's hands, which we use to drive\n* pinch grab behavior in the grabber." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabRecognizer_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * PalmGrabRecognizer recognizes palm grab motions in the user's hands, which we use to drive\n   * palm grab behavior in the grabber.\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* PalmGrabRecognizer recognizes palm grab motions in the user's hands, which we use to drive\n* palm grab behavior in the grabber." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandRigComponent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandVisualsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchGrabRecognizer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PalmGrabRecognizer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkHandRigComponent constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHandVisuals"), .Pointer = &UIsdkHandRigComponent::execGetHandVisuals },
		{ .NameUTF8 = UTF8TEXT("HandlePalmGrabFinished"), .Pointer = &UIsdkHandRigComponent::execHandlePalmGrabFinished },
		{ .NameUTF8 = UTF8TEXT("HandlePalmGrabStarted"), .Pointer = &UIsdkHandRigComponent::execHandlePalmGrabStarted },
		{ .NameUTF8 = UTF8TEXT("HandlePinchGrabFinished"), .Pointer = &UIsdkHandRigComponent::execHandlePinchGrabFinished },
		{ .NameUTF8 = UTF8TEXT("HandlePinchGrabStarted"), .Pointer = &UIsdkHandRigComponent::execHandlePinchGrabStarted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandRigComponent_GetHandVisuals, "GetHandVisuals" }, // 2697852576
		{ &Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabFinished, "HandlePalmGrabFinished" }, // 299332814
		{ &Z_Construct_UFunction_UIsdkHandRigComponent_HandlePalmGrabStarted, "HandlePalmGrabStarted" }, // 878214643
		{ &Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabFinished, "HandlePinchGrabFinished" }, // 2202688083
		{ &Z_Construct_UFunction_UIsdkHandRigComponent_HandlePinchGrabStarted, "HandlePinchGrabStarted" }, // 2125359538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandRigComponent_Statics

// ********** Begin Class UIsdkHandRigComponent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_HandVisualsComponent = { "HandVisualsComponent", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandRigComponent, HandVisualsComponent), Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisualsComponent_MetaData), NewProp_HandVisualsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_PinchGrabRecognizer = { "PinchGrabRecognizer", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandRigComponent, PinchGrabRecognizer), Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchGrabRecognizer_MetaData), NewProp_PinchGrabRecognizer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_PalmGrabRecognizer = { "PalmGrabRecognizer", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandRigComponent, PalmGrabRecognizer), Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabRecognizer_MetaData), NewProp_PalmGrabRecognizer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_HandVisualsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_PinchGrabRecognizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandRigComponent_Statics::NewProp_PalmGrabRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponent_Statics::PropPointers) < 2048);
// ********** End Class UIsdkHandRigComponent Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UIsdkHandRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandRigComponent_Statics::ClassParams = {
	&UIsdkHandRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandRigComponent_Statics::Class_MetaDataParams)
};
void UIsdkHandRigComponent::StaticRegisterNativesUIsdkHandRigComponent()
{
	UClass* Class = UIsdkHandRigComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkHandRigComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkHandRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkHandRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandRigComponent);
UIsdkHandRigComponent::~UIsdkHandRigComponent() {}
// ********** End Class UIsdkHandRigComponent ******************************************************

// ********** Begin Class UIsdkHandRigComponentLeft ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandRigComponentLeft;
UClass* UIsdkHandRigComponentLeft::GetPrivateStaticClass()
{
	using TClass = UIsdkHandRigComponentLeft;
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandRigComponentLeft"),
			Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.InnerSingleton,
			StaticRegisterNativesUIsdkHandRigComponentLeft,
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
	return Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandRigComponentLeft_NoRegister()
{
	return UIsdkHandRigComponentLeft::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
		{ "DisplayName", "ISDK Hand Rig Left" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandRigComponentLeft constinit property declarations ****************
// ********** End Class UIsdkHandRigComponentLeft constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandRigComponentLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics
UObject* (*const Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::ClassParams = {
	&UIsdkHandRigComponentLeft::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::Class_MetaDataParams)
};
void UIsdkHandRigComponentLeft::StaticRegisterNativesUIsdkHandRigComponentLeft()
{
}
UClass* Z_Construct_UClass_UIsdkHandRigComponentLeft()
{
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.OuterSingleton, Z_Construct_UClass_UIsdkHandRigComponentLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandRigComponentLeft.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandRigComponentLeft);
UIsdkHandRigComponentLeft::~UIsdkHandRigComponentLeft() {}
// ********** End Class UIsdkHandRigComponentLeft **************************************************

// ********** Begin Class UIsdkHandRigComponentRight ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandRigComponentRight;
UClass* UIsdkHandRigComponentRight::GetPrivateStaticClass()
{
	using TClass = UIsdkHandRigComponentRight;
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponentRight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandRigComponentRight"),
			Z_Registration_Info_UClass_UIsdkHandRigComponentRight.InnerSingleton,
			StaticRegisterNativesUIsdkHandRigComponentRight,
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
	return Z_Registration_Info_UClass_UIsdkHandRigComponentRight.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandRigComponentRight_NoRegister()
{
	return UIsdkHandRigComponentRight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandRigComponentRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK|Rig" },
		{ "DisplayName", "ISDK Hand Rig Right" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkHandRigComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHandRigComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandRigComponentRight constinit property declarations ***************
// ********** End Class UIsdkHandRigComponentRight constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandRigComponentRight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandRigComponentRight_Statics
UObject* (*const Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::ClassParams = {
	&UIsdkHandRigComponentRight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::Class_MetaDataParams)
};
void UIsdkHandRigComponentRight::StaticRegisterNativesUIsdkHandRigComponentRight()
{
}
UClass* Z_Construct_UClass_UIsdkHandRigComponentRight()
{
	if (!Z_Registration_Info_UClass_UIsdkHandRigComponentRight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandRigComponentRight.OuterSingleton, Z_Construct_UClass_UIsdkHandRigComponentRight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandRigComponentRight.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandRigComponentRight);
UIsdkHandRigComponentRight::~UIsdkHandRigComponentRight() {}
// ********** End Class UIsdkHandRigComponentRight *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandRigComponent, UIsdkHandRigComponent::StaticClass, TEXT("UIsdkHandRigComponent"), &Z_Registration_Info_UClass_UIsdkHandRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandRigComponent), 3589200847U) },
		{ Z_Construct_UClass_UIsdkHandRigComponentLeft, UIsdkHandRigComponentLeft::StaticClass, TEXT("UIsdkHandRigComponentLeft"), &Z_Registration_Info_UClass_UIsdkHandRigComponentLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandRigComponentLeft), 1609401591U) },
		{ Z_Construct_UClass_UIsdkHandRigComponentRight, UIsdkHandRigComponentRight::StaticClass, TEXT("UIsdkHandRigComponentRight"), &Z_Registration_Info_UClass_UIsdkHandRigComponentRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandRigComponentRight), 4189584731U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandRigComponent_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandRigComponent_h__Script_OculusInteractionPrebuilts_3982385976{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
