// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssist/BlueprintAssistObjects/BABlueprintHandlerObject.h"
#include "Engine/Blueprint.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBABlueprintHandlerObject() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBABlueprintHandlerObject ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBABlueprintHandlerObject;
UClass* UBABlueprintHandlerObject::GetPrivateStaticClass()
{
	using TClass = UBABlueprintHandlerObject;
	if (!Z_Registration_Info_UClass_UBABlueprintHandlerObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BABlueprintHandlerObject"),
			Z_Registration_Info_UClass_UBABlueprintHandlerObject.InnerSingleton,
			StaticRegisterNativesUBABlueprintHandlerObject,
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
	return Z_Registration_Info_UClass_UBABlueprintHandlerObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UBABlueprintHandlerObject_NoRegister()
{
	return UBABlueprintHandlerObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBABlueprintHandlerObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPtr_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVariables_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFunctionGraphs_MetaData[] = {
		{ "ModuleRelativePath", "BlueprintAssistObjects/BABlueprintHandlerObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBABlueprintHandlerObject constinit property declarations ****************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BlueprintPtr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVariables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastVariables;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastFunctionGraphs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastFunctionGraphs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBABlueprintHandlerObject constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBABlueprintHandlerObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBABlueprintHandlerObject_Statics

// ********** Begin Class UBABlueprintHandlerObject Property Definitions ***************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr = { "BlueprintPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, BlueprintPtr), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintPtr_MetaData), NewProp_BlueprintPtr_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner = { "LastVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(0, nullptr) }; // 248112479
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables = { "LastVariables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVariables_MetaData), NewProp_LastVariables_MetaData) }; // 248112479
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_Inner = { "LastFunctionGraphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs = { "LastFunctionGraphs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBABlueprintHandlerObject, LastFunctionGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFunctionGraphs_MetaData), NewProp_LastFunctionGraphs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_BlueprintPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBABlueprintHandlerObject_Statics::NewProp_LastFunctionGraphs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers) < 2048);
// ********** End Class UBABlueprintHandlerObject Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams = {
	&UBABlueprintHandlerObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UBABlueprintHandlerObject_Statics::Class_MetaDataParams)
};
void UBABlueprintHandlerObject::StaticRegisterNativesUBABlueprintHandlerObject()
{
}
UClass* Z_Construct_UClass_UBABlueprintHandlerObject()
{
	if (!Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton, Z_Construct_UClass_UBABlueprintHandlerObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBABlueprintHandlerObject.OuterSingleton;
}
UBABlueprintHandlerObject::UBABlueprintHandlerObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBABlueprintHandlerObject);
// ********** End Class UBABlueprintHandlerObject **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h__Script_BlueprintAssist_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBABlueprintHandlerObject, UBABlueprintHandlerObject::StaticClass, TEXT("UBABlueprintHandlerObject"), &Z_Registration_Info_UClass_UBABlueprintHandlerObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBABlueprintHandlerObject), 2282909549U) },
	};
}; // Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h__Script_BlueprintAssist_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h__Script_BlueprintAssist_3809084596{
	TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h__Script_BlueprintAssist_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_BlueprintAssistObjects_BABlueprintHandlerObject_h__Script_BlueprintAssist_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
