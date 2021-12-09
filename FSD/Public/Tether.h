#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Tether.generated.h"

class USphereComponent;
class USkeletalMeshComponent;
class UNiagaraComponent;
class UInstantUsable;
class UDamageComponent;
class UCarriableComponent;
class UParticleSystem;
class USoundCue;

UCLASS()
class FSD_API ATether : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInstantUsable* UsableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableComponent* Carry;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* UseTrigger;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UNiagaraComponent* TetherBeam;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USphereComponent* PysicalCollision;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* ExplosionDamage;
    
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ExplosionParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool IsOnGround;
    
    UPROPERTY(EditAnywhere)
    float KnockBackForce;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsOnGround(bool NewIsOnGround);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDronePickup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroneDrop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Explode();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATether();
};

