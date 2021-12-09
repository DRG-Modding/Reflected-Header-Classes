#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "DecalData.h"
#include "StickyFlame.generated.h"

class UAudioComponent;
class UParticleSystemComponent;
class UStatusEffectTriggerComponent;

UCLASS()
class AStickyFlame : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FlameParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* Audio;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStatusEffectTriggerComponent* StatusTriggerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDecalData Decal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlameLifetime;
    
    UPROPERTY(EditAnywhere)
    float FlameExtinguishTime;
    
    UPROPERTY(EditAnywhere)
    float AudioFadeOutTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsActive)
    bool IsActive;
    
    UFUNCTION()
    void OnRep_IsActive();
    
    UFUNCTION()
    void OnExtinguisFlame();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AStickyFlame();
};

