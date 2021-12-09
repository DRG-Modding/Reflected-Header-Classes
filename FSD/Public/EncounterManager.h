#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EncounterManagerItem.h"
#include "EncounterManager.generated.h"

class UEnemyDescriptor;
class UCritterDescriptor;
class AProceduralSetup;
class UEnemySpawnManager;

UCLASS(BlueprintType)
class FSD_API UEncounterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpawnDistanceFromRoomBounds;
    
    UPROPERTY(Transient)
    TArray<FEncounterManagerItem> Encounters;
    
    UPROPERTY(Transient)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(Export, Transient)
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> EnemyPool;
    
    UPROPERTY(Transient)
    TArray<UEnemyDescriptor*> EncounterPool;
    
    UPROPERTY(Transient)
    TArray<UCritterDescriptor*> CritterPool;
    
public:
    UFUNCTION(Exec)
    void ShowSpawnLocations();
    
    UFUNCTION(BlueprintPure)
    TArray<UEnemyDescriptor*> GetEnemyPool() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UEnemyDescriptor*> GetEncounterPool() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCritterDescriptor*> GetCritterPool() const;
    
    UEncounterManager();
};

