#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "FrozenPawnImpactComponent.generated.h"

class UPrimitiveComponent;
class UPhysicalMaterial;
class UPhysicsAsset;
class USoundCue;
class AActor;
class UParticleSystem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrozenPawnImpactComponentOnStartFallingEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrozenPawnImpactComponentOnFreezeImpactEvent);

UCLASS(BlueprintType)
class UFrozenPawnImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFrozenPawnImpactComponentOnStartFallingEvent OnStartFallingEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFrozenPawnImpactComponentOnFreezeImpactEvent OnFreezeImpactEvent;
    
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
    
    UFUNCTION()
    void OnFrozen(bool frozen);
    
    UFUNCTION()
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFrozenPawnImpactComponent();
};

