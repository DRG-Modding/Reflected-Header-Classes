#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GameEvent.h"
#include "RockEnemiesEvent.generated.h"

class UParticleSystem;
class AProjectile;
class UEnemyGroupDescriptor;
class USkeletalMeshComponent;
class APawn;
class UHealthComponentBase;

UCLASS()
class ARockEnemiesEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> PowerUpClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PowerUpGenerationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> KillAmountPerPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> MaxEnemyCountPerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APawn*> SpawnedRockEnemies;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PowerUpsPerGeneration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 GruntPointsAward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TankPointsAward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemyGroupDescriptor* RockEnemies;
    
    UFUNCTION(BlueprintCallable)
    void StopPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void StartPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations);
    
    UFUNCTION(NetMulticast, Unreliable)
    void ShowFireEffects(int32 selectedBone);
    
public:
    UFUNCTION()
    void RockEnemySpawned(APawn* spawnedEnemy);
    
    UFUNCTION()
    void RockEnemyDied(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
    
public:
    ARockEnemiesEvent();
};

