/* Copyright (C) 2019 Hugo ATTAL - All Rights Reserved
 * This plugin is downloadable from the UE4 Marketplace
 */

#pragma once

#include "CoreMinimal.h"
#include "ENConnectionDrawingPolicy.h"
#include "Editor/AnimationBlueprintEditor/Private/AnimGraphConnectionDrawingPolicy.h"


class FENAnimGraphConnectionDrawingPolicy : public FAnimGraphConnectionDrawingPolicy
{
public:
    FENAnimGraphConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
        : FAnimGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj)
    {
        this->connectionDrawingPolicy = new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
    }

    virtual void DrawConnection(int32 LayerId, const FVector2f& Start, const FVector2f& End, const FConnectionParams& Params) override;
    virtual bool TreatWireAsExecutionPin(UEdGraphPin* InputPin, UEdGraphPin* OutputPin) const override;
    virtual void BuildExecutionRoadmap() override;
    virtual void DetermineStyleOfExecWire(float& Thickness, FLinearColor& WireColor, bool& bDrawBubbles, const FTimePair& Times) override;
    virtual void BuildPinToPinWidgetMap(TMap<TSharedRef<SWidget>, FArrangedWidget>& InPinGeometries) override;
    virtual void ApplyHoverDeemphasis(UEdGraphPin* OutputPin, UEdGraphPin* InputPin, /*inout*/ float& Thickness, /*inout*/ FLinearColor& WireColor) override;
    
    ~FENAnimGraphConnectionDrawingPolicy()
    {
        delete connectionDrawingPolicy;
    }

private:
    FENConnectionDrawingPolicy* connectionDrawingPolicy;
};
