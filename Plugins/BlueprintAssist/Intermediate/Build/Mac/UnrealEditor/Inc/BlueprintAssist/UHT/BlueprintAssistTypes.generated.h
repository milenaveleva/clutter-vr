// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistTypes.h"

#ifdef BLUEPRINTASSIST_BlueprintAssistTypes_generated_h
#error "BlueprintAssistTypes.generated.h already included, missing '#pragma once' in BlueprintAssistTypes.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_milenaveleva_Git_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistTypes_h

// ********** Begin Enum EBADragMethod *************************************************************
#define FOREACH_ENUM_EBADRAGMETHOD(op) \
	op(EBADragMethod::LMB) \
	op(EBADragMethod::AdditionalDragChord) 

enum class EBADragMethod : uint8;
template<> struct TIsUEnumClass<EBADragMethod> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBADragMethod>();
// ********** End Enum EBADragMethod ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
