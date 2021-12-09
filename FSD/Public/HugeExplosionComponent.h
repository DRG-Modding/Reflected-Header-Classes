#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "HugeExplosionComponent.generated.h"

class UParticleSystem;

UCLASS(BlueprintType)
class UHugeExplosionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(EditAnywhere)
    float ExplosionSpeed;
    
    UPROPERTY(EditAnywhere)
    float ExplosionSize;
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerExplosion(FVector Location);
    
    UHugeExplosionComponent();
};

