#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GuntowerLineProjectile.generated.h"

class USceneComponent;
class UDamageComponent;
class UParticleSystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuntowerLineProjectileOnLineDestroy, FHitResult, Result);

UCLASS()
class AGuntowerLineProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FGuntowerLineProjectileOnLineDestroy OnLineDestroy;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* LeftLinePoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* RightLinePoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UParticleSystemComponent* BeamParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlatformDissolveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlatformDissolveSqueeze;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UParticleSystemComponent* HitParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBetweenLineChecks;
    
    UFUNCTION()
    void TurnOffParticles();
    
public:
    UFUNCTION(BlueprintCallable)
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
    
    AGuntowerLineProjectile();
};

