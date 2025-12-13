// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestRayFixtures.h"
#include "Interaction/IsdkIInteractableState.h"
#include "Interaction/IsdkIInteractorState.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkTestRayFixtures() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMockInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTestRayFixture();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTestRayFixture_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkTestRayFixture Function HandleInteractableStateEvent ****************
struct Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics
{
	struct IsdkTestRayFixture_eventHandleInteractableStateEvent_Parms
	{
		FIsdkInteractableStateEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInteractableStateEvent constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleInteractableStateEvent constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleInteractableStateEvent Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkTestRayFixture_eventHandleInteractableStateEvent_Parms, Event), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 1229914507
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::PropPointers) < 2048);
// ********** End Function HandleInteractableStateEvent Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTestRayFixture, nullptr, "HandleInteractableStateEvent", 	Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::IsdkTestRayFixture_eventHandleInteractableStateEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::IsdkTestRayFixture_eventHandleInteractableStateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTestRayFixture::execHandleInteractableStateEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractableStateEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractableStateEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UIsdkTestRayFixture Function HandleInteractableStateEvent ******************

// ********** Begin Class UIsdkTestRayFixture Function HandleInteractorStateEvent ******************
struct Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics
{
	struct IsdkTestRayFixture_eventHandleInteractorStateEvent_Parms
	{
		FIsdkInteractorStateEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInteractorStateEvent constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleInteractorStateEvent constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleInteractorStateEvent Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkTestRayFixture_eventHandleInteractorStateEvent_Parms, Event), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2886564601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::PropPointers) < 2048);
// ********** End Function HandleInteractorStateEvent Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTestRayFixture, nullptr, "HandleInteractorStateEvent", 	Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::IsdkTestRayFixture_eventHandleInteractorStateEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::IsdkTestRayFixture_eventHandleInteractorStateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTestRayFixture::execHandleInteractorStateEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractorStateEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractorStateEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UIsdkTestRayFixture Function HandleInteractorStateEvent ********************

// ********** Begin Class UIsdkTestRayFixture Function HandlePointerEvent **************************
struct Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics
{
	struct IsdkTestRayFixture_eventHandlePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePointerEvent constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandlePointerEvent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandlePointerEvent Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkTestRayFixture_eventHandlePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 2900802931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::PropPointers) < 2048);
// ********** End Function HandlePointerEvent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTestRayFixture, nullptr, "HandlePointerEvent", 	Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::IsdkTestRayFixture_eventHandlePointerEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::IsdkTestRayFixture_eventHandlePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTestRayFixture::execHandlePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkTestRayFixture Function HandlePointerEvent ****************************

// ********** Begin Class UIsdkTestRayFixture Function HandleUpdatedEvent **************************
struct Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleUpdatedEvent constinit property declarations ********************
// ********** End Function HandleUpdatedEvent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTestRayFixture, nullptr, "HandleUpdatedEvent", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTestRayFixture::execHandleUpdatedEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUpdatedEvent();
	P_NATIVE_END;
}
// ********** End Class UIsdkTestRayFixture Function HandleUpdatedEvent ****************************

// ********** Begin Class UIsdkTestRayFixture ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTestRayFixture;
UClass* UIsdkTestRayFixture::GetPrivateStaticClass()
{
	using TClass = UIsdkTestRayFixture;
	if (!Z_Registration_Info_UClass_UIsdkTestRayFixture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkTestRayFixture"),
			Z_Registration_Info_UClass_UIsdkTestRayFixture.InnerSingleton,
			StaticRegisterNativesUIsdkTestRayFixture,
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
	return Z_Registration_Info_UClass_UIsdkTestRayFixture.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTestRayFixture_NoRegister()
{
	return UIsdkTestRayFixture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTestRayFixture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestRayFixtures.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MockInteractable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayFixtures.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkTestRayFixture constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MockInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkTestRayFixture constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInteractableStateEvent"), .Pointer = &UIsdkTestRayFixture::execHandleInteractableStateEvent },
		{ .NameUTF8 = UTF8TEXT("HandleInteractorStateEvent"), .Pointer = &UIsdkTestRayFixture::execHandleInteractorStateEvent },
		{ .NameUTF8 = UTF8TEXT("HandlePointerEvent"), .Pointer = &UIsdkTestRayFixture::execHandlePointerEvent },
		{ .NameUTF8 = UTF8TEXT("HandleUpdatedEvent"), .Pointer = &UIsdkTestRayFixture::execHandleUpdatedEvent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractableStateEvent, "HandleInteractableStateEvent" }, // 1980181475
		{ &Z_Construct_UFunction_UIsdkTestRayFixture_HandleInteractorStateEvent, "HandleInteractorStateEvent" }, // 3450482228
		{ &Z_Construct_UFunction_UIsdkTestRayFixture_HandlePointerEvent, "HandlePointerEvent" }, // 4035181928
		{ &Z_Construct_UFunction_UIsdkTestRayFixture_HandleUpdatedEvent, "HandleUpdatedEvent" }, // 1441700693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTestRayFixture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkTestRayFixture_Statics

// ********** Begin Class UIsdkTestRayFixture Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTestRayFixture_Statics::NewProp_MockInteractable = { "MockInteractable", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTestRayFixture, MockInteractable), Z_Construct_UClass_UIsdkMockInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MockInteractable_MetaData), NewProp_MockInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkTestRayFixture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTestRayFixture_Statics::NewProp_MockInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayFixture_Statics::PropPointers) < 2048);
// ********** End Class UIsdkTestRayFixture Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UIsdkTestRayFixture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayFixture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTestRayFixture_Statics::ClassParams = {
	&UIsdkTestRayFixture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkTestRayFixture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayFixture_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayFixture_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTestRayFixture_Statics::Class_MetaDataParams)
};
void UIsdkTestRayFixture::StaticRegisterNativesUIsdkTestRayFixture()
{
	UClass* Class = UIsdkTestRayFixture::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkTestRayFixture_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkTestRayFixture()
{
	if (!Z_Registration_Info_UClass_UIsdkTestRayFixture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTestRayFixture.OuterSingleton, Z_Construct_UClass_UIsdkTestRayFixture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTestRayFixture.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkTestRayFixture);
UIsdkTestRayFixture::~UIsdkTestRayFixture() {}
// ********** End Class UIsdkTestRayFixture ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkTestRayFixture, UIsdkTestRayFixture::StaticClass, TEXT("UIsdkTestRayFixture"), &Z_Registration_Info_UClass_UIsdkTestRayFixture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTestRayFixture), 3728826843U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h__Script_OculusInteraction_2173723410{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Private_Tests_IsdkTestRayFixtures_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
