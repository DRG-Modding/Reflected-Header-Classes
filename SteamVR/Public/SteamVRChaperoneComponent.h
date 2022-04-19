#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SteamVRChaperoneComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class STEAMVR_API USteamVRChaperoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSteamVRChaperoneEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamVRChaperoneEvent OnLeaveBounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSteamVRChaperoneEvent OnReturnToBounds;
    
    USteamVRChaperoneComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetBounds() const;
    
};

