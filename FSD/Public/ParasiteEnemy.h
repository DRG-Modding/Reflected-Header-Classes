#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ParasiteEnemy.generated.h"

class UParticleSystem;
class USceneComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UOutlineComponent;
class USoundBase;
class UHealthComponentBase;

UCLASS()
class AParasiteEnemy : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Tentacles1;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Tentacles2;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* deathSound;
    
    UFUNCTION()
    void OnSelfDeath(UHealthComponentBase* aHealthComponent);
    
public:
    AParasiteEnemy();
};

