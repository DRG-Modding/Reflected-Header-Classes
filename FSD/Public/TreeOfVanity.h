#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "VanityNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "TreeOfVanity.generated.h"

class UReward;

UCLASS(Blueprintable, EditInlineNew)
class UTreeOfVanity : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVanityNode> Nodes;
    
    UTreeOfVanity();
    UFUNCTION(BlueprintCallable)
    void ClearNodes();
    
    UFUNCTION(BlueprintCallable)
    void AddNode(UReward* Reward, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D Position);
    
};

