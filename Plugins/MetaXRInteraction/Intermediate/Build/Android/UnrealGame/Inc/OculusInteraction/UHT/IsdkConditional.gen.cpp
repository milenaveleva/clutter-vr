// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditional.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkConditional() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkResolvedValueChangedDynamicDelegate ******************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms
	{
		bool NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IsdkConditional.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FIsdkResolvedValueChangedDynamicDelegate constinit property declarations 
	static void NewProp_NewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FIsdkResolvedValueChangedDynamicDelegate constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FIsdkResolvedValueChangedDynamicDelegate Property Definitions *********
void Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_NewValue_SetBit(void* Obj)
{
	((_Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms*)Obj)->NewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FIsdkResolvedValueChangedDynamicDelegate Property Definitions ***********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkResolvedValueChangedDynamicDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkResolvedValueChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkResolvedValueChangedDynamicDelegate, bool NewValue)
{
	struct _Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms
	{
		bool NewValue;
	};
	_Script_OculusInteraction_eventIsdkResolvedValueChangedDynamicDelegate_Parms Parms;
	Parms.NewValue=NewValue ? true : false;
	IsdkResolvedValueChangedDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkResolvedValueChangedDynamicDelegate ********************************

// ********** Begin Class UIsdkConditional Function GetResolvedValue *******************************
struct Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics
{
	struct IsdkConditional_eventGetResolvedValue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Retrieve the currently resolved boolean value of this conditional\n   * @return bool The current value of this conditional\n   * @see UIsdkConditional#SetResolvedValue\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditional.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Retrieve the currently resolved boolean value of this conditional\n@return bool The current value of this conditional\n@see UIsdkConditional#SetResolvedValue" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetResolvedValue constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetResolvedValue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetResolvedValue Property Definitions *********************************
void Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditional_eventGetResolvedValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditional_eventGetResolvedValue_Parms), &Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::PropPointers) < 2048);
// ********** End Function GetResolvedValue Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditional, nullptr, "GetResolvedValue", 	Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::IsdkConditional_eventGetResolvedValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::IsdkConditional_eventGetResolvedValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditional_GetResolvedValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditional_GetResolvedValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditional::execGetResolvedValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetResolvedValue();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditional Function GetResolvedValue *********************************

// ********** Begin Class UIsdkConditional *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditional;
UClass* UIsdkConditional::GetPrivateStaticClass()
{
	using TClass = UIsdkConditional;
	if (!Z_Registration_Info_UClass_UIsdkConditional.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkConditional"),
			Z_Registration_Info_UClass_UIsdkConditional.InnerSingleton,
			StaticRegisterNativesUIsdkConditional,
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
	return Z_Registration_Info_UClass_UIsdkConditional.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditional_NoRegister()
{
	return UIsdkConditional::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkConditional\n * @brief A conditional contains a single boolean value, with an event that is fired whenever the\n * value changes.\n *\n * IsdkConditionals are used to describe a boolean state that will be dynamically changed by\n * external entities, with each change sending an event that can be subscribed to\n *\n * @see UIsdkConditionalBool\n * @see UIsdkConditionalComponentIsActive\n * @see UIsdkConditionalGroup\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "IncludePath", "Core/IsdkConditional.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditional.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkConditional\n@brief A conditional contains a single boolean value, with an event that is fired whenever the\nvalue changes.\n\nIsdkConditionals are used to describe a boolean state that will be dynamically changed by\nexternal entities, with each change sending an event that can be subscribed to\n\n@see UIsdkConditionalBool\n@see UIsdkConditionalComponentIsActive\n@see UIsdkConditionalGroup\n@addtogroup InteractionSDK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResolvedValue_MetaData[] = {
		{ "BlueprintGetter", "GetResolvedValue" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditional.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedValueChangedBp_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Dynamic event for slower blueprint event listeners\n   */" },
#endif
		{ "DisplayName", "ResolvedValueChanged" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditional.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic event for slower blueprint event listeners" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkConditional constinit property declarations *************************
	static void NewProp_bResolvedValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolvedValue;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResolvedValueChangedBp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkConditional constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetResolvedValue"), .Pointer = &UIsdkConditional::execGetResolvedValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConditional_GetResolvedValue, "GetResolvedValue" }, // 2440468075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditional>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkConditional_Statics

// ********** Begin Class UIsdkConditional Property Definitions ************************************
void Z_Construct_UClass_UIsdkConditional_Statics::NewProp_bResolvedValue_SetBit(void* Obj)
{
	((UIsdkConditional*)Obj)->bResolvedValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkConditional_Statics::NewProp_bResolvedValue = { "bResolvedValue", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkConditional), &Z_Construct_UClass_UIsdkConditional_Statics::NewProp_bResolvedValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResolvedValue_MetaData), NewProp_bResolvedValue_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkConditional_Statics::NewProp_ResolvedValueChangedBp = { "ResolvedValueChangedBp", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkConditional, ResolvedValueChangedBp), Z_Construct_UDelegateFunction_OculusInteraction_IsdkResolvedValueChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolvedValueChangedBp_MetaData), NewProp_ResolvedValueChangedBp_MetaData) }; // 4166993569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkConditional_Statics::NewProp_bResolvedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkConditional_Statics::NewProp_ResolvedValueChangedBp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditional_Statics::PropPointers) < 2048);
// ********** End Class UIsdkConditional Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UIsdkConditional_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditional_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditional_Statics::ClassParams = {
	&UIsdkConditional::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkConditional_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditional_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditional_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditional_Statics::Class_MetaDataParams)
};
void UIsdkConditional::StaticRegisterNativesUIsdkConditional()
{
	UClass* Class = UIsdkConditional::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkConditional_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkConditional()
{
	if (!Z_Registration_Info_UClass_UIsdkConditional.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditional.OuterSingleton, Z_Construct_UClass_UIsdkConditional_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditional.OuterSingleton;
}
UIsdkConditional::UIsdkConditional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkConditional);
UIsdkConditional::~UIsdkConditional() {}
// ********** End Class UIsdkConditional ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditional, UIsdkConditional::StaticClass, TEXT("UIsdkConditional"), &Z_Registration_Info_UClass_UIsdkConditional, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditional), 3096855666U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h__Script_OculusInteraction_974555184{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
