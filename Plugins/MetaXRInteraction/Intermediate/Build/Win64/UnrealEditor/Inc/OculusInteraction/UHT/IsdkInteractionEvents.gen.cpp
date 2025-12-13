// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkInteractionEvents.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkInteractionEvents() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractionEvents();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractionEvents_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkIUpdateEventDelegate *********************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractionEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FIsdkIUpdateEventDelegate constinit property declarations *************
// ********** End Delegate FIsdkIUpdateEventDelegate constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkIUpdateEventDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkIUpdateEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkIUpdateEventDelegate)
{
	IsdkIUpdateEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIsdkIUpdateEventDelegate ***********************************************

// ********** Begin Class UIsdkInteractionEvents ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractionEvents;
UClass* UIsdkInteractionEvents::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractionEvents;
	if (!Z_Registration_Info_UClass_UIsdkInteractionEvents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkInteractionEvents"),
			Z_Registration_Info_UClass_UIsdkInteractionEvents.InnerSingleton,
			StaticRegisterNativesUIsdkInteractionEvents,
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
	return Z_Registration_Info_UClass_UIsdkInteractionEvents.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractionEvents_NoRegister()
{
	return UIsdkInteractionEvents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractionEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This class is not used - just here to make things compile properly, since header files don't\n// work properly when they only have Delegates definitions in them and nothing else.\n" },
#endif
		{ "IncludePath", "Interaction/IsdkInteractionEvents.h" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractionEvents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is not used - just here to make things compile properly, since header files don't\nwork properly when they only have Delegates definitions in them and nothing else." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkInteractionEvents constinit property declarations *******************
// ********** End Class UIsdkInteractionEvents constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractionEvents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkInteractionEvents_Statics
UObject* (*const Z_Construct_UClass_UIsdkInteractionEvents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionEvents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractionEvents_Statics::ClassParams = {
	&UIsdkInteractionEvents::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractionEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractionEvents_Statics::Class_MetaDataParams)
};
void UIsdkInteractionEvents::StaticRegisterNativesUIsdkInteractionEvents()
{
}
UClass* Z_Construct_UClass_UIsdkInteractionEvents()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractionEvents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractionEvents.OuterSingleton, Z_Construct_UClass_UIsdkInteractionEvents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractionEvents.OuterSingleton;
}
UIsdkInteractionEvents::UIsdkInteractionEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkInteractionEvents);
UIsdkInteractionEvents::~UIsdkInteractionEvents() {}
// ********** End Class UIsdkInteractionEvents *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractionEvents, UIsdkInteractionEvents::StaticClass, TEXT("UIsdkInteractionEvents"), &Z_Registration_Info_UClass_UIsdkInteractionEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractionEvents), 3001504508U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h__Script_OculusInteraction_2803083388{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
