// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssistEditorFeatures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistEditorFeatures() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBAEditorFeatures ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBAEditorFeatures;
UClass* UBAEditorFeatures::GetPrivateStaticClass()
{
	using TClass = UBAEditorFeatures;
	if (!Z_Registration_Info_UClass_UBAEditorFeatures.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BAEditorFeatures"),
			Z_Registration_Info_UClass_UBAEditorFeatures.InnerSingleton,
			StaticRegisterNativesUBAEditorFeatures,
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
	return Z_Registration_Info_UClass_UBAEditorFeatures.InnerSingleton;
}
UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister()
{
	return UBAEditorFeatures::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBAEditorFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistEditorFeatures.h" },
		{ "ModuleRelativePath", "Private/BlueprintAssistEditorFeatures.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBAEditorFeatures constinit property declarations ************************
// ********** End Class UBAEditorFeatures constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBAEditorFeatures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBAEditorFeatures_Statics
UObject* (*const Z_Construct_UClass_UBAEditorFeatures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBAEditorFeatures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBAEditorFeatures_Statics::ClassParams = {
	&UBAEditorFeatures::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBAEditorFeatures_Statics::Class_MetaDataParams), Z_Construct_UClass_UBAEditorFeatures_Statics::Class_MetaDataParams)
};
void UBAEditorFeatures::StaticRegisterNativesUBAEditorFeatures()
{
}
UClass* Z_Construct_UClass_UBAEditorFeatures()
{
	if (!Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton, Z_Construct_UClass_UBAEditorFeatures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBAEditorFeatures.OuterSingleton;
}
UBAEditorFeatures::UBAEditorFeatures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBAEditorFeatures);
// ********** End Class UBAEditorFeatures **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h__Script_BlueprintAssist_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBAEditorFeatures, UBAEditorFeatures::StaticClass, TEXT("UBAEditorFeatures"), &Z_Registration_Info_UClass_UBAEditorFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBAEditorFeatures), 3322907934U) },
	};
}; // Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h__Script_BlueprintAssist_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h__Script_BlueprintAssist_2131005174{
	TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h__Script_BlueprintAssist_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Private_BlueprintAssistEditorFeatures_h__Script_BlueprintAssist_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
