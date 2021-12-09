#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ProximityTriggerItem.h"
#include "PlayerSphere.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PlayerProximityTracker.generated.h"

class APlayerCharacter;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayerProximityTrackerProximityCallback, APlayerCharacter*, Player, bool, enteredTrigger);

UCLASS(BlueprintType)
class UPlayerProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxDistanceBetweenPlayers;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpheresUpdateRatePerSecond;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPlayerSphere> PlayerSpheres;
    
    UPROPERTY(Transient)
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    
    UPROPERTY(Transient)
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;
    
public:
    UFUNCTION(BlueprintCallable)
    static void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityTrackerProximityCallback& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityTrackerProximityCallback& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintPure)
    FPlayerSphere GetPrimarySphere() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPlayerSphere> GetPlayerSpheres() const;
    
    UPlayerProximityTracker();
};

