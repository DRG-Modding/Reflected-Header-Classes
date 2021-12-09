#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RandRange.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "WaveEntry.h"
#include "EnemyWaveManager.generated.h"

class UEnemyWaveController;
class UEnemySpawnManager;
class AFSDGameMode;
class UObject;
class APawn;

UCLASS(BlueprintType)
class UEnemyWaveManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FWaveEntry> ScriptedWaves;
    
    UPROPERTY(EditAnywhere)
    TArray<FWaveEntry> EndMissionWaves;
    
    UPROPERTY(Transient)
    TArray<UEnemyWaveController*> ActiveScriptedWaves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartDelay;
    
    UPROPERTY(EditAnywhere)
    float spawnRadiusFromSpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScriptedWavesEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NormalWavesEnabled;
    
    UPROPERTY(EditAnywhere)
    bool OverrideDifficultyScriptedWaveInternal;
    
    UPROPERTY(EditAnywhere)
    FRandRange OverrideScriptedWaveInterval;
    
    UPROPERTY(Transient)
    AFSDGameMode* GameMode;
    
    UPROPERTY(Export, Transient)
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(Transient)
    TArray<UObject*> NormalWavesBlockStack;
    
    UPROPERTY(Transient)
    TArray<UObject*> ScriptedWavesBlockStack;
    
public:
    UFUNCTION(BlueprintCallable)
    UEnemyWaveController* TriggerWave(TSubclassOf<UEnemyWaveController> waveClass);
    
    UFUNCTION(BlueprintCallable)
    void TriggerEndWave(bool cancelAllWaves);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnScriptedWave();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushDisableScriptedWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushDisableNormalWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopDisableScriptedWaves(UObject* Owner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopDisableNormalWaves(UObject* Owner);
    
protected:
    UFUNCTION()
    void OnMatchEnded();
    
    UFUNCTION()
    void OnEnemySpawned(APawn* enemy);
    
public:
    UFUNCTION(BlueprintPure)
    bool AreScriptedWavesBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool AreNormalWavesBlocked() const;
    
    UEnemyWaveManager();
};

