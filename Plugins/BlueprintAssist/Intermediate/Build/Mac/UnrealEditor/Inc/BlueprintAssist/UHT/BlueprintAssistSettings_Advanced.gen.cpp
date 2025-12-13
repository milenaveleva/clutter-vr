// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssistSettings_Advanced.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings_Advanced() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_Advanced();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_Advanced_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBASettings_Advanced *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBASettings_Advanced;
UClass* UBASettings_Advanced::GetPrivateStaticClass()
{
	using TClass = UBASettings_Advanced;
	if (!Z_Registration_Info_UClass_UBASettings_Advanced.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BASettings_Advanced"),
			Z_Registration_Info_UClass_UBASettings_Advanced.InnerSingleton,
			StaticRegisterNativesUBASettings_Advanced,
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
	return Z_Registration_Info_UClass_UBASettings_Advanced.InnerSingleton;
}
UClass* Z_Construct_UClass_UBASettings_Advanced_NoRegister()
{
	return UBASettings_Advanced::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBASettings_Advanced_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings_Advanced.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData[] = {
		{ "Category", "Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Fix for issue where copy-pasting material nodes will result in their material expressions having the same GUID */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fix for issue where copy-pasting material nodes will result in their material expressions having the same GUID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStoreCacheDataInPackageMetaData_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomBlueprintActionMenu_MetaData[] = {
		{ "Category", "Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Use a custom blueprint action menu for creating nodes (very prototype, not supported in 5.0 or earlier) */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use a custom blueprint action menu for creating nodes (very prototype, not supported in 5.0 or earlier)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledCommands_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_Advanced.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBASettings_Advanced constinit property declarations *********************
	static void NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueGUIDForMaterialExpressions;
	static void NewProp_bStoreCacheDataInPackageMetaData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreCacheDataInPackageMetaData;
	static void NewProp_bUseCustomBlueprintActionMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomBlueprintActionMenu;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisabledCommands_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DisabledCommands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBASettings_Advanced constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings_Advanced>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBASettings_Advanced_Statics

// ********** Begin Class UBASettings_Advanced Property Definitions ********************************
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bGenerateUniqueGUIDForMaterialExpressions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions = { "bGenerateUniqueGUIDForMaterialExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData), NewProp_bGenerateUniqueGUIDForMaterialExpressions_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bStoreCacheDataInPackageMetaData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData = { "bStoreCacheDataInPackageMetaData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStoreCacheDataInPackageMetaData_MetaData), NewProp_bStoreCacheDataInPackageMetaData_MetaData) };
void Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu_SetBit(void* Obj)
{
	((UBASettings_Advanced*)Obj)->bUseCustomBlueprintActionMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu = { "bUseCustomBlueprintActionMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_Advanced), &Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomBlueprintActionMenu_MetaData), NewProp_bUseCustomBlueprintActionMenu_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands_ElementProp = { "DisabledCommands", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands = { "DisabledCommands", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_Advanced, DisabledCommands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledCommands_MetaData), NewProp_DisabledCommands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bGenerateUniqueGUIDForMaterialExpressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bStoreCacheDataInPackageMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_bUseCustomBlueprintActionMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_Advanced_Statics::NewProp_DisabledCommands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers) < 2048);
// ********** End Class UBASettings_Advanced Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UBASettings_Advanced_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_Advanced_Statics::ClassParams = {
	&UBASettings_Advanced::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_Advanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASettings_Advanced_Statics::Class_MetaDataParams)
};
void UBASettings_Advanced::StaticRegisterNativesUBASettings_Advanced()
{
}
UClass* Z_Construct_UClass_UBASettings_Advanced()
{
	if (!Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton, Z_Construct_UClass_UBASettings_Advanced_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASettings_Advanced.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBASettings_Advanced);
UBASettings_Advanced::~UBASettings_Advanced() {}
// ********** End Class UBASettings_Advanced *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h__Script_BlueprintAssist_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASettings_Advanced, UBASettings_Advanced::StaticClass, TEXT("UBASettings_Advanced"), &Z_Registration_Info_UClass_UBASettings_Advanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettings_Advanced), 4000962781U) },
	};
}; // Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h__Script_BlueprintAssist_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h__Script_BlueprintAssist_2797229459{
	TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h__Script_BlueprintAssist_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_Advanced_h__Script_BlueprintAssist_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
