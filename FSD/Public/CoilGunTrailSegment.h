#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CoilGunTrailSegment.generated.h"

UCLASS(Blueprintable)
class ACoilGunTrailSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_EffectsLife)
    float EffectsLife;
    
    UPROPERTY(EditAnywhere)
    float DeactivationTime;
    
public:
    ACoilGunTrailSegment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEffects();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EffectsLife();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndEffects();
    
};

