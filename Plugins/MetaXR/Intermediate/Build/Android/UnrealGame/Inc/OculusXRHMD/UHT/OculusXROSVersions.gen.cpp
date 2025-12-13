// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXROSVersions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXROSVersions() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXROSVersion();
UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOculusXROSVersion ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXROSVersion;
class UScriptStruct* FOculusXROSVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXROSVersion, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("OculusXROSVersion"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXROSVersion.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXROSVersion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Struct that wraps the version number, this allows for better customization of the appearance in the editor.\n" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
		{ "ToolTip", "Struct that wraps the version number, this allows for better customization of the appearance in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLatest_MetaData[] = {
		{ "Category", "OculusXR" },
		{ "ModuleRelativePath", "Public/OculusXROSVersions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static void NewProp_bLatest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLatest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXROSVersion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXROSVersion, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
void Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_bLatest_SetBit(void* Obj)
{
	((FOculusXROSVersion*)Obj)->bLatest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_bLatest = { "bLatest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOculusXROSVersion), &Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_bLatest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLatest_MetaData), NewProp_bLatest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewProp_bLatest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
	nullptr,
	&NewStructOps,
	"OculusXROSVersion",
	Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::PropPointers),
	sizeof(FOculusXROSVersion),
	alignof(FOculusXROSVersion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXROSVersion()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton, Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXROSVersion.InnerSingleton;
}
// ********** End ScriptStruct FOculusXROSVersion **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOculusXROSVersion::StaticStruct, Z_Construct_UScriptStruct_FOculusXROSVersion_Statics::NewStructOps, TEXT("OculusXROSVersion"), &Z_Registration_Info_UScriptStruct_FOculusXROSVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXROSVersion), 462568961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_3309175854(TEXT("/Script/OculusXRHMD"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OculusXR_release_HostProject_Plugins_OculusXR_Source_OculusXRHMD_Public_OculusXROSVersions_h__Script_OculusXRHMD_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
