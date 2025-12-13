// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestPokeInteraction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkTestPokeInteraction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestPokeInteractableActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestPokeInteractableActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestPokeInteractorActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestPokeInteractorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestPokeInteractorActor *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor;
UClass* AIsdkTestPokeInteractorActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestPokeInteractorActor;
	if (!Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkTestPokeInteractorActor"),
			Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestPokeInteractorActor,
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
	return Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestPokeInteractorActor_NoRegister()
{
	return AIsdkTestPokeInteractorActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestPokeInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPokeInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIsdkTestPokeInteractorActor constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPokeInteractor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIsdkTestPokeInteractorActor constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestPokeInteractorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics

// ********** Begin Class AIsdkTestPokeInteractorActor Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::NewProp_TestPokeInteractor = { "TestPokeInteractor", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestPokeInteractorActor, TestPokeInteractor), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPokeInteractor_MetaData), NewProp_TestPokeInteractor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::NewProp_TestPokeInteractor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::PropPointers) < 2048);
// ********** End Class AIsdkTestPokeInteractorActor Property Definitions **************************
UObject* (*const Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::ClassParams = {
	&AIsdkTestPokeInteractorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::Class_MetaDataParams)
};
void AIsdkTestPokeInteractorActor::StaticRegisterNativesAIsdkTestPokeInteractorActor()
{
}
UClass* Z_Construct_UClass_AIsdkTestPokeInteractorActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.OuterSingleton, Z_Construct_UClass_AIsdkTestPokeInteractorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIsdkTestPokeInteractorActor);
AIsdkTestPokeInteractorActor::~AIsdkTestPokeInteractorActor() {}
// ********** End Class AIsdkTestPokeInteractorActor ***********************************************

// ********** Begin Class AIsdkTestPokeInteractableActor *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor;
UClass* AIsdkTestPokeInteractableActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestPokeInteractableActor;
	if (!Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkTestPokeInteractableActor"),
			Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestPokeInteractableActor,
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
	return Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestPokeInteractableActor_NoRegister()
{
	return AIsdkTestPokeInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestPokeInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPokeInteractable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPointablePlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestClippedPlaneSurface_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestPokeInteraction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIsdkTestPokeInteractableActor constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPokeInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPointablePlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestClippedPlaneSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIsdkTestPokeInteractableActor constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestPokeInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics

// ********** Begin Class AIsdkTestPokeInteractableActor Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestPokeInteractable = { "TestPokeInteractable", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestPokeInteractableActor, TestPokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPokeInteractable_MetaData), NewProp_TestPokeInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestPointablePlane = { "TestPointablePlane", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestPokeInteractableActor, TestPointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPointablePlane_MetaData), NewProp_TestPointablePlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestClippedPlaneSurface = { "TestClippedPlaneSurface", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestPokeInteractableActor, TestClippedPlaneSurface), Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestClippedPlaneSurface_MetaData), NewProp_TestClippedPlaneSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestPokeInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestPointablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::NewProp_TestClippedPlaneSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::PropPointers) < 2048);
// ********** End Class AIsdkTestPokeInteractableActor Property Definitions ************************
UObject* (*const Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::ClassParams = {
	&AIsdkTestPokeInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::Class_MetaDataParams)
};
void AIsdkTestPokeInteractableActor::StaticRegisterNativesAIsdkTestPokeInteractableActor()
{
}
UClass* Z_Construct_UClass_AIsdkTestPokeInteractableActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.OuterSingleton, Z_Construct_UClass_AIsdkTestPokeInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIsdkTestPokeInteractableActor);
AIsdkTestPokeInteractableActor::~AIsdkTestPokeInteractableActor() {}
// ********** End Class AIsdkTestPokeInteractableActor *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestPokeInteraction_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestPokeInteractorActor, AIsdkTestPokeInteractorActor::StaticClass, TEXT("AIsdkTestPokeInteractorActor"), &Z_Registration_Info_UClass_AIsdkTestPokeInteractorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestPokeInteractorActor), 1866871183U) },
		{ Z_Construct_UClass_AIsdkTestPokeInteractableActor, AIsdkTestPokeInteractableActor::StaticClass, TEXT("AIsdkTestPokeInteractableActor"), &Z_Registration_Info_UClass_AIsdkTestPokeInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestPokeInteractableActor), 1419218359U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestPokeInteraction_h__Script_OculusInteractionEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestPokeInteraction_h__Script_OculusInteractionEditor_2161012856{
	TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestPokeInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestPokeInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
