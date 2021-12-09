#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SteamVRChaperoneComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSteamVRChaperoneComponentOnLeaveBounds);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSteamVRChaperoneComponentOnReturnToBounds);

UCLASS(BlueprintType)
class STEAMVR_API USteamVRChaperoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSteamVRChaperoneComponentOnLeaveBounds OnLeaveBounds;
    
    UPROPERTY(BlueprintAssignable)
    FSteamVRChaperoneComponentOnReturnToBounds OnReturnToBounds;
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetBounds() const;
    
    USteamVRChaperoneComponent();
};

