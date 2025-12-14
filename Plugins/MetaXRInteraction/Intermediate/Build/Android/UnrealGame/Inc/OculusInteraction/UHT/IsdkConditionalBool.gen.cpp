// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalBool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkConditionalBool() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalBool Function SetValue ***********************************
struct Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics
{
	struct IsdkConditionalBool_eventSetValue_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Set the conditional to the given value, and then broadcast the change\n   * @param bNewValue The new boolean value to set\n   * @see UIsdkConditional#SetResolvedValue\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the conditional to the given value, and then broadcast the change\n@param bNewValue The new boolean value to set\n@see UIsdkConditional#SetResolvedValue" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetValue constinit property declarations ******************************
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetValue constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetValue Property Definitions *****************************************
void Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((IsdkConditionalBool_eventSetValue_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalBool_eventSetValue_Parms), &Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::PropPointers) < 2048);
// ********** End Function SetValue Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalBool, nullptr, "SetValue", 	Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::IsdkConditionalBool_eventSetValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::IsdkConditionalBool_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalBool_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalBool_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalBool::execSetValue)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_bNewValue);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalBool Function SetValue *************************************

// ********** Begin Class UIsdkConditionalBool *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalBool;
UClass* UIsdkConditionalBool::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalBool;
	if (!Z_Registration_Info_UClass_UIsdkConditionalBool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkConditionalBool"),
			Z_Registration_Info_UClass_UIsdkConditionalBool.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalBool,
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
	return Z_Registration_Info_UClass_UIsdkConditionalBool.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister()
{
	return UIsdkConditionalBool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkConditionalBool\n * @brief A basic implementation of UIsdkConditional, which allows the value to be set from a simple\n * bool.\n *\n * @see UIsdkConditional\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "IncludePath", "Core/IsdkConditionalBool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalBool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkConditionalBool\n@brief A basic implementation of UIsdkConditional, which allows the value to be set from a simple\nbool.\n\n@see UIsdkConditional\n@addtogroup InteractionSDK" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkConditionalBool constinit property declarations *********************
// ********** End Class UIsdkConditionalBool constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetValue"), .Pointer = &UIsdkConditionalBool::execSetValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConditionalBool_SetValue, "SetValue" }, // 471636900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkConditionalBool_Statics
UObject* (*const Z_Construct_UClass_UIsdkConditionalBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditional,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalBool_Statics::ClassParams = {
	&UIsdkConditionalBool::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalBool_Statics::Class_MetaDataParams)
};
void UIsdkConditionalBool::StaticRegisterNativesUIsdkConditionalBool()
{
	UClass* Class = UIsdkConditionalBool::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkConditionalBool_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkConditionalBool()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalBool.OuterSingleton, Z_Construct_UClass_UIsdkConditionalBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalBool.OuterSingleton;
}
UIsdkConditionalBool::UIsdkConditionalBool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkConditionalBool);
UIsdkConditionalBool::~UIsdkConditionalBool() {}
// ********** End Class UIsdkConditionalBool *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalBool_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalBool, UIsdkConditionalBool::StaticClass, TEXT("UIsdkConditionalBool"), &Z_Registration_Info_UClass_UIsdkConditionalBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalBool), 3580348938U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalBool_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalBool_h__Script_OculusInteraction_4061933580{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalBool_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalBool_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
