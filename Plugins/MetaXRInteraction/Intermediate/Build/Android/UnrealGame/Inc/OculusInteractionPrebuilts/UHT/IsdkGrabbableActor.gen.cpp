// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkGrabbableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkGrabbableActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkGrabbableActor();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkGrabbableActor_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkGrabbableActor ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkGrabbableActor;
UClass* AIsdkGrabbableActor::GetPrivateStaticClass()
{
	using TClass = AIsdkGrabbableActor;
	if (!Z_Registration_Info_UClass_AIsdkGrabbableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkGrabbableActor"),
			Z_Registration_Info_UClass_AIsdkGrabbableActor.InnerSingleton,
			StaticRegisterNativesAIsdkGrabbableActor,
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
	return Z_Registration_Info_UClass_AIsdkGrabbableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkGrabbableActor_NoRegister()
{
	return AIsdkGrabbableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkGrabbableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IsdkGrabbableActor.h" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbableComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n   * Instance of grabbable prebuilt component\n   */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance of grabbable prebuilt component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIsdkGrabbableActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbableComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIsdkGrabbableActor constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkGrabbableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIsdkGrabbableActor_Statics

// ********** Begin Class AIsdkGrabbableActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkGrabbableActor_Statics::NewProp_GrabbableComponent = { "GrabbableComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkGrabbableActor, GrabbableComponent), Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbableComponent_MetaData), NewProp_GrabbableComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkGrabbableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkGrabbableActor_Statics::NewProp_GrabbableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkGrabbableActor_Statics::PropPointers) < 2048);
// ********** End Class AIsdkGrabbableActor Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_AIsdkGrabbableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkGrabbableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkGrabbableActor_Statics::ClassParams = {
	&AIsdkGrabbableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkGrabbableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkGrabbableActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkGrabbableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkGrabbableActor_Statics::Class_MetaDataParams)
};
void AIsdkGrabbableActor::StaticRegisterNativesAIsdkGrabbableActor()
{
}
UClass* Z_Construct_UClass_AIsdkGrabbableActor()
{
	if (!Z_Registration_Info_UClass_AIsdkGrabbableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkGrabbableActor.OuterSingleton, Z_Construct_UClass_AIsdkGrabbableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkGrabbableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIsdkGrabbableActor);
AIsdkGrabbableActor::~AIsdkGrabbableActor() {}
// ********** End Class AIsdkGrabbableActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableActor_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkGrabbableActor, AIsdkGrabbableActor::StaticClass, TEXT("AIsdkGrabbableActor"), &Z_Registration_Info_UClass_AIsdkGrabbableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkGrabbableActor), 2069802175U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableActor_h__Script_OculusInteractionPrebuilts_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableActor_h__Script_OculusInteractionPrebuilts_3401477{
	TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableActor_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableActor_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
