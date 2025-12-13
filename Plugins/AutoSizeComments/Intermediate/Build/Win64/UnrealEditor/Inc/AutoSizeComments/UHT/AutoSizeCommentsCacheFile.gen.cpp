// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSizeCommentsCacheFile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAutoSizeCommentsCacheFile() {}

// ********** Begin Cross Module References ********************************************************
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCCacheData();
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData();
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData();
AUTOSIZECOMMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_AutoSizeComments();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FASCCommentData ***************************************************
struct Z_Construct_UScriptStruct_FASCCommentData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FASCCommentData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FASCCommentData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuids_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Containing nodes */" },
#endif
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Containing nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeader_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Is this node a header node */" },
#endif
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this node a header node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Has the node been initialized */" },
#endif
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has the node been initialized" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FASCCommentData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeGuids;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_bHeader;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_bInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FASCCommentData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCCommentData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FASCCommentData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FASCCommentData;
class UScriptStruct* FASCCommentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FASCCommentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FASCCommentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCCommentData, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCCommentData"));
	}
	return Z_Registration_Info_UScriptStruct_FASCCommentData.OuterSingleton;
	}

// ********** Begin ScriptStruct FASCCommentData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_Inner = { "NodeGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids = { "NodeGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCCommentData, NodeGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuids_MetaData), NewProp_NodeGuids_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader = { "bHeader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCCommentData, bHeader), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeader_MetaData), NewProp_bHeader_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit = { "bInit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCCommentData, bInit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInit_MetaData), NewProp_bInit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_NodeGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bHeader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCommentData_Statics::NewProp_bInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FASCCommentData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCCommentData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"ASCCommentData",
	Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::PropPointers),
	sizeof(FASCCommentData),
	alignof(FASCCommentData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCCommentData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FASCCommentData()
{
	if (!Z_Registration_Info_UScriptStruct_FASCCommentData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FASCCommentData.InnerSingleton, Z_Construct_UScriptStruct_FASCCommentData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FASCCommentData.InnerSingleton);
}
// ********** End ScriptStruct FASCCommentData *****************************************************

// ********** Begin ScriptStruct FASCGraphData *****************************************************
struct Z_Construct_UScriptStruct_FASCGraphData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FASCGraphData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FASCGraphData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FASCGraphData constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CommentData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FASCGraphData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FASCGraphData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FASCGraphData;
class UScriptStruct* FASCGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FASCGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FASCGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCGraphData, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_FASCGraphData.OuterSingleton;
	}

// ********** Begin ScriptStruct FASCGraphData Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_ValueProp = { "CommentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FASCCommentData, METADATA_PARAMS(0, nullptr) }; // 1834176385
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_Key_KeyProp = { "CommentData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData = { "CommentData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCGraphData, CommentData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentData_MetaData), NewProp_CommentData_MetaData) }; // 1834176385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCGraphData_Statics::NewProp_CommentData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FASCGraphData Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCGraphData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"ASCGraphData",
	Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::PropPointers),
	sizeof(FASCGraphData),
	alignof(FASCGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCGraphData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FASCGraphData()
{
	if (!Z_Registration_Info_UScriptStruct_FASCGraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FASCGraphData.InnerSingleton, Z_Construct_UScriptStruct_FASCGraphData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FASCGraphData.InnerSingleton);
}
// ********** End ScriptStruct FASCGraphData *******************************************************

// ********** Begin ScriptStruct FASCPackageData ***************************************************
struct Z_Construct_UScriptStruct_FASCPackageData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FASCPackageData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FASCPackageData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FASCPackageData constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GraphData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FASCPackageData constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCPackageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FASCPackageData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FASCPackageData;
class UScriptStruct* FASCPackageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FASCPackageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FASCPackageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCPackageData, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCPackageData"));
	}
	return Z_Registration_Info_UScriptStruct_FASCPackageData.OuterSingleton;
	}

// ********** Begin ScriptStruct FASCPackageData Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_ValueProp = { "GraphData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FASCGraphData, METADATA_PARAMS(0, nullptr) }; // 771659574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_Key_KeyProp = { "GraphData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData = { "GraphData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCPackageData, GraphData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphData_MetaData), NewProp_GraphData_MetaData) }; // 771659574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCPackageData_Statics::NewProp_GraphData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FASCPackageData Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCPackageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"ASCPackageData",
	Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::PropPointers),
	sizeof(FASCPackageData),
	alignof(FASCPackageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCPackageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FASCPackageData()
{
	if (!Z_Registration_Info_UScriptStruct_FASCPackageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FASCPackageData.InnerSingleton, Z_Construct_UScriptStruct_FASCPackageData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FASCPackageData.InnerSingleton);
}
// ********** End ScriptStruct FASCPackageData *****************************************************

// ********** Begin ScriptStruct FASCCacheData *****************************************************
struct Z_Construct_UScriptStruct_FASCCacheData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FASCCacheData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FASCCacheData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSizeCommentsCacheFile.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FASCCacheData constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PackageData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PackageData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FASCCacheData constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCCacheData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FASCCacheData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FASCCacheData;
class UScriptStruct* FASCCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FASCCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FASCCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCCacheData, (UObject*)Z_Construct_UPackage__Script_AutoSizeComments(), TEXT("ASCCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_FASCCacheData.OuterSingleton;
	}

// ********** Begin ScriptStruct FASCCacheData Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_ValueProp = { "PackageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FASCPackageData, METADATA_PARAMS(0, nullptr) }; // 2362804208
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_Key_KeyProp = { "PackageData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData = { "PackageData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCCacheData, PackageData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageData_MetaData), NewProp_PackageData_MetaData) }; // 2362804208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCCacheData_Statics::NewProp_PackageData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FASCCacheData Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCCacheData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AutoSizeComments,
	nullptr,
	&NewStructOps,
	"ASCCacheData",
	Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::PropPointers),
	sizeof(FASCCacheData),
	alignof(FASCCacheData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCCacheData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCCacheData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FASCCacheData()
{
	if (!Z_Registration_Info_UScriptStruct_FASCCacheData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FASCCacheData.InnerSingleton, Z_Construct_UScriptStruct_FASCCacheData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FASCCacheData.InnerSingleton);
}
// ********** End ScriptStruct FASCCacheData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h__Script_AutoSizeComments_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FASCCommentData::StaticStruct, Z_Construct_UScriptStruct_FASCCommentData_Statics::NewStructOps, TEXT("ASCCommentData"),&Z_Registration_Info_UScriptStruct_FASCCommentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCCommentData), 1834176385U) },
		{ FASCGraphData::StaticStruct, Z_Construct_UScriptStruct_FASCGraphData_Statics::NewStructOps, TEXT("ASCGraphData"),&Z_Registration_Info_UScriptStruct_FASCGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCGraphData), 771659574U) },
		{ FASCPackageData::StaticStruct, Z_Construct_UScriptStruct_FASCPackageData_Statics::NewStructOps, TEXT("ASCPackageData"),&Z_Registration_Info_UScriptStruct_FASCPackageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCPackageData), 2362804208U) },
		{ FASCCacheData::StaticStruct, Z_Construct_UScriptStruct_FASCCacheData_Statics::NewStructOps, TEXT("ASCCacheData"),&Z_Registration_Info_UScriptStruct_FASCCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCCacheData), 3862750125U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h__Script_AutoSizeComments_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h__Script_AutoSizeComments_73617981{
	TEXT("/Script/AutoSizeComments"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h__Script_AutoSizeComments_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsCacheFile_h__Script_AutoSizeComments_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
