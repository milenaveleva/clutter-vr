// Fill out your copyright notice in the Description page of Project Settings.


#include "ClutterHelpersFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

void UClutterHelpersFunctionLibrary::PrintDebug(const UObject* WorldContextObject, const FString& InCategory,
                                                const FString& InFunctionName, const FString& InVariable, const FString& InMessage, const FLinearColor InColor)
{
	FString const OutLog =  "[" + InCategory + "] " + InFunctionName + " . " + InVariable + " : " + InMessage;
	UKismetSystemLibrary::PrintString(WorldContextObject, OutLog, true, true, InColor,5);
}
