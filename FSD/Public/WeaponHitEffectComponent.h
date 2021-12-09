#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "WeaponHitEffectComponent.generated.h"

class AActor;

UCLASS()
class UWeaponHitEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EffectChance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnEffect(const FVector_NetQuantize& Location, const FRotator& Rotation);
    
    UFUNCTION()
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
    
public:
    UWeaponHitEffectComponent();
};

