#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "FlyingEnemyDeepPathfinderCharacter.generated.h"

class UPrimitiveComponent;
class UPhysicalMaterial;
class UPhysicsAsset;
class USoundCue;
class AActor;
class UParticleSystem;

UCLASS()
class AFlyingEnemyDeepPathfinderCharacter : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* FrozenMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicsAsset* FrozenAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* FrozenDeathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* FrozenDeathparticles;
    
    UFUNCTION()
    void TriggerFrozenRagdoll();
    
public:
    UFUNCTION()
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_FreezeImpact();
    
    AFlyingEnemyDeepPathfinderCharacter();
};

