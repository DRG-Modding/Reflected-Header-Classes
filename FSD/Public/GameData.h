#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GDStats.h"
#include "GDDamageClasses.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GDItemCategoryIDs.h"
#include "GVisibilityGroups.h"
#include "GDPerks.h"
#include "GDGameStatsTracking.h"
#include "GDAudio.h"
#include "GDMissionStats.h"
#include "GDMilestones.h"
#include "GDDifficulty.h"
#include "GDResources.h"
#include "GDTerrainTypes.h"
#include "GDCharacterRetirement.h"
#include "GDPlayerAndCharacterProgression.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "RetirementCostItem.h"
#include "GameData.generated.h"

class UPlayerCharacterID;
class AActor;
class UNiagaraParameterCollection;
class UKeyBindingSettings;
class UForginSettings;
class UDLCBase;
class UDataTable;
class UPickaxeSettings;
class UEncounterSettings;
class UGameActivitySettings;
class UAfflictionSettings;
class UPromotionRewardsSettings;
class UFSDEventCollection;
class UDanceSettings;
class UShowroomSettings;
class UDamageSettings;
class UGameAnimationSettings;
class UEnemySettings;
class UCommunityGoalSettings;
class UPlanetZoneSetup;
class UTreasureSettings;
class UBiome;
class UTexture2D;
class UItemSettings;
class UDrinkSettings;
class UMissionTemplate;
class UUpgradeSettings;
class USpawnSettings;
class UDeepDiveSettings;
class USpecialEventSettings;
class UDifficultySetting;
class USchematicSettings;
class UItemSkinSettings;
class UProceduralSettings;
class UFSDTagSettings;
class UCharacterSettings;
class UVictoryPoseSettings;
class UFSDTutorialSettings;
class UEffectSettings;
class ULegacySettings;
class UDailyDealSettings;
class UMinersManual;
class UStatusEffectSettings;
class UAchievementList;
class UGlobalMissionSetup;
class UCampaignManager;
class UInventoryList;
class USeasonSettings;
class AProceduralSetup;
class UItemRefundList;
class USubsystem;
class UAsyncManager;
class APlayerCharacter;
class UPerkAsset;
class UHUDVisibilityGroup;
class UMissionStat;

UCLASS(BlueprintType)
class FSD_API UGameData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> BarrelClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGVisibilityGroups VisibilityGroups;
    
    UPROPERTY(EditAnywhere)
    UNiagaraParameterCollection* NiagaraParameterCollection;
    
    UPROPERTY(EditAnywhere)
    UDLCBase* AlwaysLockedDLC;
    
    UPROPERTY(EditAnywhere)
    UPromotionRewardsSettings* PromotionRewardsSettings;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFSDEventCollection* FsdEventsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameActivitySettings* GameActivitySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDanceSettings* DanceSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameAnimationSettings* AnimationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnemySettings* EnemySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageSettings* DamageSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlanetZoneSetup* ZoneSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTreasureSettings* TreasureSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDrinkSettings* DrinkSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUpgradeSettings* UpgradeSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USpawnSettings* SpawnSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UKeyBindingSettings* KeyBindingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDeepDiveSettings* DeepDiveSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEncounterSettings* EncounterSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForginSettings* ForgingSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicSettings* SchematicSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemSkinSettings* SkinSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USpecialEventSettings* SpecialEventSettings;
    
    UPROPERTY(EditAnywhere)
    UProceduralSettings* ProceduralSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPickaxeSettings* PickaxeSettings;
    
    UPROPERTY(EditAnywhere)
    UFSDTagSettings* TagSettings;
    
    UPROPERTY(EditAnywhere)
    UItemSettings* ItemSettings;
    
    UPROPERTY(EditAnywhere)
    UShowroomSettings* ShowroomSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVictoryPoseSettings* VictoryPoseSettings;
    
    UPROPERTY(EditAnywhere)
    UFSDTutorialSettings* TutorialSettings;
    
    UPROPERTY(EditAnywhere)
    ULegacySettings* LegacySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEffectSettings* EffectSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAfflictionSettings* AfflictionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommunityGoalSettings* CommunityGoalSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDailyDealSettings* DailyDealSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDMilestones Milestones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDPerks perks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDItemCategoryIDs ItemCategoryIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTexture2D*> LoadoutIconList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMinersManual* MinersManual;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDDamageClasses DamageClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDStats Stats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDResources Resources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDTerrainTypes TerrainTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDGameStatsTracking GameStatsTracking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDAudio Audio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGDDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStatusEffectSettings* StatusEffects;
    
    UPROPERTY(EditAnywhere)
    FGDCharacterRetirement Retirement;
    
    UPROPERTY(VisibleAnywhere)
    FGDPlayerAndCharacterProgression PlayerAndCharacterProgression;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCharacterSettings* CharacterSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAchievementList* Achievements;
    
    UPROPERTY(EditAnywhere)
    UDataTable* SchematicGATable;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionTemplate*> TestMissions;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBiome> TestBiome;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGlobalMissionSetup* MissionSetup;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UCampaignManager> CampaignManagerClass;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists;
    
    UPROPERTY(EditAnywhere)
    UBiome* DefaultBiome;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> GenericBiomeQuotes;
    
    UPROPERTY(EditAnywhere)
    UMissionTemplate* DefaultMission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USeasonSettings* SeasonSettings;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AProceduralSetup> CaveGeneratorPLSClass;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemRefundList*> ItemRefunds;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<USubsystem>> BlueprintSubSystems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* DefaultCharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* DefaultEditorCharacterID;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag XBoxExcludeRoomTag;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnloadPreloadedAssets();
    
    UFUNCTION(BlueprintCallable)
    void LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager);
    
    UFUNCTION(BlueprintPure)
    bool IsPerkTierUnLocked(UObject* WorldContext, int32 Tier) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCheatConsolesEnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredPerkClaimsForTier(int32 Tier) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPlayerCharacterID*> GetRankedHeroIDs() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<APlayerCharacter>> GetRankedHeroClasses() const;
    
    UFUNCTION(BlueprintPure)
    FText GetPlayerRankName(int32 Rank) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<APlayerCharacter> GetPlayerClassFromID(UPlayerCharacterID* ID) const;
    
    UFUNCTION(BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
    UFUNCTION(BlueprintPure)
    void GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount) const;
    
    UFUNCTION(BlueprintPure)
    UInventoryList* GetInventoryList(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHighestPerkTier() const;
    
    UFUNCTION(BlueprintPure)
    UDifficultySetting* GetDifficultySetting(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDifficultyIndex(UDifficultySetting* NewDifficulty) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<APlayerCharacter> GetDefaultEditorCharacter() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<APlayerCharacter> GetDefaultCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FRetirementCostItem GetCharacterRetirementCost(UObject* WorldContext, UPlayerCharacterID* ID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPerkAsset*> GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPerkAsset*> GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPerkAsset*> GetAvailablePerks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmountOfPurchasedPerks(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UHUDVisibilityGroup*> GetAllVisibilityGroups() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMissionStat*> GetAllMissionStats() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMissionStat*> GetAllInfirmaryStats() const;
    
    UFUNCTION(BlueprintPure)
    int32 CalculateClaimablePerkPoints(UObject* WorldContext) const;
    
    UGameData();
};

