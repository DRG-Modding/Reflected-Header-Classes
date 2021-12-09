#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "FlareGunProjectile.generated.h"

class AMiningPod;

UCLASS()
class AFlareGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsFlareOn)
    bool IsFlareOn;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateShadowRadius();
    
    UFUNCTION()
    void OnRep_IsFlareOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlareIgnite();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlareExtinguish();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppodImpact(AMiningPod* DropPod);
    
public:
    UFUNCTION(BlueprintCallable)
    void Inhibit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateFlare();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFlareGunProjectile();
};

