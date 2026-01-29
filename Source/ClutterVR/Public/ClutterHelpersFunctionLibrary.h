// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClutterHelpersFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CLUTTERVR_API UClutterHelpersFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext="WorldContextObject", DefaultToSelf="WorldContextObject"))
	static void PrintDebug(const UObject* WorldContextObject, const FString& InCategory, const FString& InFunctionName,
		const FString& InVariable, const FString& InMessage, const FLinearColor InColor = FLinearColor(0, 0.66, 1));
};
