#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EVeteranScaling.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EEnemySignificance.h"
#include "ECreatureSize.h"
#include "SpawnRarityItem.h"
#include "EnemyDebris.h"
//CROSS-MODULE INCLUDE: FSDEngine DeepPathFinderType
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "EnemyDescriptor.generated.h"

class UEnemyID;
class APawn;
class UEnemyDescriptor;
class UBiome;
class UMissionTemplate;
class UDebrisPositioning;
class UCaveInfluencer;
class AActor;

UCLASS(BlueprintType)
class FSD_API UEnemyDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnemyID* EnemyID;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APawn> EnemyClass;
    
    UPROPERTY(EditAnywhere)
    EVeteranScaling VeteranScaling;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> VeteranClasses;
    
    UPROPERTY(EditAnywhere)
    TMap<UBiome*, TSoftClassPtr<APawn>> BiomeEnemyClassOverrides;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APawn> EliteEnemyClass;
    
    UPROPERTY(EditAnywhere)
    TSet<UMissionTemplate*> BannedMissionTypes;
    
    UPROPERTY(EditAnywhere)
    EEnemySignificance EnemySignificance;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnOffset;
    
    UPROPERTY(EditAnywhere)
    bool UsesSpawnEffects;
    
    UPROPERTY(EditAnywhere)
    ECreatureSize CreatureSize;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    int32 PlacementCategories;
    
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* CaveInfluencer;
    
    UPROPERTY(EditAnywhere)
    TArray<FEnemyDebris> Debris;
    
    UPROPERTY(EditAnywhere)
    float InfluencerRange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> PlacementCarver;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderType PathfinderType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery PlacementRoomQuery;
    
    UPROPERTY(EditAnywhere)
    float SpawnSpread;
    
    UPROPERTY(EditAnywhere)
    int32 IdealSpawnSize;
    
    UPROPERTY(EditAnywhere)
    bool CanBeUsedForConstantPressure;
    
    UPROPERTY(EditAnywhere)
    bool CanBeUsedInEncounters;
    
    UPROPERTY(EditAnywhere)
    float DifficultyRating;
    
    UPROPERTY(EditAnywhere)
    int32 MinSpawnCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnCount;
    
    UPROPERTY(EditAnywhere)
    float Rarity;
    
    UPROPERTY(EditAnywhere)
    float SpawnAmountModifier;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredMainCampaignProgress;
    
    UPROPERTY(EditAnywhere)
    bool UsesSpawnRarityModifiers;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FSpawnRarityItem> SpawnRarityModifiers;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<APawn> GetEnemyClass(UBiome* Biome, bool isElite) const;
    
    UEnemyDescriptor();
};

