// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BARootObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBARootObject() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBAEditorFeatures_NoRegister();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBARootObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBARootObject ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBARootObject;
UClass* UBARootObject::GetPrivateStaticClass()
{
	using TClass = UBARootObject;
	if (!Z_Registration_Info_UClass_UBARootObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BARootObject"),
			Z_Registration_Info_UClass_UBARootObject.InnerSingleton,
			StaticRegisterNativesUBARootObject,
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
	return Z_Registration_Info_UClass_UBARootObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UBARootObject_NoRegister()
{
	return UBARootObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBARootObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistObjects/BARootObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetHandler_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorFeatures_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BARootObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBARootObject constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBARootObject constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBARootObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBARootObject_Statics

// ********** Begin Class UBARootObject Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler = { "AssetHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBARootObject, AssetHandler), Z_Construct_UClass_UBAAssetEditorHandlerObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetHandler_MetaData), NewProp_AssetHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBARootObject_Statics::NewProp_EditorFeatures = { "EditorFeatures", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBARootObject, EditorFeatures), Z_Construct_UClass_UBAEditorFeatures_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorFeatures_MetaData), NewProp_EditorFeatures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBARootObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_AssetHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBARootObject_Statics::NewProp_EditorFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers) < 2048);
// ********** End Class UBARootObject Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UBARootObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBARootObject_Statics::ClassParams = {
	&UBARootObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBARootObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBARootObject_Statics::Class_MetaDataParams)
};
void UBARootObject::StaticRegisterNativesUBARootObject()
{
}
UClass* Z_Construct_UClass_UBARootObject()
{
	if (!Z_Registration_Info_UClass_UBARootObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBARootObject.OuterSingleton, Z_Construct_UClass_UBARootObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBARootObject.OuterSingleton;
}
UBARootObject::UBARootObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBARootObject);
UBARootObject::~UBARootObject() {}
// ********** End Class UBARootObject **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h__Script_BlueprintAssist_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBARootObject, UBARootObject::StaticClass, TEXT("UBARootObject"), &Z_Registration_Info_UClass_UBARootObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBARootObject), 2653465256U) },
	};
}; // Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h__Script_BlueprintAssist_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h__Script_BlueprintAssist_3770834572{
	TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h__Script_BlueprintAssist_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BARootObject_h__Script_BlueprintAssist_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
