#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "DroneFlame.generated.h"

class UParticleSystemComponent;
class UStatusEffect;
class UDamageComponent;

UCLASS()
class ADroneFlame : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FlameParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FlameParameterNames;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    float DamageTickRate;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float FlameDiameter;
    
    UPROPERTY(EditAnywhere)
    float range;
    
public:
    ADroneFlame();
};

