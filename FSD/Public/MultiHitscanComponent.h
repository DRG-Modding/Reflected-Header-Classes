#pragma once
#include "CoreMinimal.h"
#include "HitscanBaseComponent.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "MultiHitScanHits.h"
#include "MultiHitscanComponent.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMultiHitscanComponentOnHit, const FHitResult&, Hit, bool, AlwaysPenetrate);

UCLASS()
class UMultiHitscanComponent : public UHitscanBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FMultiHitscanComponentOnHit OnHit;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 BulletsPerShot;
    
    UPROPERTY(EditAnywhere)
    float MuzzleRadius;
    
    UPROPERTY(EditAnywhere)
    float GeneralImpactAudioVolume;
    
    UPROPERTY(Transient)
    TArray<AActor*> DamagedActorCache;
    
    UPROPERTY(Transient)
    FMultiHitScanHits Hits;
    
    UPROPERTY(Transient)
    TArray<AActor*> ActorsHit;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowHit(const FMultiHitScanHits& hitResults);
    
public:
    UMultiHitscanComponent();
};

