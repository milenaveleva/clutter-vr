// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestConditionalComponentIsActive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkTestConditionalComponentIsActive() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkTestConditionalComponentIsActive_Component **************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component;
UClass* UIsdkTestConditionalComponentIsActive_Component::GetPrivateStaticClass()
{
	using TClass = UIsdkTestConditionalComponentIsActive_Component;
	if (!Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkTestConditionalComponentIsActive_Component"),
			Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.InnerSingleton,
			StaticRegisterNativesUIsdkTestConditionalComponentIsActive_Component,
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
	return Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_NoRegister()
{
	return UIsdkTestConditionalComponentIsActive_Component::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestConditionalComponentIsActive.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestConditionalComponentIsActive.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkTestConditionalComponentIsActive_Component constinit property declarations 
// ********** End Class UIsdkTestConditionalComponentIsActive_Component constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTestConditionalComponentIsActive_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics
UObject* (*const Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::ClassParams = {
	&UIsdkTestConditionalComponentIsActive_Component::StaticClass,
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
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::Class_MetaDataParams)
};
void UIsdkTestConditionalComponentIsActive_Component::StaticRegisterNativesUIsdkTestConditionalComponentIsActive_Component()
{
}
UClass* Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component()
{
	if (!Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.OuterSingleton, Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkTestConditionalComponentIsActive_Component);
UIsdkTestConditionalComponentIsActive_Component::~UIsdkTestConditionalComponentIsActive_Component() {}
// ********** End Class UIsdkTestConditionalComponentIsActive_Component ****************************

// ********** Begin Class AIsdkTestConditionalComponentIsActive_Actor ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor;
UClass* AIsdkTestConditionalComponentIsActive_Actor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestConditionalComponentIsActive_Actor;
	if (!Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkTestConditionalComponentIsActive_Actor"),
			Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.InnerSingleton,
			StaticRegisterNativesAIsdkTestConditionalComponentIsActive_Actor,
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
	return Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_NoRegister()
{
	return AIsdkTestConditionalComponentIsActive_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestConditionalComponentIsActive.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestConditionalComponentIsActive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditional_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestConditionalComponentIsActive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestConditionalComponentIsActive.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIsdkTestConditionalComponentIsActive_Actor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIsdkTestConditionalComponentIsActive_Actor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestConditionalComponentIsActive_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics

// ********** Begin Class AIsdkTestConditionalComponentIsActive_Actor Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::NewProp_Conditional = { "Conditional", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestConditionalComponentIsActive_Actor, Conditional), Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditional_MetaData), NewProp_Conditional_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestConditionalComponentIsActive_Actor, OtherComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComponent_MetaData), NewProp_OtherComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::NewProp_Conditional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::NewProp_OtherComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::PropPointers) < 2048);
// ********** End Class AIsdkTestConditionalComponentIsActive_Actor Property Definitions ***********
UObject* (*const Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::ClassParams = {
	&AIsdkTestConditionalComponentIsActive_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::Class_MetaDataParams)
};
void AIsdkTestConditionalComponentIsActive_Actor::StaticRegisterNativesAIsdkTestConditionalComponentIsActive_Actor()
{
}
UClass* Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.OuterSingleton, Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIsdkTestConditionalComponentIsActive_Actor);
AIsdkTestConditionalComponentIsActive_Actor::~AIsdkTestConditionalComponentIsActive_Actor() {}
// ********** End Class AIsdkTestConditionalComponentIsActive_Actor ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestConditionalComponentIsActive_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkTestConditionalComponentIsActive_Component, UIsdkTestConditionalComponentIsActive_Component::StaticClass, TEXT("UIsdkTestConditionalComponentIsActive_Component"), &Z_Registration_Info_UClass_UIsdkTestConditionalComponentIsActive_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTestConditionalComponentIsActive_Component), 1854854604U) },
		{ Z_Construct_UClass_AIsdkTestConditionalComponentIsActive_Actor, AIsdkTestConditionalComponentIsActive_Actor::StaticClass, TEXT("AIsdkTestConditionalComponentIsActive_Actor"), &Z_Registration_Info_UClass_AIsdkTestConditionalComponentIsActive_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestConditionalComponentIsActive_Actor), 2343466108U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestConditionalComponentIsActive_h__Script_OculusInteractionEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestConditionalComponentIsActive_h__Script_OculusInteractionEditor_1720881579{
	TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestConditionalComponentIsActive_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestConditionalComponentIsActive_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
