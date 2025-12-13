// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Grabbable/IsdkGrabTransformerComponent.h"

#ifdef OCULUSINTERACTION_IsdkGrabTransformerComponent_generated_h
#error "IsdkGrabTransformerComponent.generated.h already included, missing '#pragma once' in IsdkGrabTransformerComponent.h"
#endif
#define OCULUSINTERACTION_IsdkGrabTransformerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IIsdkITransformer;
class UIsdkGrabTransformerComponent;
class UIsdkTransformer;
class USceneComponent;
enum class TransformEvent : uint8;
struct FIsdkGrabPoseCollection;

// ********** Begin ScriptStruct FIsdkInteractorMoveSnapState **************************************
struct Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics;
#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkInteractorMoveSnapState;
// ********** End ScriptStruct FIsdkInteractorMoveSnapState ****************************************

// ********** Begin Delegate FIsdkGrabTransformerEventDelegate *************************************
#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_68_DELEGATE \
OCULUSINTERACTION_API void FIsdkGrabTransformerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkGrabTransformerEventDelegate, TransformEvent Event, const UIsdkGrabTransformerComponent* GrabTransformer);


// ********** End Delegate FIsdkGrabTransformerEventDelegate ***************************************

// ********** Begin Delegate FIsdkCancelGrabEventDelegate ******************************************
#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_75_DELEGATE \
OCULUSINTERACTION_API void FIsdkCancelGrabEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkCancelGrabEventDelegate, int32 InteractorID, UIsdkGrabTransformerComponent* GrabTransformer);


// ********** End Delegate FIsdkCancelGrabEventDelegate ********************************************

// ********** Begin Class UIsdkGrabTransformerComponent ********************************************
#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActiveGrabTransformer); \
	DECLARE_FUNCTION(execGetGrabPoses); \
	DECLARE_FUNCTION(execGetTransformTarget); \
	DECLARE_FUNCTION(execSetTransformTarget); \
	DECLARE_FUNCTION(execGetMultiGrabTransformerObject); \
	DECLARE_FUNCTION(execGetMultiGrabTransformer); \
	DECLARE_FUNCTION(execSetMultiGrabTransformerObject); \
	DECLARE_FUNCTION(execSetMultiGrabTransformer); \
	DECLARE_FUNCTION(execGetSingleGrabTransformerObject); \
	DECLARE_FUNCTION(execGetSingleGrabTransformer); \
	DECLARE_FUNCTION(execSetSingleGrabTransformerObject); \
	DECLARE_FUNCTION(execSetSingleGrabTransformer); \
	DECLARE_FUNCTION(execForceCancel);


struct Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics;
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();

#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabTransformerComponent(); \
	friend struct ::Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* ::Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabTransformerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabTransformerComponent)


#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabTransformerComponent(UIsdkGrabTransformerComponent&&) = delete; \
	UIsdkGrabTransformerComponent(const UIsdkGrabTransformerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabTransformerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabTransformerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabTransformerComponent) \
	NO_API virtual ~UIsdkGrabTransformerComponent();


#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_86_PROLOG
#define FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_INCLASS_NO_PURE_DECLS \
	FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabTransformerComponent;

// ********** End Class UIsdkGrabTransformerComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClutterVR_Plugins_MetaXRInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h

// ********** Begin Enum TransformEvent ************************************************************
#define FOREACH_ENUM_TRANSFORMEVENT(op) \
	op(TransformEvent::BeginTransform) \
	op(TransformEvent::UpdateTransform) \
	op(TransformEvent::EndTransform) 

enum class TransformEvent : uint8;
template<> struct TIsUEnumClass<TransformEvent> { enum { Value = true }; };
template<> OCULUSINTERACTION_NON_ATTRIBUTED_API UEnum* StaticEnum<TransformEvent>();
// ********** End Enum TransformEvent **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
