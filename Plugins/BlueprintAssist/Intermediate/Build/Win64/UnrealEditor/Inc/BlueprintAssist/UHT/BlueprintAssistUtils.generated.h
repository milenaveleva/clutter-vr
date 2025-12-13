// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintAssistUtils.h"

#ifdef BLUEPRINTASSIST_BlueprintAssistUtils_generated_h
#error "BlueprintAssistUtils.generated.h already included, missing '#pragma once' in BlueprintAssistUtils.h"
#endif
#define BLUEPRINTASSIST_BlueprintAssistUtils_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ClutterVR_Plugins_BlueprintAssist_Source_BlueprintAssist_Public_BlueprintAssistUtils_h

// ********** Begin Enum EBARoundingMethod *********************************************************
#define FOREACH_ENUM_EBAROUNDINGMETHOD(op) \
	op(EBARoundingMethod::Round) \
	op(EBARoundingMethod::Ceil) \
	op(EBARoundingMethod::Floor) 

enum class EBARoundingMethod : uint8;
template<> struct TIsUEnumClass<EBARoundingMethod> { enum { Value = true }; };
template<> BLUEPRINTASSIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EBARoundingMethod>();
// ********** End Enum EBARoundingMethod ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
