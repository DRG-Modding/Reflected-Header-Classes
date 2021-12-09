#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RandInterval.h"
#include "IRandRange.h"
#include "RandRange.h"
#include "EncounterRareCritterItem.h"
#include "EncounterSpecialItem.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "EliteEnemyEntry.h"
#include "EncounterSettings.generated.h"

class UEnemyDescriptor;
class UCritterDescriptor;
class UMutator;

UCLASS()
class UEncounterSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIRandRange StationaryEnemyCount;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> CommonEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> SpecialEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> DisruptiveEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> StationaryEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UCritterDescriptor*> CommonCritters;
    
    UPROPERTY(EditAnywhere)
    TArray<FEncounterRareCritterItem> RareCritters;
    
    UPROPERTY(EditAnywhere)
    TArray<FEncounterSpecialItem> SpecialEncounters;
    
    UPROPERTY(EditAnywhere)
    float RequiredDifficultyPerDiversity;
    
    UPROPERTY(EditAnywhere)
    float GlobalDifficultyScale;
    
    UPROPERTY(EditAnywhere)
    FRandInterval EncounterDifficulty;
    
    UPROPERTY(EditAnywhere)
    FRandInterval StationaryDifficulty;
    
    UPROPERTY(EditAnywhere)
    FRandRange CritterSpawnDifficulty;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SmallRoomTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag MediumRoomTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag LargeRoomTag;
    
    UPROPERTY(EditAnywhere)
    float SmallRoomDifficultyModifier;
    
    UPROPERTY(EditAnywhere)
    float MediumRoomDifficultyModifier;
    
    UPROPERTY(EditAnywhere)
    float LargeRoomDifficultyModifier;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies;
    
    UPROPERTY(EditAnywhere)
    FRandInterval HeroEnemySpawn;
    
    UPROPERTY(EditAnywhere)
    UMutator* TestMutator;
    
    UEncounterSettings();
};

