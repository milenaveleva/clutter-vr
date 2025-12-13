// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodesSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeElectronicNodesSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle();
UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWireStyle ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWireStyle;
static UEnum* EWireStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWireStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWireStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireStyle, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireStyle"));
	}
	return Z_Registration_Info_UEnum_EWireStyle.OuterSingleton;
}
template<> ELECTRONICNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EWireStyle>()
{
	return EWireStyle_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EWireStyle::Default" },
		{ "Manhattan.Name", "EWireStyle::Manhattan" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Subway.Name", "EWireStyle::Subway" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWireStyle::Default", (int64)EWireStyle::Default },
		{ "EWireStyle::Manhattan", (int64)EWireStyle::Manhattan },
		{ "EWireStyle::Subway", (int64)EWireStyle::Subway },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWireStyle",
	"EWireStyle",
	Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle()
{
	if (!Z_Registration_Info_UEnum_EWireStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWireStyle.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWireStyle.InnerSingleton;
}
// ********** End Enum EWireStyle ******************************************************************

// ********** Begin Enum EWireAlignment ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWireAlignment;
static UEnum* EWireAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireAlignment, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireAlignment"));
	}
	return Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton;
}
template<> ELECTRONICNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EWireAlignment>()
{
	return EWireAlignment_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EWireAlignment::Left" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Right.Name", "EWireAlignment::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWireAlignment::Right", (int64)EWireAlignment::Right },
		{ "EWireAlignment::Left", (int64)EWireAlignment::Left },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWireAlignment",
	"EWireAlignment",
	Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment()
{
	if (!Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton;
}
// ********** End Enum EWireAlignment **************************************************************

// ********** Begin Enum EWirePriority *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWirePriority;
static UEnum* EWirePriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWirePriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWirePriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWirePriority, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWirePriority"));
	}
	return Z_Registration_Info_UEnum_EWirePriority.OuterSingleton;
}
template<> ELECTRONICNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EWirePriority>()
{
	return EWirePriority_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Node.Name", "EWirePriority::Node" },
		{ "None.Name", "EWirePriority::None" },
		{ "Pin.Name", "EWirePriority::Pin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWirePriority::None", (int64)EWirePriority::None },
		{ "EWirePriority::Node", (int64)EWirePriority::Node },
		{ "EWirePriority::Pin", (int64)EWirePriority::Pin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWirePriority",
	"EWirePriority",
	Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority()
{
	if (!Z_Registration_Info_UEnum_EWirePriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWirePriority.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWirePriority.InnerSingleton;
}
// ********** End Enum EWirePriority ***************************************************************

// ********** Begin Enum EBubbleDisplayRule ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBubbleDisplayRule;
static UEnum* EBubbleDisplayRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EBubbleDisplayRule"));
	}
	return Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton;
}
template<> ELECTRONICNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EBubbleDisplayRule>()
{
	return EBubbleDisplayRule_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EBubbleDisplayRule::Always" },
		{ "BlueprintType", "true" },
		{ "DisplayOnSelection.Name", "EBubbleDisplayRule::DisplayOnSelection" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "MoveOnSelection.Name", "EBubbleDisplayRule::MoveOnSelection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBubbleDisplayRule::Always", (int64)EBubbleDisplayRule::Always },
		{ "EBubbleDisplayRule::DisplayOnSelection", (int64)EBubbleDisplayRule::DisplayOnSelection },
		{ "EBubbleDisplayRule::MoveOnSelection", (int64)EBubbleDisplayRule::MoveOnSelection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EBubbleDisplayRule",
	"EBubbleDisplayRule",
	Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule()
{
	if (!Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton;
}
// ********** End Enum EBubbleDisplayRule **********************************************************

// ********** Begin Enum ESelectionRule ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectionRule;
static UEnum* ESelectionRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_ESelectionRule, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("ESelectionRule"));
	}
	return Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton;
}
template<> ELECTRONICNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESelectionRule>()
{
	return ESelectionRule_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Far.Name", "ESelectionRule::Far" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Near.Name", "ESelectionRule::Near" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESelectionRule::Near", (int64)ESelectionRule::Near },
		{ "ESelectionRule::Far", (int64)ESelectionRule::Far },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"ESelectionRule",
	"ESelectionRule",
	Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule()
{
	if (!Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton;
}
// ********** End Enum ESelectionRule **************************************************************

// ********** Begin Class UElectronicNodesSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UElectronicNodesSettings;
UClass* UElectronicNodesSettings::GetPrivateStaticClass()
{
	using TClass = UElectronicNodesSettings;
	if (!Z_Registration_Info_UClass_UElectronicNodesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ElectronicNodesSettings"),
			Z_Registration_Info_UClass_UElectronicNodesSettings.InnerSingleton,
			StaticRegisterNativesUElectronicNodesSettings,
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
	return Z_Registration_Info_UClass_UElectronicNodesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister()
{
	return UElectronicNodesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UElectronicNodesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Electronic Nodes Plugin" },
		{ "IncludePath", "ElectronicNodesSettings.h" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate or desactivate the whole plugin. Default: true */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate or desactivate the whole plugin. Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnBlueprint_MetaData[] = {
		{ "Category", "Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate Electronic Nodes on Blueprint graphs. Default: true */" },
#endif
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate Electronic Nodes on Blueprint graphs. Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnMaterial_MetaData[] = {
		{ "Category", "Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate Electronic Nodes on Material graphs. Default: true */" },
#endif
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate Electronic Nodes on Material graphs. Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnAnimation_MetaData[] = {
		{ "Category", "Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate Electronic Nodes on Animation graphs. Default: true */" },
#endif
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate Electronic Nodes on Animation graphs. Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnVoxelPlugin_MetaData[] = {
		{ "Category", "Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate Electronic Nodes on VoxelPlugin (available on the marketplace). Default: true */" },
#endif
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate Electronic Nodes on VoxelPlugin (available on the marketplace). Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireStyle_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles. */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireAlignment_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specify wire alignment. Default: right. */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify wire alignment. Default: right." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WirePriority_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin). Default: none. */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin). Default: none." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundRadius_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Round radius of the wires. Default: 10 */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Round radius of the wires. Default: 10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireThickness_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Thickness of the wire (mutltiplier). Default: 1 */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thickness of the wire (mutltiplier). Default: 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffset_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Horizontal offset of wires from nodes. Default: 16 */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal offset of wires from nodes. Default: 16" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisablePinOffset_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Disable the offset for pins. Default: false */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable the offset for pins. Default: false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixZoomDisplacement_MetaData[] = {
		{ "Category", "Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Fix default zoomed-out wire displacement. Default: true */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fix default zoomed-out wire displacement. Default: true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteExecWireStyle_MetaData[] = {
		{ "Category", "Exec Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Use a specific draw style for exec wires. Default: false */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use a specific draw style for exec wires. Default: false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireStyleForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specific wire style for exec wires. Default: Manhattan */" },
#endif
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specific wire style for exec wires. Default: Manhattan" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireAlignmentForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specify wire alignment for exe wires. Default: right. */" },
#endif
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify wire alignment for exe wires. Default: right." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WirePriorityForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node. */" },
#endif
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateRibbon_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate ribbon cables for overlapping wires. */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate ribbon cables for overlapping wires." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Offset between ribbon wires. Default: 4 */" },
#endif
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset between ribbon wires. Default: 4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonMergeOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Offset of wires when merge into ribbon. Default: 20 */" },
#endif
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset of wires when merge into ribbon. Default: 20" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDrawBubbles_MetaData[] = {
		{ "Category", "Bubbles Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Show moving bubbles on the wires. Default: false */" },
#endif
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show moving bubbles on the wires. Default: false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleDisplayRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Display rules to show/move bubbles only near selected nodes. Default: Always */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display rules to show/move bubbles only near selected nodes. Default: Always" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If selection only consider close nodes (near) or every related nodes (far). Default: Near */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If selection only consider close nodes (near) or every related nodes (far). Default: Near" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleZoomThreshold_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMax", "7" },
		{ "ClampMin", "-12" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Disable bubbles above a certain zoom level. Default: -2 */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable bubbles above a certain zoom level. Default: -2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSize_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Size of bubbles on the wires. Default: 2.0 */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of bubbles on the wires. Default: 2.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpeed_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Speed of bubbles on the wires. Default: 4.0 */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed of bubbles on the wires. Default: 4.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpace_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Space between bubbles on the wires. Default: 20.0 */" },
#endif
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Space between bubbles on the wires. Default: 20.0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UElectronicNodesSettings constinit property declarations *****************
	static void NewProp_MasterActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
	static void NewProp_ActivateOnBlueprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnBlueprint;
	static void NewProp_ActivateOnMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnMaterial;
	static void NewProp_ActivateOnAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnAnimation;
	static void NewProp_ActivateOnVoxelPlugin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnVoxelPlugin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WirePriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WirePriority;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RoundRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireThickness;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HorizontalOffset;
	static void NewProp_DisablePinOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisablePinOffset;
	static void NewProp_FixZoomDisplacement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FixZoomDisplacement;
	static void NewProp_OverwriteExecWireStyle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteExecWireStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireStyleForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireStyleForExec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireAlignmentForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireAlignmentForExec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WirePriorityForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WirePriorityForExec;
	static void NewProp_ActivateRibbon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateRibbon;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RibbonOffset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RibbonMergeOffset;
	static void NewProp_ForceDrawBubbles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceDrawBubbles;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BubbleDisplayRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BubbleDisplayRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionRule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BubbleZoomThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UElectronicNodesSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElectronicNodesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UElectronicNodesSettings_Statics

// ********** Begin Class UElectronicNodesSettings Property Definitions ****************************
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->MasterActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterActivate_MetaData), NewProp_MasterActivate_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnBlueprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint = { "ActivateOnBlueprint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnBlueprint_MetaData), NewProp_ActivateOnBlueprint_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial = { "ActivateOnMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnMaterial_MetaData), NewProp_ActivateOnMaterial_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation = { "ActivateOnAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnAnimation_MetaData), NewProp_ActivateOnAnimation_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnVoxelPlugin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin = { "ActivateOnVoxelPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnVoxelPlugin_MetaData), NewProp_ActivateOnVoxelPlugin_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle = { "WireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyle), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireStyle_MetaData), NewProp_WireStyle_MetaData) }; // 3903519207
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment = { "WireAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignment), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireAlignment_MetaData), NewProp_WireAlignment_MetaData) }; // 651427631
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority = { "WirePriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriority), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WirePriority_MetaData), NewProp_WirePriority_MetaData) }; // 983531275
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius = { "RoundRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RoundRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundRadius_MetaData), NewProp_RoundRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness = { "WireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireThickness_MetaData), NewProp_WireThickness_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset = { "HorizontalOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, HorizontalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalOffset_MetaData), NewProp_HorizontalOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->DisablePinOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset = { "DisablePinOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisablePinOffset_MetaData), NewProp_DisablePinOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->FixZoomDisplacement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement = { "FixZoomDisplacement", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixZoomDisplacement_MetaData), NewProp_FixZoomDisplacement_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->OverwriteExecWireStyle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle = { "OverwriteExecWireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwriteExecWireStyle_MetaData), NewProp_OverwriteExecWireStyle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec = { "WireStyleForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyleForExec), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireStyleForExec_MetaData), NewProp_WireStyleForExec_MetaData) }; // 3903519207
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec = { "WireAlignmentForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignmentForExec), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireAlignmentForExec_MetaData), NewProp_WireAlignmentForExec_MetaData) }; // 651427631
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec = { "WirePriorityForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriorityForExec), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WirePriorityForExec_MetaData), NewProp_WirePriorityForExec_MetaData) }; // 983531275
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateRibbon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon = { "ActivateRibbon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateRibbon_MetaData), NewProp_ActivateRibbon_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset = { "RibbonOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonOffset_MetaData), NewProp_RibbonOffset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset = { "RibbonMergeOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonMergeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonMergeOffset_MetaData), NewProp_RibbonMergeOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ForceDrawBubbles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles = { "ForceDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDrawBubbles_MetaData), NewProp_ForceDrawBubbles_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule = { "BubbleDisplayRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleDisplayRule), Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleDisplayRule_MetaData), NewProp_BubbleDisplayRule_MetaData) }; // 4059606803
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule = { "SelectionRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, SelectionRule), Z_Construct_UEnum_ElectronicNodes_ESelectionRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionRule_MetaData), NewProp_SelectionRule_MetaData) }; // 3517945259
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold = { "BubbleZoomThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleZoomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleZoomThreshold_MetaData), NewProp_BubbleZoomThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize = { "BubbleSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSize_MetaData), NewProp_BubbleSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed = { "BubbleSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpeed_MetaData), NewProp_BubbleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace = { "BubbleSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpace_MetaData), NewProp_BubbleSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers) < 2048);
// ********** End Class UElectronicNodesSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams = {
	&UElectronicNodesSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams)
};
void UElectronicNodesSettings::StaticRegisterNativesUElectronicNodesSettings()
{
}
UClass* Z_Construct_UClass_UElectronicNodesSettings()
{
	if (!Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton, Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UElectronicNodesSettings);
UElectronicNodesSettings::~UElectronicNodesSettings() {}
// ********** End Class UElectronicNodesSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWireStyle_StaticEnum, TEXT("EWireStyle"), &Z_Registration_Info_UEnum_EWireStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3903519207U) },
		{ EWireAlignment_StaticEnum, TEXT("EWireAlignment"), &Z_Registration_Info_UEnum_EWireAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 651427631U) },
		{ EWirePriority_StaticEnum, TEXT("EWirePriority"), &Z_Registration_Info_UEnum_EWirePriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 983531275U) },
		{ EBubbleDisplayRule_StaticEnum, TEXT("EBubbleDisplayRule"), &Z_Registration_Info_UEnum_EBubbleDisplayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4059606803U) },
		{ ESelectionRule_StaticEnum, TEXT("ESelectionRule"), &Z_Registration_Info_UEnum_ESelectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3517945259U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElectronicNodesSettings, UElectronicNodesSettings::StaticClass, TEXT("UElectronicNodesSettings"), &Z_Registration_Info_UClass_UElectronicNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElectronicNodesSettings), 2783528734U) },
	};
}; // Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_1066945991{
	TEXT("/Script/ElectronicNodes"),
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClutterVR_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h__Script_ElectronicNodes_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
