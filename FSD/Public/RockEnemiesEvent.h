#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RockEnemiesEvent.generated.h"

class UEnemyGroupDescriptor;
class AProjectile;
class USkeletalMeshComponent;
class APawn;
class UParticleSystem;
class UHealthComponentBase;

UCLASS(Blueprintable)
class ARockEnemiesEvent : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> PowerUpClass;
    
    UPROPERTY(EditAnywhere)
    float PowerUpGenerationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> KillAmountPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxEnemyCountPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> SpawnedRockEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerUpsPerGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GruntPointsAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TankPointsAward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyGroupDescriptor* RockEnemies;
    
public:
    ARockEnemiesEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void StopPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void StartPowerupGeneration();
    
    UFUNCTION(BlueprintCallable)
    void SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void ShowFireEffects(int32 selectedBone);
    
public:
    UFUNCTION(BlueprintCallable)
    void RockEnemySpawned(APawn* spawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void RockEnemyDied(UHealthComponentBase* Health);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
    
};

