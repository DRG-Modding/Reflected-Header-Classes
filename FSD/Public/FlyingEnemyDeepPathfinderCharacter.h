#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnemyDeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "FlyingEnemyDeepPathfinderCharacter.generated.h"

class AActor;
class UParticleSystem;
class UPhysicalMaterial;
class UPhysicsAsset;
class USoundCue;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFlyingEnemyDeepPathfinderCharacter : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* FrozenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* FrozenAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FrozenDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FrozenDeathparticles;
    
public:
    AFlyingEnemyDeepPathfinderCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerFrozenRagdoll();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FreezeImpact();
    
};

