// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoSizeCommentsSettings.h"

#ifdef AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h
#error "AutoSizeCommentsSettings.generated.h already included, missing '#pragma once' in AutoSizeCommentsSettings.h"
#endif
#define AUTOSIZECOMMENTS_AutoSizeCommentsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPresetCommentStyle ***********************************************
struct Z_Construct_UScriptStruct_FPresetCommentStyle_Statics;
#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPresetCommentStyle_Statics; \
	AUTOSIZECOMMENTS_API static class UScriptStruct* StaticStruct();


struct FPresetCommentStyle;
// ********** End ScriptStruct FPresetCommentStyle *************************************************

// ********** Begin ScriptStruct FASCGraphSettings *************************************************
struct Z_Construct_UScriptStruct_FASCGraphSettings_Statics;
#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FASCGraphSettings_Statics; \
	AUTOSIZECOMMENTS_API static class UScriptStruct* StaticStruct();


struct FASCGraphSettings;
// ********** End ScriptStruct FASCGraphSettings ***************************************************

// ********** Begin Class UAutoSizeCommentsSettings ************************************************
struct Z_Construct_UClass_UAutoSizeCommentsSettings_Statics;
AUTOSIZECOMMENTS_API UClass* Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister();

#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSizeCommentsSettings(); \
	friend struct ::Z_Construct_UClass_UAutoSizeCommentsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOSIZECOMMENTS_API UClass* ::Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoSizeCommentsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSizeComments"), Z_Construct_UClass_UAutoSizeCommentsSettings_NoRegister) \
	DECLARE_SERIALIZER(UAutoSizeCommentsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoSizeCommentsSettings(UAutoSizeCommentsSettings&&) = delete; \
	UAutoSizeCommentsSettings(const UAutoSizeCommentsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSizeCommentsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSizeCommentsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSizeCommentsSettings) \
	NO_API virtual ~UAutoSizeCommentsSettings();


#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_109_PROLOG
#define FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_INCLASS_NO_PURE_DECLS \
	FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoSizeCommentsSettings;

// ********** End Class UAutoSizeCommentsSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_milenaveleva_Git_ClutterVR_Plugins_AutoSizeComments_Source_AutoSizeComments_Public_AutoSizeCommentsSettings_h

// ********** Begin Enum EASCCacheSaveMethod *******************************************************
#define FOREACH_ENUM_EASCCACHESAVEMETHOD(op) \
	op(EASCCacheSaveMethod::File) \
	op(EASCCacheSaveMethod::MetaData) 

enum class EASCCacheSaveMethod : uint8;
template<> struct TIsUEnumClass<EASCCacheSaveMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EASCCacheSaveMethod>();
// ********** End Enum EASCCacheSaveMethod *********************************************************

// ********** Begin Enum EASCCacheSaveLocation *****************************************************
#define FOREACH_ENUM_EASCCACHESAVELOCATION(op) \
	op(EASCCacheSaveLocation::Plugin) \
	op(EASCCacheSaveLocation::Project) 

enum class EASCCacheSaveLocation : uint8;
template<> struct TIsUEnumClass<EASCCacheSaveLocation> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EASCCacheSaveLocation>();
// ********** End Enum EASCCacheSaveLocation *******************************************************

// ********** Begin Enum EASCResizingMode **********************************************************
#define FOREACH_ENUM_EASCRESIZINGMODE(op) \
	op(EASCResizingMode::Always) \
	op(EASCResizingMode::Reactive) \
	op(EASCResizingMode::Disabled) 

enum class EASCResizingMode : uint8;
template<> struct TIsUEnumClass<EASCResizingMode> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EASCResizingMode>();
// ********** End Enum EASCResizingMode ************************************************************

// ********** Begin Enum ECommentCollisionMethod ***************************************************
#define FOREACH_ENUM_ECOMMENTCOLLISIONMETHOD(op) \
	op(ECommentCollisionMethod::Point) \
	op(ECommentCollisionMethod::Intersect) \
	op(ECommentCollisionMethod::Contained) \
	op(ECommentCollisionMethod::Disabled) 

enum class ECommentCollisionMethod : uint8;
template<> struct TIsUEnumClass<ECommentCollisionMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommentCollisionMethod>();
// ********** End Enum ECommentCollisionMethod *****************************************************

// ********** Begin Enum EASCAutoInsertComment *****************************************************
#define FOREACH_ENUM_EASCAUTOINSERTCOMMENT(op) \
	op(EASCAutoInsertComment::Never) \
	op(EASCAutoInsertComment::Always) \
	op(EASCAutoInsertComment::Surrounded) 

enum class EASCAutoInsertComment : uint8;
template<> struct TIsUEnumClass<EASCAutoInsertComment> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EASCAutoInsertComment>();
// ********** End Enum EASCAutoInsertComment *******************************************************

// ********** Begin Enum EASCDefaultCommentColorMethod *********************************************
#define FOREACH_ENUM_EASCDEFAULTCOMMENTCOLORMETHOD(op) \
	op(EASCDefaultCommentColorMethod::None) \
	op(EASCDefaultCommentColorMethod::Random) \
	op(EASCDefaultCommentColorMethod::Default) 

enum class EASCDefaultCommentColorMethod : uint8;
template<> struct TIsUEnumClass<EASCDefaultCommentColorMethod> { enum { Value = true }; };
template<> AUTOSIZECOMMENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EASCDefaultCommentColorMethod>();
// ********** End Enum EASCDefaultCommentColorMethod ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
