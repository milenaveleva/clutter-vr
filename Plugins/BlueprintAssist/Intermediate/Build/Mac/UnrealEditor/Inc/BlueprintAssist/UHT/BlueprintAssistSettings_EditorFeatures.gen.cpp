// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssistSettings_EditorFeatures.h"
#include "Layout/Margin.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlueprintAssistSettings_EditorFeatures() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_EditorFeatures();
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_EditorFeatures_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UPackage* Z_Construct_UPackage__Script_BlueprintAssist();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBASettings_EditorFeatures ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBASettings_EditorFeatures;
UClass* UBASettings_EditorFeatures::GetPrivateStaticClass()
{
	using TClass = UBASettings_EditorFeatures;
	if (!Z_Registration_Info_UClass_UBASettings_EditorFeatures.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BASettings_EditorFeatures"),
			Z_Registration_Info_UClass_UBASettings_EditorFeatures.InnerSingleton,
			StaticRegisterNativesUBASettings_EditorFeatures,
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
	return Z_Registration_Info_UClass_UBASettings_EditorFeatures.InnerSingleton;
}
UClass* Z_Construct_UClass_UBASettings_EditorFeatures_NoRegister()
{
	return UBASettings_EditorFeatures::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBASettings_EditorFeatures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintAssistSettings_EditorFeatures.h" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetReplicationFlagsAfterRenaming_MetaData[] = {
		{ "Category", "CustomEventReplication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Set the according replication flags after renaming a custom event by matching the prefixes below */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the according replication flags after renaming a custom event by matching the prefixes below" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* When enabled, renaming a custom event with no matching prefix will apply \"NotReplicated\" */" },
#endif
		{ "EditCondition", "bSetReplicationFlagsAfterRenaming" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, renaming a custom event with no matching prefix will apply \"NotReplicated\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData[] = {
		{ "Category", "CustomEventReplication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Add the according prefix to the title after changing replication flags */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add the according prefix to the title after changing replication flags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MulticastPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientPrefix_MetaData[] = {
		{ "Category", "CustomEventReplication" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNodeGroupOutline_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Draw an outline to visualise each node group on the graph */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw an outline to visualise each node group on the graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Only draw the group outline when selected */" },
#endif
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only draw the group outline when selected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineColor_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Change the color of the border around the selected pin */" },
#endif
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the color of the border around the selected pin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineWidth_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Change the color of the border around the selected pin */" },
#endif
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the color of the border around the selected pin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupOutlineMargin_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Outline margin around each node */" },
#endif
		{ "EditCondition", "bDrawNodeGroupOutline" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outline margin around each node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNodeGroupFill_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Draw a fill to show the node groups for selected nodes */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw a fill to show the node groups for selected nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupFillColor_MetaData[] = {
		{ "Category", "NodeGroup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Change the color of the border around the selected pin */" },
#endif
		{ "EditCondition", "bDrawNodeGroupFill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BlueprintAssistSettings_EditorFeatures.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change the color of the border around the selected pin" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UBASettings_EditorFeatures constinit property declarations ***************
	static void NewProp_bSetReplicationFlagsAfterRenaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetReplicationFlagsAfterRenaming;
	static void NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix;
	static void NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddReplicationPrefixToCustomEventTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MulticastPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerPrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClientPrefix;
	static void NewProp_bDrawNodeGroupOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNodeGroupOutline;
	static void NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDrawGroupOutlineWhenSelected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupOutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeGroupOutlineWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupOutlineMargin;
	static void NewProp_bDrawNodeGroupFill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNodeGroupFill;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGroupFillColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBASettings_EditorFeatures constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBASettings_EditorFeatures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBASettings_EditorFeatures_Statics

// ********** Begin Class UBASettings_EditorFeatures Property Definitions **************************
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bSetReplicationFlagsAfterRenaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming = { "bSetReplicationFlagsAfterRenaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetReplicationFlagsAfterRenaming_MetaData), NewProp_bSetReplicationFlagsAfterRenaming_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bClearReplicationFlagsWhenRenamingWithNoPrefix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix = { "bClearReplicationFlagsWhenRenamingWithNoPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData), NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bAddReplicationPrefixToCustomEventTitle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle = { "bAddReplicationPrefixToCustomEventTitle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData), NewProp_bAddReplicationPrefixToCustomEventTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_MulticastPrefix = { "MulticastPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, MulticastPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MulticastPrefix_MetaData), NewProp_MulticastPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ServerPrefix = { "ServerPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ServerPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerPrefix_MetaData), NewProp_ServerPrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClientPrefix = { "ClientPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, ClientPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientPrefix_MetaData), NewProp_ClientPrefix_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDrawNodeGroupOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline = { "bDrawNodeGroupOutline", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNodeGroupOutline_MetaData), NewProp_bDrawNodeGroupOutline_MetaData) };
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bOnlyDrawGroupOutlineWhenSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected = { "bOnlyDrawGroupOutlineWhenSelected", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData), NewProp_bOnlyDrawGroupOutlineWhenSelected_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineColor = { "NodeGroupOutlineColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineColor_MetaData), NewProp_NodeGroupOutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineWidth = { "NodeGroupOutlineWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineWidth_MetaData), NewProp_NodeGroupOutlineWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineMargin = { "NodeGroupOutlineMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupOutlineMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupOutlineMargin_MetaData), NewProp_NodeGroupOutlineMargin_MetaData) }; // 4099648758
void Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill_SetBit(void* Obj)
{
	((UBASettings_EditorFeatures*)Obj)->bDrawNodeGroupFill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill = { "bDrawNodeGroupFill", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBASettings_EditorFeatures), &Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawNodeGroupFill_MetaData), NewProp_bDrawNodeGroupFill_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupFillColor = { "NodeGroupFillColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBASettings_EditorFeatures, NodeGroupFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupFillColor_MetaData), NewProp_NodeGroupFillColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bSetReplicationFlagsAfterRenaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bClearReplicationFlagsWhenRenamingWithNoPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bAddReplicationPrefixToCustomEventTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_MulticastPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ServerPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_ClientPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupOutline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bOnlyDrawGroupOutlineWhenSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupOutlineMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_bDrawNodeGroupFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBASettings_EditorFeatures_Statics::NewProp_NodeGroupFillColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers) < 2048);
// ********** End Class UBASettings_EditorFeatures Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UBASettings_EditorFeatures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintAssist,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBASettings_EditorFeatures_Statics::ClassParams = {
	&UBASettings_EditorFeatures::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBASettings_EditorFeatures_Statics::Class_MetaDataParams), Z_Construct_UClass_UBASettings_EditorFeatures_Statics::Class_MetaDataParams)
};
void UBASettings_EditorFeatures::StaticRegisterNativesUBASettings_EditorFeatures()
{
}
UClass* Z_Construct_UClass_UBASettings_EditorFeatures()
{
	if (!Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton, Z_Construct_UClass_UBASettings_EditorFeatures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBASettings_EditorFeatures.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBASettings_EditorFeatures);
UBASettings_EditorFeatures::~UBASettings_EditorFeatures() {}
// ********** End Class UBASettings_EditorFeatures *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h__Script_BlueprintAssist_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBASettings_EditorFeatures, UBASettings_EditorFeatures::StaticClass, TEXT("UBASettings_EditorFeatures"), &Z_Registration_Info_UClass_UBASettings_EditorFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBASettings_EditorFeatures), 282567093U) },
	};
}; // Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h__Script_BlueprintAssist_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h__Script_BlueprintAssist_170456319{
	TEXT("/Script/BlueprintAssist"),
	Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h__Script_BlueprintAssist_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_EditorFeatures_h__Script_BlueprintAssist_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
