// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabPoseCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkGrabPoseCollection() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPoseCollection();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkGrabPoseCollection *******************************************
struct Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkGrabPoseCollection); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkGrabPoseCollection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Helper struct meant to be used to gather the pointer or grab pose events sent to a class.\n * Meant to be used as an IGrabbable\n */" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabPoseCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Helper struct meant to be used to gather the pointer or grab pose events sent to a class.\nMeant to be used as an IGrabbable" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkGrabPoseCollection constinit property declarations ***********
// ********** End ScriptStruct FIsdkGrabPoseCollection constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabPoseCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection;
class UScriptStruct* FIsdkGrabPoseCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabPoseCollection, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabPoseCollection"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabPoseCollection",
	nullptr,
	0,
	sizeof(FIsdkGrabPoseCollection),
	alignof(FIsdkGrabPoseCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPoseCollection()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton);
}
// ********** End ScriptStruct FIsdkGrabPoseCollection *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkGrabPoseCollection::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::NewStructOps, TEXT("IsdkGrabPoseCollection"),&Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabPoseCollection), 3118701672U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_3561424021{
	TEXT("/Script/OculusInteraction"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
