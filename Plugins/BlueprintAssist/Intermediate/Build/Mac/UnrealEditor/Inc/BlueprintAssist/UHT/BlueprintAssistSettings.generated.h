// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistSettings.h"

#ifdef BLUEPRINTASSIST_BlueprintAssistSettings_generated_h
#error "BlueprintAssistSettings.generated.h already included, missing '#pragma once' in BlueprintAssistSettings.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBAFormatterSettings **********************************************
struct Z_Construct_UScriptStruct_FBAFormatterSettings_Statics;
#define FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBAFormatterSettings_Statics; \
	BLUEPRINTASSIST_API static class UScriptStruct* StaticStruct();


struct FBAFormatterSettings;
// ********** End ScriptStruct FBAFormatterSettings ************************************************

// ********** Begin Class UBASettings **************************************************************
struct Z_Construct_UClass_UBASettings_Statics;
BLUEPRINTASSIST_API UClass* Z_Construct_UClass_UBASettings_NoRegister();

#define FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBASettings(); \
	friend struct ::Z_Construct_UClass_UBASettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTASSIST_API UClass* ::Z_Construct_UClass_UBASettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBASettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintAssist"), Z_Construct_UClass_UBASettings_NoRegister) \
	DECLARE_SERIALIZER(UBASettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_149_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBASettings(UBASettings&&) = delete; \
	UBASettings(const UBASettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBASettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBASettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBASettings) \
	NO_API virtual ~UBASettings();


#define FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_146_PROLOG
#define FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_149_INCLASS_NO_PURE_DECLS \
	FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBASettings;

// ********** End Class UBASettings ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistSettings_h

// ********** Begin Enum EBACacheSaveLocation ******************************************************
#define FOREACH_ENUM_EBACACHESAVELOCATION(op) \
	op(EBACacheSaveLocation::Plugin) \
	op(EBACacheSaveLocation::Project) 

enum class EBACacheSaveLocation : uint8;
template<> struct TIsUEnumClass<EBACacheSaveLocation> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBACacheSaveLocation>();
// ********** End Enum EBACacheSaveLocation ********************************************************

// ********** Begin Enum EBANodeFormattingStyle ****************************************************
#define FOREACH_ENUM_EBANODEFORMATTINGSTYLE(op) \
	op(EBANodeFormattingStyle::Expanded) \
	op(EBANodeFormattingStyle::Compact) 

enum class EBANodeFormattingStyle : uint8;
template<> struct TIsUEnumClass<EBANodeFormattingStyle> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBANodeFormattingStyle>();
// ********** End Enum EBANodeFormattingStyle ******************************************************

// ********** Begin Enum EBAParameterFormattingStyle ***********************************************
#define FOREACH_ENUM_EBAPARAMETERFORMATTINGSTYLE(op) \
	op(EBAParameterFormattingStyle::Helixing) \
	op(EBAParameterFormattingStyle::LeftSide) 

enum class EBAParameterFormattingStyle : uint8;
template<> struct TIsUEnumClass<EBAParameterFormattingStyle> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAParameterFormattingStyle>();
// ********** End Enum EBAParameterFormattingStyle *************************************************

// ********** Begin Enum EBAWiringStyle ************************************************************
#define FOREACH_ENUM_EBAWIRINGSTYLE(op) \
	op(EBAWiringStyle::AlwaysMerge) \
	op(EBAWiringStyle::MergeWhenNear) \
	op(EBAWiringStyle::SingleWire) 

enum class EBAWiringStyle : uint8;
template<> struct TIsUEnumClass<EBAWiringStyle> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAWiringStyle>();
// ********** End Enum EBAWiringStyle **************************************************************

// ********** Begin Enum EBAAutoFormatting *********************************************************
#define FOREACH_ENUM_EBAAUTOFORMATTING(op) \
	op(EBAAutoFormatting::Never) \
	op(EBAAutoFormatting::FormatAllConnected) \
	op(EBAAutoFormatting::FormatSingleConnected) 

enum class EBAAutoFormatting : uint8;
template<> struct TIsUEnumClass<EBAAutoFormatting> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAAutoFormatting>();
// ********** End Enum EBAAutoFormatting ***********************************************************

// ********** Begin Enum EBAFormatAllStyle *********************************************************
#define FOREACH_ENUM_EBAFORMATALLSTYLE(op) \
	op(EBAFormatAllStyle::Simple) \
	op(EBAFormatAllStyle::Smart) \
	op(EBAFormatAllStyle::NodeType) 

enum class EBAFormatAllStyle : uint8;
template<> struct TIsUEnumClass<EBAFormatAllStyle> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAFormatAllStyle>();
// ********** End Enum EBAFormatAllStyle ***********************************************************

// ********** Begin Enum EBAFormatAllHorizontalAlignment *******************************************
#define FOREACH_ENUM_EBAFORMATALLHORIZONTALALIGNMENT(op) \
	op(EBAFormatAllHorizontalAlignment::RootNode) \
	op(EBAFormatAllHorizontalAlignment::Comment) 

enum class EBAFormatAllHorizontalAlignment : uint8;
template<> struct TIsUEnumClass<EBAFormatAllHorizontalAlignment> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAFormatAllHorizontalAlignment>();
// ********** End Enum EBAFormatAllHorizontalAlignment *********************************************

// ********** Begin Enum EBAFormatterType **********************************************************
#define FOREACH_ENUM_EBAFORMATTERTYPE(op) \
	op(EBAFormatterType::Blueprint) \
	op(EBAFormatterType::BehaviorTree) \
	op(EBAFormatterType::Simple) 

enum class EBAFormatterType : uint8;
template<> struct TIsUEnumClass<EBAFormatterType> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAFormatterType>();
// ********** End Enum EBAFormatterType ************************************************************

// ********** Begin Enum EBAAutoZoomToNode *********************************************************
#define FOREACH_ENUM_EBAAUTOZOOMTONODE(op) \
	op(EBAAutoZoomToNode::Never) \
	op(EBAAutoZoomToNode::Always) \
	op(EBAAutoZoomToNode::Outside_Viewport) 

enum class EBAAutoZoomToNode : uint8;
template<> struct TIsUEnumClass<EBAAutoZoomToNode> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAAutoZoomToNode>();
// ********** End Enum EBAAutoZoomToNode ***********************************************************

// ********** Begin Enum EBAFunctionAccessSpecifier ************************************************
#define FOREACH_ENUM_EBAFUNCTIONACCESSSPECIFIER(op) \
	op(EBAFunctionAccessSpecifier::Public) \
	op(EBAFunctionAccessSpecifier::Protected) \
	op(EBAFunctionAccessSpecifier::Private) 

enum class EBAFunctionAccessSpecifier : uint8;
template<> struct TIsUEnumClass<EBAFunctionAccessSpecifier> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBAFunctionAccessSpecifier>();
// ********** End Enum EBAFunctionAccessSpecifier **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
