#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GunLogicComponent.generated.h"

class UWeaponFireComponent;
class UMeshComponent;
class USoundCue;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGunLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UWeaponFireComponent* WeaponFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(EditAnywhere)
    float RateOfFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FireSound;
    
    UPROPERTY(EditAnywhere)
    float MinTracerDistance;
    
    UPROPERTY(EditAnywhere)
    float TracerSpeed;
    
public:
    UGunLogicComponent();
    UFUNCTION(BlueprintCallable)
    void SetMesh(UMeshComponent* NewMesh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFireEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
};

