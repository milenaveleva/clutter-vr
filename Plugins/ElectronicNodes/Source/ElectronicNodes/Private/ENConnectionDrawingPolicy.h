/* Copyright (C) 2019 Hugo ATTAL - All Rights Reserved
 * This plugin is downloadable from the UE4 Marketplace
 */

#pragma once

#include "CoreMinimal.h"
#include "EdGraphUtilities.h"
#include "ConnectionDrawingPolicy.h"
#include "../Public/ElectronicNodesSettings.h"

#include "BlueprintConnectionDrawingPolicy.h"
#include "MaterialGraph/MaterialGraphSchema.h"
#include "EdGraphSchema_K2.h"
//#include "AnimationPins/SGraphPinPose.h"

struct ENRibbonConnection
{
	float Main;
	float Sub;
	bool Horizontal;
	float Start;
	float End;
	int32 Depth = 0;

	ENRibbonConnection(float Main, float Sub, bool Horizontal, float Start, float End, int32 Depth = 0)
	{
		this->Main = Main;
		this->Sub = Sub;
		this->Horizontal = Horizontal;
		this->Start = Start;
		this->End = End;
		this->Depth = Depth;
	}
};

struct FENConnectionDrawingPolicyFactory : public FGraphPanelPinConnectionFactory
{
public:
	virtual ~FENConnectionDrawingPolicyFactory() {}

	virtual class FConnectionDrawingPolicy* CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const override;

};

class FENConnectionDrawingPolicy : public FKismetConnectionDrawingPolicy
{
public:
	FENConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
		:FKismetConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj)
	{
	}

	virtual void DrawConnection(int32 LayerId, const FVector2f& Start, const FVector2f& End, const FConnectionParams& Params) override;


	void ENComputeClosestPoint(const FVector2f& Start, const FVector2f& End);
	void ENComputeClosestPointDefault(const FVector2f& Start, const FVector2f& StartTangent, const FVector2f& End, const FVector2f& EndTangent);
	void ENDrawBubbles(const FVector2f& Start, const FVector2f& StartTangent, const FVector2f& End, const FVector2f& EndTangent);
	void ENDrawArrow(const FVector2f& Start, const FVector2f& End);

	void DrawDebugPoint(const FVector2f& Position, FLinearColor Color);

private:
	const UElectronicNodesSettings& ElectronicNodesSettings = *GetDefault<UElectronicNodesSettings>();
	bool ReversePins;
	float MinXOffset;
	float ClosestDistanceSquared;
	FVector2f ClosestPoint;
	TArray<ENRibbonConnection> RibbonConnections;
	TMap<FVector2f, int> PinsOffset;

	void ENCorrectZoomDisplacement(FVector2f& Start, FVector2f& End);
	void ENProcessRibbon(int32 LayerId, FVector2f& Start, FVector2f& StartDirection, FVector2f& End, FVector2f& EndDirection, const FConnectionParams& Params);
	bool ENIsRightPriority(const FConnectionParams& Params);
	int32 ENGetZoomLevel();

	TSharedPtr<SGraphPanel> GetGraphPanel();
	void BuildRelatedNodes(UEdGraphNode* Node, TArray<UEdGraphNode*>& RelatedNodes, bool InputCheck, bool OutputCheck);
	FVector2f GetConvertedMousePosition() const;

	int32 _LayerId;
	const FConnectionParams* _Params;
};
