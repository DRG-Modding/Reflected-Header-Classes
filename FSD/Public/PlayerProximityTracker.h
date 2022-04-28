#pragma once
#include "CoreMinimal.h"
#include "ProximityTriggerItem.h"
#include "PlayerSphere.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PlayerProximityDelegateDelegate.h"
#include "PlayerProximityTracker.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerProximityTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxDistanceBetweenPlayers;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpheresUpdateRatePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerSphere> PlayerSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;
    
public:
    UPlayerProximityTracker();
    UFUNCTION(BlueprintCallable)
    static void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerSphere GetPrimarySphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerSphere> GetPlayerSpheres() const;
    
};

