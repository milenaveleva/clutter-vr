// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystem/IsdkHandPoseSubsystem.h"
#include "HandPoseDetection/IsdkHandPoseDetectionProfile.h"
#include "IsdkHandPoseData.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerRecognizer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseSubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandThumbRecognizer_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataCache();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkHandPoseDataGroup ********************************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDataGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDataGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedHandPoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDataGroup constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedHandPoses_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedHandPoses_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedHandPoses_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedHandPoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDataGroup constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDataGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup;
class UScriptStruct* FIsdkHandPoseDataGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDataGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDataGroup Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_ValueProp = { "CachedHandPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_Key_KeyProp = { "CachedHandPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(0, nullptr) }; // 2143392285
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses = { "CachedHandPoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataGroup, CachedHandPoses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedHandPoses_MetaData), NewProp_CachedHandPoses_MetaData) }; // 2143392285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewProp_CachedHandPoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDataGroup Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDataGroup",
	Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::PropPointers),
	sizeof(FIsdkHandPoseDataGroup),
	alignof(FIsdkHandPoseDataGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDataGroup **********************************************

// ********** Begin ScriptStruct FIsdkHandPoseDataCache ********************************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDataCache); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDataCache); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTransforms_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached relative transforms for each hand grab pose\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached relative transforms for each hand grab pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedProperties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core behavior properties for each hand grab pose\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core behavior properties for each hand grab pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedHandPoseGroups_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pose groups, defining for each handedness type, which handposedata to use\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose groups, defining for each handedness type, which handposedata to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseNames_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FNames of each grab pose (as specified in editor for each component)\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FNames of each grab pose (as specified in editor for each component)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDataCache constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedHandPoseGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedHandPoseGroups;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachedPoseNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPoseNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDataCache constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDataCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache;
class UScriptStruct* FIsdkHandPoseDataCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDataCache, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDataCache"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDataCache Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedTransforms_Inner = { "CachedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedTransforms = { "CachedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataCache, CachedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTransforms_MetaData), NewProp_CachedTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedProperties_Inner = { "CachedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties, METADATA_PARAMS(0, nullptr) }; // 2151453187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedProperties = { "CachedProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataCache, CachedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedProperties_MetaData), NewProp_CachedProperties_MetaData) }; // 2151453187
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedHandPoseGroups_Inner = { "CachedHandPoseGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup, METADATA_PARAMS(0, nullptr) }; // 3280382305
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedHandPoseGroups = { "CachedHandPoseGroups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataCache, CachedHandPoseGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedHandPoseGroups_MetaData), NewProp_CachedHandPoseGroups_MetaData) }; // 3280382305
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedPoseNames_Inner = { "CachedPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedPoseNames = { "CachedPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataCache, CachedPoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPoseNames_MetaData), NewProp_CachedPoseNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedHandPoseGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedHandPoseGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedPoseNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewProp_CachedPoseNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDataCache Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDataCache",
	Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::PropPointers),
	sizeof(FIsdkHandPoseDataCache),
	alignof(FIsdkHandPoseDataCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataCache()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDataCache **********************************************

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshToProfile *******************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDetectionMeshToProfile); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDetectionMeshToProfile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileIndices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshToProfile constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProfileIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshToProfile constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDetectionMeshToProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile;
class UScriptStruct* FIsdkHandPoseDetectionMeshToProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDetectionMeshToProfile"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshToProfile Property Definitions **********
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::NewProp_ProfileIndices_Inner = { "ProfileIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::NewProp_ProfileIndices = { "ProfileIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionMeshToProfile, ProfileIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileIndices_MetaData), NewProp_ProfileIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::NewProp_ProfileIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::NewProp_ProfileIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshToProfile Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDetectionMeshToProfile",
	Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::PropPointers),
	sizeof(FIsdkHandPoseDetectionMeshToProfile),
	alignof(FIsdkHandPoseDetectionMeshToProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshToProfile *********************************

// ********** Begin ScriptStruct FIsdkHandPoseFingerRecognizerGroup ********************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseFingerRecognizerGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseFingerRecognizerGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerCalcToRecognizerIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseFingerRecognizerGroup constinit property declarations 
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_FingerCalcToRecognizerIndex_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerCalcToRecognizerIndex_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerCalcToRecognizerIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingerCalcToRecognizerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseFingerRecognizerGroup constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseFingerRecognizerGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup;
class UScriptStruct* FIsdkHandPoseFingerRecognizerGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseFingerRecognizerGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseFingerRecognizerGroup Property Definitions ***********
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_ValueProp = { "FingerCalcToRecognizerIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_Key_KeyProp = { "FingerCalcToRecognizerIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, METADATA_PARAMS(0, nullptr) }; // 2857846514
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex = { "FingerCalcToRecognizerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseFingerRecognizerGroup, FingerCalcToRecognizerIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerCalcToRecognizerIndex_MetaData), NewProp_FingerCalcToRecognizerIndex_MetaData) }; // 2857846514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewProp_FingerCalcToRecognizerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseFingerRecognizerGroup Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseFingerRecognizerGroup",
	Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::PropPointers),
	sizeof(FIsdkHandPoseFingerRecognizerGroup),
	alignof(FIsdkHandPoseFingerRecognizerGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseFingerRecognizerGroup **********************************

// ********** Begin ScriptStruct FIsdkHandPoseThumbRecognizerGroup *********************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseThumbRecognizerGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseThumbRecognizerGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbCalcToRecognizerIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseThumbRecognizerGroup constinit property declarations *
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ThumbCalcToRecognizerIndex_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbCalcToRecognizerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseThumbRecognizerGroup constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseThumbRecognizerGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup;
class UScriptStruct* FIsdkHandPoseThumbRecognizerGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseThumbRecognizerGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseThumbRecognizerGroup Property Definitions ************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_ValueProp = { "ThumbCalcToRecognizerIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp = { "ThumbCalcToRecognizerIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, METADATA_PARAMS(0, nullptr) }; // 2588286467
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex = { "ThumbCalcToRecognizerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseThumbRecognizerGroup, ThumbCalcToRecognizerIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbCalcToRecognizerIndex_MetaData), NewProp_ThumbCalcToRecognizerIndex_MetaData) }; // 2588286467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewProp_ThumbCalcToRecognizerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseThumbRecognizerGroup Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseThumbRecognizerGroup",
	Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::PropPointers),
	sizeof(FIsdkHandPoseThumbRecognizerGroup),
	alignof(FIsdkHandPoseThumbRecognizerGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseThumbRecognizerGroup ***********************************

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshGroup ***********************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDetectionMeshGroup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDetectionMeshGroup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerRecognizerGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbRecognizerGroup_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshGroup constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerRecognizerGroups_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerRecognizerGroups_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerRecognizerGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingerRecognizerGroups;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbRecognizerGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshGroup constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDetectionMeshGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup;
class UScriptStruct* FIsdkHandPoseDetectionMeshGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDetectionMeshGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDetectionMeshGroup Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_ValueProp = { "FingerRecognizerGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup, METADATA_PARAMS(0, nullptr) }; // 3403422761
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_Key_KeyProp = { "FingerRecognizerGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 155703524
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups = { "FingerRecognizerGroups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionMeshGroup, FingerRecognizerGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerRecognizerGroups_MetaData), NewProp_FingerRecognizerGroups_MetaData) }; // 155703524 3403422761
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_ThumbRecognizerGroup = { "ThumbRecognizerGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionMeshGroup, ThumbRecognizerGroup), Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbRecognizerGroup_MetaData), NewProp_ThumbRecognizerGroup_MetaData) }; // 1495163765
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_FingerRecognizerGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewProp_ThumbRecognizerGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshGroup Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDetectionMeshGroup",
	Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::PropPointers),
	sizeof(FIsdkHandPoseDetectionMeshGroup),
	alignof(FIsdkHandPoseDetectionMeshGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDetectionMeshGroup *************************************

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerFingerResult *******************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseRecognizerFingerResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseRecognizerFingerResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerResults_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerFingerResult constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerResults_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerResults_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerResults_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingerResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseRecognizerFingerResult constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseRecognizerFingerResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult;
class UScriptStruct* FIsdkHandPoseRecognizerFingerResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseRecognizerFingerResult"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerFingerResult Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_ValueProp = { "FingerResults", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_Key_KeyProp = { "FingerResults_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, METADATA_PARAMS(0, nullptr) }; // 2857846514
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults = { "FingerResults", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseRecognizerFingerResult, FingerResults), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerResults_MetaData), NewProp_FingerResults_MetaData) }; // 2857846514
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewProp_FingerResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseRecognizerFingerResult Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseRecognizerFingerResult",
	Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::PropPointers),
	sizeof(FIsdkHandPoseRecognizerFingerResult),
	alignof(FIsdkHandPoseRecognizerFingerResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseRecognizerFingerResult *********************************

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerResults ************************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseRecognizerResults); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseRecognizerResults); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingersResults_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbResults_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerResults constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingersResults_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingersResults_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingersResults_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingersResults;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbResults_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbResults_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbResults_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseRecognizerResults constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseRecognizerResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults;
class UScriptStruct* FIsdkHandPoseRecognizerResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseRecognizerResults"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseRecognizerResults Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_ValueProp = { "FingersResults", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult, METADATA_PARAMS(0, nullptr) }; // 421492523
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_Key_KeyProp = { "FingersResults_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 155703524
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults = { "FingersResults", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseRecognizerResults, FingersResults), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingersResults_MetaData), NewProp_FingersResults_MetaData) }; // 155703524 421492523
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_ValueProp = { "ThumbResults", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_Key_KeyProp = { "ThumbResults_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, METADATA_PARAMS(0, nullptr) }; // 2588286467
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults = { "ThumbResults", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseRecognizerResults, ThumbResults), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbResults_MetaData), NewProp_ThumbResults_MetaData) }; // 2588286467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_FingersResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewProp_ThumbResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseRecognizerResults Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseRecognizerResults",
	Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::PropPointers),
	sizeof(FIsdkHandPoseRecognizerResults),
	alignof(FIsdkHandPoseRecognizerResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseRecognizerResults **************************************

// ********** Begin ScriptStruct FIsdkHandPoseDataActorVariations **********************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDataActorVariations); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDataActorVariations); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Each entry is one index in the FIsdkHandPoseDataCache that is associated with this Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each entry is one index in the FIsdkHandPoseDataCache that is associated with this Actor" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDataActorVariations constinit property declarations **
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Variations_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Variations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDataActorVariations constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDataActorVariations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations;
class UScriptStruct* FIsdkHandPoseDataActorVariations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDataActorVariations"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDataActorVariations Property Definitions *************
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::NewProp_Variations_ElementProp = { "Variations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataActorVariations, Variations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variations_MetaData), NewProp_Variations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::NewProp_Variations_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::NewProp_Variations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDataActorVariations Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDataActorVariations",
	Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::PropPointers),
	sizeof(FIsdkHandPoseDataActorVariations),
	alignof(FIsdkHandPoseDataActorVariations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDataActorVariations ************************************

// ********** Begin ScriptStruct FIsdkHandPoseDataActorCache ***************************************
struct Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FIsdkHandPoseDataActorCache); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIsdkHandPoseDataActorCache); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceVariations_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map linking each actor instance to an array of variations associated with that specific\n// instance (multiple actors of the same blueprint class will likely share many variations unless\n// instance-specific changes are made\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map linking each actor instance to an array of variations associated with that specific\ninstance (multiple actors of the same blueprint class will likely share many variations unless\ninstance-specific changes are made" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseDataCache_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The primary cache for all pose data\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The primary cache for all pose data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMirrorVariationMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map linking an original pose with its mirrored one, as they will need to be added as a pair\n// when caching for other instances\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map linking an original pose with its mirrored one, as they will need to be added as a pair\nwhen caching for other instances" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIsdkHandPoseDataActorCache constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceVariations_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceVariations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InstanceVariations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseDataCache;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OriginalMirrorVariationMap_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_OriginalMirrorVariationMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OriginalMirrorVariationMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIsdkHandPoseDataActorCache constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDataActorCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache;
class UScriptStruct* FIsdkHandPoseDataActorCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDataActorCache"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.OuterSingleton;
	}

// ********** Begin ScriptStruct FIsdkHandPoseDataActorCache Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations_ValueProp = { "InstanceVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations, METADATA_PARAMS(0, nullptr) }; // 1389241099
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations_Key_KeyProp = { "InstanceVariations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations = { "InstanceVariations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataActorCache, InstanceVariations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceVariations_MetaData), NewProp_InstanceVariations_MetaData) }; // 1389241099
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_PoseDataCache = { "PoseDataCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataActorCache, PoseDataCache), Z_Construct_UScriptStruct_FIsdkHandPoseDataCache, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseDataCache_MetaData), NewProp_PoseDataCache_MetaData) }; // 1705247280
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap_ValueProp = { "OriginalMirrorVariationMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap_Key_KeyProp = { "OriginalMirrorVariationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap = { "OriginalMirrorVariationMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDataActorCache, OriginalMirrorVariationMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMirrorVariationMap_MetaData), NewProp_OriginalMirrorVariationMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_InstanceVariations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_PoseDataCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewProp_OriginalMirrorVariationMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FIsdkHandPoseDataActorCache Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDataActorCache",
	Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::PropPointers),
	sizeof(FIsdkHandPoseDataActorCache),
	alignof(FIsdkHandPoseDataActorCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache.InnerSingleton);
}
// ********** End ScriptStruct FIsdkHandPoseDataActorCache *****************************************

// ********** Begin Delegate FIsdkHandPoseDetectionEvent *******************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms
	{
		FName PoseName;
		UIsdkHandPoseDetectionProfile* DetectionProfile;
		UIsdkHandMeshComponent* DetectedMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Signifies that a registered pose detection has been triggered\n * 0 - The event\n * 1 - Name of pose\n * 2 - The profile used to determine the pose\n * 3 - The hand mesh component registered that detected the pose\n */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Signifies that a registered pose detection has been triggered\n0 - The event\n1 - Name of pose\n2 - The profile used to determine the pose\n3 - The hand mesh component registered that detected the pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FIsdkHandPoseDetectionEvent constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FIsdkHandPoseDetectionEvent constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FIsdkHandPoseDetectionEvent Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms, PoseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_DetectionProfile = { "DetectionProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms, DetectionProfile), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_DetectedMeshComponent = { "DetectedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms, DetectedMeshComponent), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedMeshComponent_MetaData), NewProp_DetectedMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_DetectionProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::NewProp_DetectedMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FIsdkHandPoseDetectionEvent Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkHandPoseDetectionEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkHandPoseDetectionEvent_DelegateWrapper(const FMulticastScriptDelegate& IsdkHandPoseDetectionEvent, FName PoseName, UIsdkHandPoseDetectionProfile* DetectionProfile, UIsdkHandMeshComponent* DetectedMeshComponent)
{
	struct _Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms
	{
		FName PoseName;
		UIsdkHandPoseDetectionProfile* DetectionProfile;
		UIsdkHandMeshComponent* DetectedMeshComponent;
	};
	_Script_OculusInteraction_eventIsdkHandPoseDetectionEvent_Parms Parms;
	Parms.PoseName=PoseName;
	Parms.DetectionProfile=DetectionProfile;
	Parms.DetectedMeshComponent=DetectedMeshComponent;
	IsdkHandPoseDetectionEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkHandPoseDetectionEvent *********************************************

// ********** Begin Class UIsdkHandPoseSubsystem Function CreateHandPoseDetectionProfileFromMesh ***
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics
{
	struct IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms
	{
		UIsdkHandMeshComponent* MeshComponentIn;
		float BaseTolerances;
		TArray<EIsdkFingerType> FingersToIgnore;
		bool bIgnoreThumb;
		FName PoseName;
		UIsdkHandPoseDetectionProfile* ProfileOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*@brief Wrapper for SetHandPoseDetectionProfileFromMesh that creates a new profile object instead\n  of using an existing one*/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Wrapper for SetHandPoseDetectionProfileFromMesh that creates a new profile object instead\n  of using an existing one" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateHandPoseDetectionProfileFromMesh constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTolerances;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingersToIgnore_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingersToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingersToIgnore;
	static void NewProp_bIgnoreThumb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreThumb;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateHandPoseDetectionProfileFromMesh constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateHandPoseDetectionProfileFromMesh Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_BaseTolerances = { "BaseTolerances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms, BaseTolerances), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner = { "FingersToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 155703524
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore = { "FingersToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms, FingersToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 155703524
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms*)Obj)->bIgnoreThumb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb = { "bIgnoreThumb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms, PoseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ProfileOut = { "ProfileOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms, ProfileOut), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_BaseTolerances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ProfileOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::PropPointers) < 2048);
// ********** End Function CreateHandPoseDetectionProfileFromMesh Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "CreateHandPoseDetectionProfileFromMesh", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::IsdkHandPoseSubsystem_eventCreateHandPoseDetectionProfileFromMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execCreateHandPoseDetectionProfileFromMesh)
{
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseTolerances);
	P_GET_TARRAY(EIsdkFingerType,Z_Param_FingersToIgnore);
	P_GET_UBOOL(Z_Param_bIgnoreThumb);
	P_GET_PROPERTY(FNameProperty,Z_Param_PoseName);
	P_GET_OBJECT_REF(UIsdkHandPoseDetectionProfile,Z_Param_Out_ProfileOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateHandPoseDetectionProfileFromMesh(Z_Param_MeshComponentIn,Z_Param_BaseTolerances,Z_Param_FingersToIgnore,Z_Param_bIgnoreThumb,Z_Param_PoseName,P_ARG_GC_BARRIER(Z_Param_Out_ProfileOut));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function CreateHandPoseDetectionProfileFromMesh *****

// ********** Begin Class UIsdkHandPoseSubsystem Function GenerateMirroredHandPoseData *************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics
{
	struct IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms
	{
		UIsdkHandPoseData* PreviousHandData;
		UIsdkHandPoseData* MirroredHandData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief For a given hand pose data, create the mirrored version of it (left->right or\n   * right->left) */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief For a given hand pose data, create the mirrored version of it (left->right or\n  * right->left)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateMirroredHandPoseData constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousHandData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirroredHandData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateMirroredHandPoseData constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateMirroredHandPoseData Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_PreviousHandData = { "PreviousHandData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms, PreviousHandData), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_MirroredHandData = { "MirroredHandData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms, MirroredHandData), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_PreviousHandData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_MirroredHandData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::PropPointers) < 2048);
// ********** End Function GenerateMirroredHandPoseData Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "GenerateMirroredHandPoseData", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::IsdkHandPoseSubsystem_eventGenerateMirroredHandPoseData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execGenerateMirroredHandPoseData)
{
	P_GET_OBJECT(UIsdkHandPoseData,Z_Param_PreviousHandData);
	P_GET_OBJECT_REF(UIsdkHandPoseData,Z_Param_Out_MirroredHandData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateMirroredHandPoseData(Z_Param_PreviousHandData,P_ARG_GC_BARRIER(Z_Param_Out_MirroredHandData));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function GenerateMirroredHandPoseData ***************

// ********** Begin Class UIsdkHandPoseSubsystem Function GetHandMeshDetectionResults **************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics
{
	struct IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms
	{
		UIsdkHandMeshComponent* MeshComponentIn;
		FIsdkHandPoseRecognizerResults ResultsOut;
		float DeltaTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief For a given hand mesh component, polls all of its created finger and thumb recognizers\n   * and writes the results out to HandMeshComponentResults   */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief For a given hand mesh component, polls all of its created finger and thumb recognizers\n  * and writes the results out to HandMeshComponentResults" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandMeshDetectionResults constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultsOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandMeshDetectionResults constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandMeshDetectionResults Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ResultsOut = { "ResultsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms, ResultsOut), Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, METADATA_PARAMS(0, nullptr) }; // 2594523178
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ResultsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::PropPointers) < 2048);
// ********** End Function GetHandMeshDetectionResults Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "GetHandMeshDetectionResults", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::IsdkHandPoseSubsystem_eventGetHandMeshDetectionResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execGetHandMeshDetectionResults)
{
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_GET_STRUCT_REF(FIsdkHandPoseRecognizerResults,Z_Param_Out_ResultsOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHandMeshDetectionResults(Z_Param_MeshComponentIn,Z_Param_Out_ResultsOut,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function GetHandMeshDetectionResults ****************

// ********** Begin Class UIsdkHandPoseSubsystem Function GetProfileDeltasFromResults **************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics
{
	struct IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms
	{
		UIsdkHandPoseDetectionProfile* ProfileIn;
		FIsdkHandPoseRecognizerResults ResultsIn;
		bool bRunFullDeltas;
		bool bResultsWithinTolerances;
		FIsdkHandPoseRecognizerResults DeltaResultsOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief For a given profile and hand mesh components results, compares the digits and\n   * calculations defined in the profile and produces results output, as well as a boolean to\n   * signify if all results fell within tolerances. If full deltas are enabled, all delta results\n   * will be written to DetectionProfileDeltaResults   */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief For a given profile and hand mesh components results, compares the digits and\n  * calculations defined in the profile and produces results output, as well as a boolean to\n  * signify if all results fell within tolerances. If full deltas are enabled, all delta results\n  * will be written to DetectionProfileDeltaResults" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetProfileDeltasFromResults constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultsIn;
	static void NewProp_bRunFullDeltas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunFullDeltas;
	static void NewProp_bResultsWithinTolerances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResultsWithinTolerances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaResultsOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProfileDeltasFromResults constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProfileDeltasFromResults Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ProfileIn = { "ProfileIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms, ProfileIn), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ResultsIn = { "ResultsIn", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms, ResultsIn), Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, METADATA_PARAMS(0, nullptr) }; // 2594523178
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bRunFullDeltas_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms*)Obj)->bRunFullDeltas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bRunFullDeltas = { "bRunFullDeltas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bRunFullDeltas_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bResultsWithinTolerances_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms*)Obj)->bResultsWithinTolerances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bResultsWithinTolerances = { "bResultsWithinTolerances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bResultsWithinTolerances_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_DeltaResultsOut = { "DeltaResultsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms, DeltaResultsOut), Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, METADATA_PARAMS(0, nullptr) }; // 2594523178
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ResultsIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bRunFullDeltas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_bResultsWithinTolerances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_DeltaResultsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::PropPointers) < 2048);
// ********** End Function GetProfileDeltasFromResults Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "GetProfileDeltasFromResults", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::IsdkHandPoseSubsystem_eventGetProfileDeltasFromResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execGetProfileDeltasFromResults)
{
	P_GET_OBJECT(UIsdkHandPoseDetectionProfile,Z_Param_ProfileIn);
	P_GET_STRUCT_REF(FIsdkHandPoseRecognizerResults,Z_Param_Out_ResultsIn);
	P_GET_UBOOL(Z_Param_bRunFullDeltas);
	P_GET_UBOOL_REF(Z_Param_Out_bResultsWithinTolerances);
	P_GET_STRUCT_REF(FIsdkHandPoseRecognizerResults,Z_Param_Out_DeltaResultsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetProfileDeltasFromResults(Z_Param_ProfileIn,Z_Param_Out_ResultsIn,Z_Param_bRunFullDeltas,Z_Param_Out_bResultsWithinTolerances,Z_Param_Out_DeltaResultsOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function GetProfileDeltasFromResults ****************

// ********** Begin Class UIsdkHandPoseSubsystem Function RegisterHandMeshForDetection *************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics
{
	struct IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms
	{
		UIsdkHandMeshComponent* MeshComponentIn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Registers a Hand Mesh Component, and creates a full suite of recognizers for it */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Registers a Hand Mesh Component, and creates a full suite of recognizers for it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterHandMeshForDetection constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterHandMeshForDetection constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterHandMeshForDetection Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::PropPointers) < 2048);
// ********** End Function RegisterHandMeshForDetection Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "RegisterHandMeshForDetection", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::IsdkHandPoseSubsystem_eventRegisterHandMeshForDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execRegisterHandMeshForDetection)
{
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterHandMeshForDetection(Z_Param_MeshComponentIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function RegisterHandMeshForDetection ***************

// ********** Begin Class UIsdkHandPoseSubsystem Function RegisterHandPoseDetection ****************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics
{
	struct IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms
	{
		UIsdkHandPoseDetectionProfile* ProfileIn;
		UIsdkHandMeshComponent* MeshComponentIn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Registers a hand pose detection profile, will also create recognizers for the hand mesh\n   * component if they're not already in place, using the profile to optimally only create needed\n   * recognizers */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Registers a hand pose detection profile, will also create recognizers for the hand mesh\n  * component if they're not already in place, using the profile to optimally only create needed\n  * recognizers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterHandPoseDetection constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterHandPoseDetection constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterHandPoseDetection Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ProfileIn = { "ProfileIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms, ProfileIn), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::PropPointers) < 2048);
// ********** End Function RegisterHandPoseDetection Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "RegisterHandPoseDetection", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventRegisterHandPoseDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execRegisterHandPoseDetection)
{
	P_GET_OBJECT(UIsdkHandPoseDetectionProfile,Z_Param_ProfileIn);
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterHandPoseDetection(Z_Param_ProfileIn,Z_Param_MeshComponentIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function RegisterHandPoseDetection ******************

// ********** Begin Class UIsdkHandPoseSubsystem Function RegisterHandPoseDetectionMultiple ********
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics
{
	struct IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms
	{
		UIsdkHandPoseDetectionProfile* ProfileIn;
		TArray<UIsdkHandMeshComponent*> HandMeshComponentsIn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Registers a hand pose detection profile for an array of hand mesh components (typically\n   * only left and right), will also create recognizers for the hand mesh component if they're not\n   * already in place, using the profile to optimally only create needed recognizers */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Registers a hand pose detection profile for an array of hand mesh components (typically\n  * only left and right), will also create recognizers for the hand mesh component if they're not\n  * already in place, using the profile to optimally only create needed recognizers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshComponentsIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterHandPoseDetectionMultiple constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshComponentsIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandMeshComponentsIn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterHandPoseDetectionMultiple constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterHandPoseDetectionMultiple Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ProfileIn = { "ProfileIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms, ProfileIn), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_HandMeshComponentsIn_Inner = { "HandMeshComponentsIn", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_HandMeshComponentsIn = { "HandMeshComponentsIn", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms, HandMeshComponentsIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshComponentsIn_MetaData), NewProp_HandMeshComponentsIn_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_HandMeshComponentsIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_HandMeshComponentsIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::PropPointers) < 2048);
// ********** End Function RegisterHandPoseDetectionMultiple Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "RegisterHandPoseDetectionMultiple", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::IsdkHandPoseSubsystem_eventRegisterHandPoseDetectionMultiple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execRegisterHandPoseDetectionMultiple)
{
	P_GET_OBJECT(UIsdkHandPoseDetectionProfile,Z_Param_ProfileIn);
	P_GET_TARRAY(UIsdkHandMeshComponent*,Z_Param_HandMeshComponentsIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterHandPoseDetectionMultiple(Z_Param_ProfileIn,Z_Param_HandMeshComponentsIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function RegisterHandPoseDetectionMultiple **********

// ********** Begin Class UIsdkHandPoseSubsystem Function SetDebugHandPoseDetection ****************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics
{
	struct IsdkHandPoseSubsystem_eventSetDebugHandPoseDetection_Parms
	{
		bool bNewDebugHandPoseDetection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief When enabled, debugging hand pose detection will produce a full results struct for each\n   * profile, written to DetectionProfileDeltaResults */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief When enabled, debugging hand pose detection will produce a full results struct for each\n  * profile, written to DetectionProfileDeltaResults" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDebugHandPoseDetection constinit property declarations *************
	static void NewProp_bNewDebugHandPoseDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDebugHandPoseDetection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDebugHandPoseDetection constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDebugHandPoseDetection Property Definitions ************************
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::NewProp_bNewDebugHandPoseDetection_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventSetDebugHandPoseDetection_Parms*)Obj)->bNewDebugHandPoseDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::NewProp_bNewDebugHandPoseDetection = { "bNewDebugHandPoseDetection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventSetDebugHandPoseDetection_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::NewProp_bNewDebugHandPoseDetection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::NewProp_bNewDebugHandPoseDetection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::PropPointers) < 2048);
// ********** End Function SetDebugHandPoseDetection Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "SetDebugHandPoseDetection", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventSetDebugHandPoseDetection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventSetDebugHandPoseDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execSetDebugHandPoseDetection)
{
	P_GET_UBOOL(Z_Param_bNewDebugHandPoseDetection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDebugHandPoseDetection(Z_Param_bNewDebugHandPoseDetection);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function SetDebugHandPoseDetection ******************

// ********** Begin Class UIsdkHandPoseSubsystem Function SetDefaultHandPoseDetectionTolerance *****
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics
{
	struct IsdkHandPoseSubsystem_eventSetDefaultHandPoseDetectionTolerance_Parms
	{
		float NewDigitCalcTolerance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Sets the default tolerances for all hand pose detections */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Sets the default tolerances for all hand pose detections" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDefaultHandPoseDetectionTolerance constinit property declarations **
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDigitCalcTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDefaultHandPoseDetectionTolerance constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDefaultHandPoseDetectionTolerance Property Definitions *************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::NewProp_NewDigitCalcTolerance = { "NewDigitCalcTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetDefaultHandPoseDetectionTolerance_Parms, NewDigitCalcTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::NewProp_NewDigitCalcTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::PropPointers) < 2048);
// ********** End Function SetDefaultHandPoseDetectionTolerance Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "SetDefaultHandPoseDetectionTolerance", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::IsdkHandPoseSubsystem_eventSetDefaultHandPoseDetectionTolerance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::IsdkHandPoseSubsystem_eventSetDefaultHandPoseDetectionTolerance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execSetDefaultHandPoseDetectionTolerance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDigitCalcTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultHandPoseDetectionTolerance(Z_Param_NewDigitCalcTolerance);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function SetDefaultHandPoseDetectionTolerance *******

// ********** Begin Class UIsdkHandPoseSubsystem Function SetHandPoseDetectionProfileFromMesh ******
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics
{
	struct IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms
	{
		UIsdkHandPoseDetectionProfile* ProfileIn;
		UIsdkHandMeshComponent* MeshComponentIn;
		float BaseTolerances;
		TArray<EIsdkFingerType> FingersToIgnore;
		bool bIgnoreThumb;
		FName PoseName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Returns a delta profile containing the joint data from the HandData,\n   *    applying a given base\n   * tolerance. If no tolerances are defined, will apply set default tolerances instead*/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns a delta profile containing the joint data from the HandData,\n  *    applying a given base\n  * tolerance. If no tolerances are defined, will apply set default tolerances instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHandPoseDetectionProfileFromMesh constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTolerances;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingersToIgnore_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingersToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingersToIgnore;
	static void NewProp_bIgnoreThumb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreThumb;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHandPoseDetectionProfileFromMesh constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHandPoseDetectionProfileFromMesh Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ProfileIn = { "ProfileIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms, ProfileIn), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_BaseTolerances = { "BaseTolerances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms, BaseTolerances), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner = { "FingersToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 155703524
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore = { "FingersToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms, FingersToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 155703524
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms*)Obj)->bIgnoreThumb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb = { "bIgnoreThumb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms, PoseName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_BaseTolerances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_FingersToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_bIgnoreThumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::PropPointers) < 2048);
// ********** End Function SetHandPoseDetectionProfileFromMesh Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "SetHandPoseDetectionProfileFromMesh", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::IsdkHandPoseSubsystem_eventSetHandPoseDetectionProfileFromMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execSetHandPoseDetectionProfileFromMesh)
{
	P_GET_OBJECT(UIsdkHandPoseDetectionProfile,Z_Param_ProfileIn);
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseTolerances);
	P_GET_TARRAY(EIsdkFingerType,Z_Param_FingersToIgnore);
	P_GET_UBOOL(Z_Param_bIgnoreThumb);
	P_GET_PROPERTY(FNameProperty,Z_Param_PoseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetHandPoseDetectionProfileFromMesh(Z_Param_ProfileIn,Z_Param_MeshComponentIn,Z_Param_BaseTolerances,Z_Param_FingersToIgnore,Z_Param_bIgnoreThumb,Z_Param_PoseName);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function SetHandPoseDetectionProfileFromMesh ********

// ********** Begin Class UIsdkHandPoseSubsystem Function UnregisterHandMeshForDetection ***********
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics
{
	struct IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms
	{
		UIsdkHandMeshComponent* MeshComponentIn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Unregisters a Hand Mesh Component, and also removes ALL recognizers for it and ALL\n   * profiles that were solely linked to it*/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Unregisters a Hand Mesh Component, and also removes ALL recognizers for it and ALL\n  * profiles that were solely linked to it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnregisterHandMeshForDetection constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnregisterHandMeshForDetection constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnregisterHandMeshForDetection Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::PropPointers) < 2048);
// ********** End Function UnregisterHandMeshForDetection Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "UnregisterHandMeshForDetection", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::IsdkHandPoseSubsystem_eventUnregisterHandMeshForDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execUnregisterHandMeshForDetection)
{
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterHandMeshForDetection(Z_Param_MeshComponentIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function UnregisterHandMeshForDetection *************

// ********** Begin Class UIsdkHandPoseSubsystem Function UnregisterHandPoseDetection **************
struct Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics
{
	struct IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms
	{
		UIsdkHandPoseDetectionProfile* ProfileIn;
		UIsdkHandMeshComponent* MeshComponentIn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Unregisters a hand pose detection profile for a given hand mesh, will not remove\n   * recognizers or registered hand mesh components */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Unregisters a hand pose detection profile for a given hand mesh, will not remove\n  * recognizers or registered hand mesh components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnregisterHandPoseDetection constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponentIn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnregisterHandPoseDetection constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnregisterHandPoseDetection Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ProfileIn = { "ProfileIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms, ProfileIn), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_MeshComponentIn = { "MeshComponentIn", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms, MeshComponentIn), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponentIn_MetaData), NewProp_MeshComponentIn_MetaData) };
void Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms), &Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ProfileIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_MeshComponentIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::PropPointers) < 2048);
// ********** End Function UnregisterHandPoseDetection Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseSubsystem, nullptr, "UnregisterHandPoseDetection", 	Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::IsdkHandPoseSubsystem_eventUnregisterHandPoseDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseSubsystem::execUnregisterHandPoseDetection)
{
	P_GET_OBJECT(UIsdkHandPoseDetectionProfile,Z_Param_ProfileIn);
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_MeshComponentIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterHandPoseDetection(Z_Param_ProfileIn,Z_Param_MeshComponentIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseSubsystem Function UnregisterHandPoseDetection ****************

// ********** Begin Class UIsdkHandPoseSubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseSubsystem;
UClass* UIsdkHandPoseSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IsdkHandPoseSubsystem"),
			Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseSubsystem_NoRegister()
{
	return UIsdkHandPoseSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UIsdkHandPoseSubsystem\n * @brief Holds asset references for Hand Pose visualization, systems and helpers for monitoring and\n * enabling hand grab poses. Also used to register and monitor hand pose detections via hand mesh\n * components, and broadcast delegates when hand shape targets (within tolerances) have been met.\n * @see UIsdkHandMeshComponent\n * @addtogroup InteractionSDK\n */" },
#endif
		{ "IncludePath", "Subsystem/IsdkHandPoseSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UIsdkHandPoseSubsystem\n@brief Holds asset references for Hand Pose visualization, systems and helpers for monitoring and\nenabling hand grab poses. Also used to register and monitor hand pose detections via hand mesh\ncomponents, and broadcast delegates when hand shape targets (within tolerances) have been met.\n@see UIsdkHandMeshComponent\n@addtogroup InteractionSDK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseDetectionDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* @brief Delegate broadcast when a hand pose has been detected as per the profile registered with\n   * it, broadcasts the profile, the hand mesh component and the pose name */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Delegate broadcast when a hand pose has been detected as per the profile registered with\n  * it, broadcasts the profile, the hand mesh component and the pose name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshRight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPoseCacheMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandGrabPoseDestroyQueue_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredMeshComponentProfileMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Registered Mesh Components Map to Detection Profiles Registered with that Mesh */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registered Mesh Components Map to Detection Profiles Registered with that Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredDetectionProfiles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All registered detection profiles, typically accessed by array index via stored within\n   * RegisteredMeshComponentProfileMap */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All registered detection profiles, typically accessed by array index via stored within\n  * RegisteredMeshComponentProfileMap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredMeshComponentMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Registered mesh components mapped to the finger and thumb recognizers that were created to poll\n   * data from them */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registered mesh components mapped to the finger and thumb recognizers that were created to poll\n  * data from them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerRecognizers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All created finger recognizers for pose detection, typically accessed by array index via\n   * RegisteredMeshComponentMap*/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All created finger recognizers for pose detection, typically accessed by array index via\n  * RegisteredMeshComponentMap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbRecognizers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All created thumb recognizers for pose detection, typically accessed by array index via\n   * RegisteredMeshComponentMap*/" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All created thumb recognizers for pose detection, typically accessed by array index via\n  * RegisteredMeshComponentMap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMeshComponentResults_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cached structs of results for hand mesh components, enabling quicker seek times and reducing\n   * new object instantiation */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached structs of results for hand mesh components, enabling quicker seek times and reducing\n  * new object instantiation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionProfileDeltaResults_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cached structs of results for profile delta calculations, enabling quicker seek times and\n   * reducing new object instantiation */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/IsdkHandPoseSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached structs of results for profile delta calculations, enabling quicker seek times and\n  * reducing new object instantiation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UIsdkHandPoseSubsystem constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HandPoseDetectionDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorPoseCacheMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPoseCacheMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorPoseCacheMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandGrabPoseDestroyQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandGrabPoseDestroyQueue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredMeshComponentProfileMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredMeshComponentProfileMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredMeshComponentProfileMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredDetectionProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredDetectionProfiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredMeshComponentMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredMeshComponentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredMeshComponentMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FingerRecognizers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerRecognizers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbRecognizers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbRecognizers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandMeshComponentResults_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMeshComponentResults_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HandMeshComponentResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionProfileDeltaResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectionProfileDeltaResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIsdkHandPoseSubsystem constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateHandPoseDetectionProfileFromMesh"), .Pointer = &UIsdkHandPoseSubsystem::execCreateHandPoseDetectionProfileFromMesh },
		{ .NameUTF8 = UTF8TEXT("GenerateMirroredHandPoseData"), .Pointer = &UIsdkHandPoseSubsystem::execGenerateMirroredHandPoseData },
		{ .NameUTF8 = UTF8TEXT("GetHandMeshDetectionResults"), .Pointer = &UIsdkHandPoseSubsystem::execGetHandMeshDetectionResults },
		{ .NameUTF8 = UTF8TEXT("GetProfileDeltasFromResults"), .Pointer = &UIsdkHandPoseSubsystem::execGetProfileDeltasFromResults },
		{ .NameUTF8 = UTF8TEXT("RegisterHandMeshForDetection"), .Pointer = &UIsdkHandPoseSubsystem::execRegisterHandMeshForDetection },
		{ .NameUTF8 = UTF8TEXT("RegisterHandPoseDetection"), .Pointer = &UIsdkHandPoseSubsystem::execRegisterHandPoseDetection },
		{ .NameUTF8 = UTF8TEXT("RegisterHandPoseDetectionMultiple"), .Pointer = &UIsdkHandPoseSubsystem::execRegisterHandPoseDetectionMultiple },
		{ .NameUTF8 = UTF8TEXT("SetDebugHandPoseDetection"), .Pointer = &UIsdkHandPoseSubsystem::execSetDebugHandPoseDetection },
		{ .NameUTF8 = UTF8TEXT("SetDefaultHandPoseDetectionTolerance"), .Pointer = &UIsdkHandPoseSubsystem::execSetDefaultHandPoseDetectionTolerance },
		{ .NameUTF8 = UTF8TEXT("SetHandPoseDetectionProfileFromMesh"), .Pointer = &UIsdkHandPoseSubsystem::execSetHandPoseDetectionProfileFromMesh },
		{ .NameUTF8 = UTF8TEXT("UnregisterHandMeshForDetection"), .Pointer = &UIsdkHandPoseSubsystem::execUnregisterHandMeshForDetection },
		{ .NameUTF8 = UTF8TEXT("UnregisterHandPoseDetection"), .Pointer = &UIsdkHandPoseSubsystem::execUnregisterHandPoseDetection },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_CreateHandPoseDetectionProfileFromMesh, "CreateHandPoseDetectionProfileFromMesh" }, // 2852516355
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GenerateMirroredHandPoseData, "GenerateMirroredHandPoseData" }, // 1558911803
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetHandMeshDetectionResults, "GetHandMeshDetectionResults" }, // 3810765193
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_GetProfileDeltasFromResults, "GetProfileDeltasFromResults" }, // 912314801
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandMeshForDetection, "RegisterHandMeshForDetection" }, // 3120042226
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetection, "RegisterHandPoseDetection" }, // 3790118970
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_RegisterHandPoseDetectionMultiple, "RegisterHandPoseDetectionMultiple" }, // 2908429661
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDebugHandPoseDetection, "SetDebugHandPoseDetection" }, // 245396069
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetDefaultHandPoseDetectionTolerance, "SetDefaultHandPoseDetectionTolerance" }, // 24698527
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_SetHandPoseDetectionProfileFromMesh, "SetHandPoseDetectionProfileFromMesh" }, // 3884924112
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandMeshForDetection, "UnregisterHandMeshForDetection" }, // 118103409
		{ &Z_Construct_UFunction_UIsdkHandPoseSubsystem_UnregisterHandPoseDetection, "UnregisterHandPoseDetection" }, // 1517631112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics

// ********** Begin Class UIsdkHandPoseSubsystem Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandPoseDetectionDelegate = { "HandPoseDetectionDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandPoseDetectionDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkHandPoseDetectionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseDetectionDelegate_MetaData), NewProp_HandPoseDetectionDelegate_MetaData) }; // 3679583842
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshMaterial = { "HandMeshMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshMaterial_MetaData), NewProp_HandMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshRight = { "HandMeshRight", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandMeshRight), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshRight_MetaData), NewProp_HandMeshRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshLeft = { "HandMeshLeft", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandMeshLeft), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshLeft_MetaData), NewProp_HandMeshLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap_ValueProp = { "ActorPoseCacheMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache, METADATA_PARAMS(0, nullptr) }; // 1008490248
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap_Key_KeyProp = { "ActorPoseCacheMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap = { "ActorPoseCacheMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, ActorPoseCacheMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPoseCacheMap_MetaData), NewProp_ActorPoseCacheMap_MetaData) }; // 1008490248
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandGrabPoseDestroyQueue_Inner = { "HandGrabPoseDestroyQueue", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandGrabPoseDestroyQueue = { "HandGrabPoseDestroyQueue", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandGrabPoseDestroyQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandGrabPoseDestroyQueue_MetaData), NewProp_HandGrabPoseDestroyQueue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap_ValueProp = { "RegisteredMeshComponentProfileMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile, METADATA_PARAMS(0, nullptr) }; // 3377245532
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap_Key_KeyProp = { "RegisteredMeshComponentProfileMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap = { "RegisteredMeshComponentProfileMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, RegisteredMeshComponentProfileMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredMeshComponentProfileMap_MetaData), NewProp_RegisteredMeshComponentProfileMap_MetaData) }; // 3377245532
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredDetectionProfiles_Inner = { "RegisteredDetectionProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredDetectionProfiles = { "RegisteredDetectionProfiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, RegisteredDetectionProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredDetectionProfiles_MetaData), NewProp_RegisteredDetectionProfiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap_ValueProp = { "RegisteredMeshComponentMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup, METADATA_PARAMS(0, nullptr) }; // 1318324859
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap_Key_KeyProp = { "RegisteredMeshComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap = { "RegisteredMeshComponentMap", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, RegisteredMeshComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredMeshComponentMap_MetaData), NewProp_RegisteredMeshComponentMap_MetaData) }; // 1318324859
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_FingerRecognizers_Inner = { "FingerRecognizers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandFingerRecognizer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_FingerRecognizers = { "FingerRecognizers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, FingerRecognizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerRecognizers_MetaData), NewProp_FingerRecognizers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ThumbRecognizers_Inner = { "ThumbRecognizers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandThumbRecognizer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ThumbRecognizers = { "ThumbRecognizers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, ThumbRecognizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbRecognizers_MetaData), NewProp_ThumbRecognizers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults_ValueProp = { "HandMeshComponentResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, METADATA_PARAMS(0, nullptr) }; // 2594523178
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults_Key_KeyProp = { "HandMeshComponentResults_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults = { "HandMeshComponentResults", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, HandMeshComponentResults), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMeshComponentResults_MetaData), NewProp_HandMeshComponentResults_MetaData) }; // 2594523178
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_DetectionProfileDeltaResults_Inner = { "DetectionProfileDeltaResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults, METADATA_PARAMS(0, nullptr) }; // 2594523178
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_DetectionProfileDeltaResults = { "DetectionProfileDeltaResults", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseSubsystem, DetectionProfileDeltaResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionProfileDeltaResults_MetaData), NewProp_DetectionProfileDeltaResults_MetaData) }; // 2594523178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandPoseDetectionDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ActorPoseCacheMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandGrabPoseDestroyQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandGrabPoseDestroyQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentProfileMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredDetectionProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredDetectionProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_RegisteredMeshComponentMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_FingerRecognizers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_FingerRecognizers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ThumbRecognizers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_ThumbRecognizers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_HandMeshComponentResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_DetectionProfileDeltaResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::NewProp_DetectionProfileDeltaResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UIsdkHandPoseSubsystem Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::ClassParams = {
	&UIsdkHandPoseSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::Class_MetaDataParams)
};
void UIsdkHandPoseSubsystem::StaticRegisterNativesUIsdkHandPoseSubsystem()
{
	UClass* Class = UIsdkHandPoseSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UIsdkHandPoseSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIsdkHandPoseSubsystem);
UIsdkHandPoseSubsystem::~UIsdkHandPoseSubsystem() {}
// ********** End Class UIsdkHandPoseSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkHandPoseDataGroup::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDataGroup_Statics::NewStructOps, TEXT("IsdkHandPoseDataGroup"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDataGroup), 3280382305U) },
		{ FIsdkHandPoseDataCache::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDataCache_Statics::NewStructOps, TEXT("IsdkHandPoseDataCache"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDataCache), 1705247280U) },
		{ FIsdkHandPoseDetectionMeshToProfile::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile_Statics::NewStructOps, TEXT("IsdkHandPoseDetectionMeshToProfile"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshToProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDetectionMeshToProfile), 3377245532U) },
		{ FIsdkHandPoseFingerRecognizerGroup::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup_Statics::NewStructOps, TEXT("IsdkHandPoseFingerRecognizerGroup"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseFingerRecognizerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseFingerRecognizerGroup), 3403422761U) },
		{ FIsdkHandPoseThumbRecognizerGroup::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup_Statics::NewStructOps, TEXT("IsdkHandPoseThumbRecognizerGroup"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseThumbRecognizerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseThumbRecognizerGroup), 1495163765U) },
		{ FIsdkHandPoseDetectionMeshGroup::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionMeshGroup_Statics::NewStructOps, TEXT("IsdkHandPoseDetectionMeshGroup"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionMeshGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDetectionMeshGroup), 1318324859U) },
		{ FIsdkHandPoseRecognizerFingerResult::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerFingerResult_Statics::NewStructOps, TEXT("IsdkHandPoseRecognizerFingerResult"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerFingerResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseRecognizerFingerResult), 421492523U) },
		{ FIsdkHandPoseRecognizerResults::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseRecognizerResults_Statics::NewStructOps, TEXT("IsdkHandPoseRecognizerResults"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseRecognizerResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseRecognizerResults), 2594523178U) },
		{ FIsdkHandPoseDataActorVariations::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorVariations_Statics::NewStructOps, TEXT("IsdkHandPoseDataActorVariations"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorVariations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDataActorVariations), 1389241099U) },
		{ FIsdkHandPoseDataActorCache::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDataActorCache_Statics::NewStructOps, TEXT("IsdkHandPoseDataActorCache"),&Z_Registration_Info_UScriptStruct_FIsdkHandPoseDataActorCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDataActorCache), 1008490248U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseSubsystem, UIsdkHandPoseSubsystem::StaticClass, TEXT("UIsdkHandPoseSubsystem"), &Z_Registration_Info_UClass_UIsdkHandPoseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseSubsystem), 1695786848U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_2324884224{
	TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Subsystem_IsdkHandPoseSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
