// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkRigModifier.h"
#include "GameplayTagContainer.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkRigModifier() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRigModifier Function InitializeRigModifier **************************
struct IsdkRigModifier_eventInitializeRigModifier_Parms
{
	UIsdkRigComponent* CallingRigComponent;
};
static FName NAME_UIsdkRigModifier_InitializeRigModifier = FName(TEXT("InitializeRigModifier"));
void UIsdkRigModifier::InitializeRigModifier(UIsdkRigComponent* CallingRigComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UIsdkRigModifier_InitializeRigModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IsdkRigModifier_eventInitializeRigModifier_Parms Parms;
		Parms.CallingRigComponent=CallingRigComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeRigModifier_Implementation(CallingRigComponent);
	}
}
struct Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Called by the RigComponent during initialization (Implementable in Blueprint or C++)\n   * @param CallingRigComponent The Rig Component initializing this modifier\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called by the RigComponent during initialization (Implementable in Blueprint or C++)\n@param CallingRigComponent The Rig Component initializing this modifier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeRigModifier constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeRigModifier constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeRigModifier Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::NewProp_CallingRigComponent = { "CallingRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigModifier_eventInitializeRigModifier_Parms, CallingRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingRigComponent_MetaData), NewProp_CallingRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::NewProp_CallingRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers) < 2048);
// ********** End Function InitializeRigModifier Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigModifier, nullptr, "InitializeRigModifier", 	Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers), 
sizeof(IsdkRigModifier_eventInitializeRigModifier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkRigModifier_eventInitializeRigModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigModifier::execInitializeRigModifier)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_CallingRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRigModifier_Implementation(Z_Param_CallingRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigModifier Function InitializeRigModifier ****************************

// ********** Begin Class UIsdkRigModifier Function ShutdownRigModifier ****************************
struct IsdkRigModifier_eventShutdownRigModifier_Parms
{
	UIsdkRigComponent* CallingRigComponent;
};
static FName NAME_UIsdkRigModifier_ShutdownRigModifier = FName(TEXT("ShutdownRigModifier"));
void UIsdkRigModifier::ShutdownRigModifier(UIsdkRigComponent* CallingRigComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UIsdkRigModifier_ShutdownRigModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IsdkRigModifier_eventShutdownRigModifier_Parms Parms;
		Parms.CallingRigComponent=CallingRigComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ShutdownRigModifier_Implementation(CallingRigComponent);
	}
}
struct Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * @brief Called by the RigComponent during EndPlay (Implementable in Blueprint or C++)\n   * @param CallingRigComponent The Rig Component shutting this down\n   */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called by the RigComponent during EndPlay (Implementable in Blueprint or C++)\n@param CallingRigComponent The Rig Component shutting this down" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShutdownRigModifier constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShutdownRigModifier constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShutdownRigModifier Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::NewProp_CallingRigComponent = { "CallingRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigModifier_eventShutdownRigModifier_Parms, CallingRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingRigComponent_MetaData), NewProp_CallingRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::NewProp_CallingRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers) < 2048);
// ********** End Function ShutdownRigModifier Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigModifier, nullptr, "ShutdownRigModifier", 	Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers), 
sizeof(IsdkRigModifier_eventShutdownRigModifier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkRigModifier_eventShutdownRigModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigModifier::execShutdownRigModifier)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_CallingRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShutdownRigModifier_Implementation(Z_Param_CallingRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigModifier Function ShutdownRigModifier ******************************

// ********** Begin Class UIsdkRigModifier *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRigModifier;
UClass* UIsdkRigModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkRigModifier;
	if (!Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkRigModifier"),
			Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton,
			StaticRegisterNativesUIsdkRigModifier,
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
	return Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister()
{
	return UIsdkRigModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkRigModifier\n * @brief Abstract class that is intended to modify Rig Components based on certain conditions\n *\n * Can utilize passed in state events & GameplayTag matching to determine if RigModifier should\n * trigger, based on configuration\n * @see UIsdkRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
#endif
		{ "IncludePath", "Rig/IsdkRigModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkRigModifier\n@brief Abstract class that is intended to modify Rig Components based on certain conditions\n\nCan utilize passed in state events & GameplayTag matching to determine if RigModifier should\ntrigger, based on configuration\n@see UIsdkRigComponent\n@addtogroup InteractionSDKPrebuilts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorStateTriggers_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any state entry in this array will cause this modifier to trigger */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any state entry in this array will cause this modifier to trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorStateChangeTriggers_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any state change entry in this array will cause this modifier to trigger */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any state change entry in this array will cause this modifier to trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInteractorGameplayTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional gameplay tags that must be on the interactor for this modifier to trigger */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional gameplay tags that must be on the interactor for this modifier to trigger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInteractableGameplayTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional gameplay tags that must be on the interactable for this modifier to trigger. Only\n   * grabbable components currently supported. */" },
#endif
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional gameplay tags that must be on the interactable for this modifier to trigger. Only\ngrabbable components currently supported." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRigComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Rig Component this RigModifier was spawned by. Set by the Rig Component during\n   * initialization*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Rig Component this RigModifier was spawned by. Set by the Rig Component during\ninitialization" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkRigModifier constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractorStateTriggers_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractorStateTriggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractorStateTriggers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorStateChangeTriggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractorStateChangeTriggers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInteractorGameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInteractableGameplayTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkRigModifier constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("InitializeRigModifier"), .Pointer = &UIsdkRigModifier::execInitializeRigModifier },
		{ .NameUTF8 = UTF8TEXT("ShutdownRigModifier"), .Pointer = &UIsdkRigModifier::execShutdownRigModifier },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier, "InitializeRigModifier" }, // 1660110004
		{ &Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier, "ShutdownRigModifier" }, // 3039198233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRigModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkRigModifier_Statics

// ********** Begin Class UIsdkRigModifier Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner = { "InteractorStateTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(0, nullptr) }; // 1908326024
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers = { "InteractorStateTriggers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, InteractorStateTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorStateTriggers_MetaData), NewProp_InteractorStateTriggers_MetaData) }; // 1908326024
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers_Inner = { "InteractorStateChangeTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs, METADATA_PARAMS(0, nullptr) }; // 2797970396
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers = { "InteractorStateChangeTriggers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, InteractorStateChangeTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorStateChangeTriggers_MetaData), NewProp_InteractorStateChangeTriggers_MetaData) }; // 2797970396
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractorGameplayTags = { "RequiredInteractorGameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, RequiredInteractorGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInteractorGameplayTags_MetaData), NewProp_RequiredInteractorGameplayTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractableGameplayTags = { "RequiredInteractableGameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, RequiredInteractableGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInteractableGameplayTags_MetaData), NewProp_RequiredInteractableGameplayTags_MetaData) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_ParentRigComponent = { "ParentRigComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, ParentRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRigComponent_MetaData), NewProp_ParentRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractorGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractableGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_ParentRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers) < 2048);
// ********** End Class UIsdkRigModifier Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UIsdkRigModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRigModifier_Statics::ClassParams = {
	&UIsdkRigModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRigModifier_Statics::Class_MetaDataParams)
};
void UIsdkRigModifier::StaticRegisterNativesUIsdkRigModifier()
{
	UClass* Class = UIsdkRigModifier::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkRigModifier_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkRigModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton, Z_Construct_UClass_UIsdkRigModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkRigModifier);
UIsdkRigModifier::~UIsdkRigModifier() {}
// ********** End Class UIsdkRigModifier ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRigModifier, UIsdkRigModifier::StaticClass, TEXT("UIsdkRigModifier"), &Z_Registration_Info_UClass_UIsdkRigModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRigModifier), 4070918588U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_2270770911{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
