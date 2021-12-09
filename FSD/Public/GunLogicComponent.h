#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GunLogicComponent.generated.h"

class UMeshComponent;
class UParticleSystem;
class UWeaponFireComponent;
class USoundCue;

UCLASS(BlueprintType)
class UGunLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* Mesh;
    
    UPROPERTY(EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* MuzzleParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* TracerParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FireSound;
    
    UPROPERTY(EditAnywhere)
    float MinTracerDistance;
    
    UPROPERTY(EditAnywhere)
    float TracerSpeed;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* NewMesh);
    
protected:
    UFUNCTION()
    void OnWeaponFireEnded();
    
    UFUNCTION()
    void OnWeaponFired(const FVector& Location);
    
public:
    UGunLogicComponent();
};

