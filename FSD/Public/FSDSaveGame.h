#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnLockedMissionParameters.h"
//CROSS-MODULE INCLUDE: Engine SaveGame
#include "MilestoneSave.h"
#include "MissionStatSave.h"
#include "EItemCategory.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "PerkClaimsSave.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "CharacterPerksSave.h"
#include "AchievementSave.h"
#include "SchematicSave.h"
#include "FSDEventRewardsSave.h"
#include "PromotionRewardsSave.h"
#include "ESonyControllerLightMode.h"
#include "EFSDFaction.h"
#include "GameDLCSave.h"
#include "SeasonSave.h"
#include "CampaignSave.h"
#include "DeepDiveSave.h"
#include "ESonyInputSettingsBools.h"
#include "CharacterSave.h"
#include "ForgingSave.h"
#include "DrinkSave.h"
#include "ItemUpgradeSelection.h"
#include "UpgradeLoadout.h"
#include "ItemNotificationInfo.h"
#include "SkinList.h"
#include "EventRewardSave.h"
#include "ItemUINotifications.h"
#include "WatchedTutorial.h"
#include "ResourcesSave.h"
#include "ConsoleOptionsInSaveGame.h"
#include "OptionsInSaveGame.h"
#include "GDKWinOptionsInSaveGame.h"
#include "SonyInputSettings.h"
#include "ESonyControllerMotionMapping.h"
#include "ESonyInputSettingsFloats.h"
#include "FSDSaveGame.generated.h"

class APlayerCharacter;
class UResourceData;
class UItemSkin;
class UItemID;
class UFSDSaveGame;
class AActor;
class UPlayerCharacterID;
class UVanityItem;
class UFSDGameInstance;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDSaveGameOnPlayerProgressChanged, int32, Rank, int32, Stars);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDSaveGameOnResourceAmountChanged, UResourceData*, Resource, float, currentAmount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSaveGameOnCreditsChanged, int32, Credits);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDSaveGameOnTutorialsReset);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDSaveGameOnCharacterSaveChanged, TSubclassOf<APlayerCharacter>, CharacterClass, int32, Level, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDSaveGameOnCharacterRetired, TSubclassOf<APlayerCharacter>, CharacterClass, int32, RetirementCount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSaveGameOnCharacterCanRetire, TSubclassOf<APlayerCharacter>, CharacterClass);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSaveGameOnPersonalMetricsChanged, bool, AllowPersonalMetrics);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDSaveGameOnSkinUnlocked, UItemSkin*, Skin, UItemID*, ItemID);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSaveGameOnAnonymousMetricsChanged, bool, AllowAnonymousMetrics);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDSaveGameOnItemUnlocked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDSaveGameOnItemPurchased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDSaveGameOnItemUINotificationChange);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSaveGameOnForgingXPChanged, float, XP);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDSaveGameOnPerkPointsChanged, int32, PerkPoints, int32, Change);

UCLASS(BlueprintType)
class UFSDSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnCreditsChanged OnCreditsChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnCharacterSaveChanged OnCharacterSaveChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnCharacterCanRetire OnCharacterCanRetire;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnCharacterRetired OnCharacterRetired;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnPlayerProgressChanged OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnTutorialsReset OnTutorialsReset;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnPersonalMetricsChanged OnPersonalMetricsChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnAnonymousMetricsChanged OnAnonymousMetricsChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnItemUnlocked OnItemUnlocked;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnItemPurchased OnItemPurchased;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnItemUINotificationChange OnItemUINotificationChange;
    
    UPROPERTY(BlueprintReadOnly)
    int32 VersionNumber;
    
    UPROPERTY(BlueprintReadWrite)
    bool bMilestoneResetShown;
    
    UPROPERTY(BlueprintReadWrite)
    bool bYearTwoGiftClaimed;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnForgingXPChanged OnForgingXPChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnResourceAmountChanged OnResourceAmountChanged;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnSkinUnlocked OnSkinUnlocked;
    
    UPROPERTY()
    FDateTime SaveSlotTimeStamp;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FFSDSaveGameOnPerkPointsChanged OnPerkPointsChanged;
    
    UPROPERTY()
    FMissionStatSave MissionStatsSave;
    
    UPROPERTY()
    FMilestoneSave Milestones;
    
    UPROPERTY()
    FPerkClaimsSave OwnedPerks;
    
    UPROPERTY()
    FCharacterPerksSave EquippedPerks;
    
    UPROPERTY()
    FAchievementSave AchievementSave;
    
    UPROPERTY()
    TArray<FCharacterPerksSave> EquippedPerkLoadouts;
    
    UPROPERTY()
    FSchematicSave SchematicSave;
    
    UPROPERTY()
    FPromotionRewardsSave PromotionRewardsSave;
    
    UPROPERTY()
    FFSDEventRewardsSave FSDEventRewardsSave;
    
    UPROPERTY()
    FSeasonSave SeasonSave;
    
    UPROPERTY()
    FGameDLCSave GameDLCSave;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 SaveCreatedInPatch;
    
    UPROPERTY()
    FString AnonymousID;
    
    UPROPERTY()
    int32 PerkPoints;
    
    UPROPERTY()
    bool HasRecievedDiscordReward;
    
    UPROPERTY()
    EFSDFaction Faction;
    
    UPROPERTY()
    TArray<FGuid> UnLockedMissions;
    
    UPROPERTY()
    TMap<FGuid, FUnLockedMissionParameters> UnLockedMissionParameters;
    
    UPROPERTY()
    TArray<FGuid> UnLockedPlanetZones;
    
    UPROPERTY()
    FCampaignSave CampaignSave;
    
    UPROPERTY()
    FDeepDiveSave DeepDiveSave;
    
    UPROPERTY()
    TArray<FCharacterSave> CharacterSaves;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Credits;
    
    UPROPERTY()
    int32 LastBoughtDailyDealSeed;
    
    UPROPERTY()
    FForgingSave Forging;
    
    UPROPERTY()
    FDrinkSave Drinks;
    
    UPROPERTY()
    TMap<FGuid, FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY()
    TArray<FUpgradeLoadout> ItemUpgradeLoadouts;
    
    UPROPERTY()
    TArray<FGuid> PurchasedItemUpgrades;
    
    UPROPERTY()
    TArray<FGuid> UnLockedItemUpgrades;
    
    UPROPERTY()
    TArray<FGuid> UnlockedItems;
    
    UPROPERTY()
    TArray<FGuid> OwnedItems;
    
    UPROPERTY()
    TMap<FGuid, int32> EnemiesKilled;
    
    UPROPERTY()
    TMap<FGuid, FItemNotificationInfo> ItemsWithNotification;
    
    UPROPERTY()
    TMap<FGuid, FSkinList> UnlockedItemSkins;
    
    UPROPERTY()
    TSet<FGuid> UnlockedPickaxeParts;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UVanityItem*> UnLockedVanityItems;
    
    UPROPERTY()
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY()
    TArray<FGuid> HiddenUICategories;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastCollectedCommunityRewardPeriodID;
    
    UPROPERTY()
    TSet<FGuid> MinersManualKnownObjects;
    
    UPROPERTY()
    FEventRewardSave EventRewardSave;
    
    UPROPERTY()
    FItemUINotifications ItemUINotifications;
    
    UPROPERTY()
    FString RejoinSessionId;
    
    UPROPERTY()
    bool FirstRejoinAttempt;
    
    UPROPERTY()
    bool HaveSkinsBeenReset;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasOpenedDeepDiveTerminal;
    
    UPROPERTY()
    FResourcesSave Resources;
    
    UPROPERTY(BlueprintReadOnly)
    bool FirstSession;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FWatchedTutorial> WatchedTutorials;
    
    UPROPERTY()
    FConsoleOptionsInSaveGame ConsoleOptions;
    
    UPROPERTY()
    FGDKWinOptionsInSaveGame WinGDKOptions;
    
    UPROPERTY()
    FOptionsInSaveGame WindowsOptions;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasCompletedTutorial;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasPlayedTutorial;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowHowToRestartTutorialPrompt;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasPlayedIntroMessage;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasSentSteamInfo;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasClaimedSteamGroupLoot;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsBoscoAllowed;
    
    UPROPERTY()
    bool HasRefundedUpgradeCostDifference;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasJoinedXboxClub;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasSeenAnalyticsPopUp;
    
    UPROPERTY(BlueprintReadWrite)
    bool AllowAnalyticsTracking;
    
    UPROPERTY(BlueprintReadWrite)
    bool AllowPersonalAnalyticsTracking;
    
    UPROPERTY()
    bool IsModded;
    
    UPROPERTY()
    int32 Index;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalPlayTimeSeconds;
    
    UPROPERTY()
    TMap<FGuid, int32> SelectedLoadout;
    
    UPROPERTY(Transient)
    uint32 userIdx;
    
    UPROPERTY(Transient)
    uint32 CurrLoadoutIdx;
    
    UPROPERTY()
    uint32 SaveToDiskCounter;
    
    UPROPERTY()
    uint32 BackupSaveIndex;
    
    UPROPERTY()
    uint32 ExternalBackupSaveIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfGamesPlayed;
    
    UPROPERTY(BlueprintReadWrite)
    UPlayerCharacterID* LastPlayedCharacter;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowInfoScreen;
    
    UPROPERTY(BlueprintReadWrite)
    FString LastShownVersion;
    
    UPROPERTY()
    FSonyInputSettings SonyInputSettings;
    
    UPROPERTY(Transient)
    UFSDGameInstance* FSDGameInstance;
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySellResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeductResources(const TMap<UResourceData*, int32>& NewResources);
    
    UFUNCTION(BlueprintCallable)
    bool TryDeductCredits(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price);
    
    UFUNCTION(BlueprintPure)
    bool ShouldDisplayFirstSchematicMessage() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetPersonalAnalytics(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetIsModded(bool modded);
    
    UFUNCTION(BlueprintCallable)
    void SetIndexAndName(int32 NewIndex, const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetHasSentSteamInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetHasJoinedXboxClub();
    
    UFUNCTION(BlueprintCallable)
    void SetHasClaimSteamGroupLoot();
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(EFSDFaction newFaction, bool Reasign);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item);
    
    UFUNCTION(BlueprintCallable)
    void SetDiscordReward(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber);
    
    UFUNCTION(BlueprintCallable)
    void SetBoscoAllowed(bool aIsBoscoAllowed);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnonymousAnalytics(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SaveToDisk();
    
    UFUNCTION(BlueprintCallable)
    static bool SaveSlotToDisk(UFSDSaveGame* SaveSlot, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    int32 RetireCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void ResetTutorials();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyTouchSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyMotionSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSonyDualSenseSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetRejoinSessionId();
    
    UFUNCTION(BlueprintCallable)
    void RejoinAttempted();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    bool RecievedDiscordReward();
    
    UFUNCTION(BlueprintCallable)
    FString PromotedClassesString();
    
    UFUNCTION(BlueprintCallable)
    void MarkRetirementRewardScreenSeen(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void MarkFirstSchematicMessageSeen();
    
    UFUNCTION(BlueprintPure)
    bool IsObsolete() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInMinersManual(FGuid ObjectID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstRejoinAttempt();
    
    UFUNCTION(BlueprintPure)
    bool HasSeenRetirementRewardScreen() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterRetired(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterCompletedRetirementCampaign(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable)
    static bool HasBackupWithMoreProgress(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyCharacterRetired() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalGamesPlayed();
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetTotalCharacterXP() const;
    
public:
    UFUNCTION(BlueprintPure)
    ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping() const;
    
    UFUNCTION(BlueprintPure)
    ESonyControllerLightMode GetSonyInputSettingLightMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting) const;
    
    UFUNCTION(BlueprintPure)
    bool GetSonyInputSettingBool(ESonyInputSettingsBools Setting) const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetSlotTimeStamp() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSlotLoadedFrom() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedLoadoutIndex(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    static FString GetSaveSlotName(int32 NewUserIdx);
    
    UFUNCTION(BlueprintPure)
    int32 GetResourceSellingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetResourceBuyingPrice(UResourceData* Resource, int32 Amount) const;
    
    UFUNCTION(BlueprintPure)
    float GetResourceAmount(const UResourceData* Resource) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredXPForLevel(int32 Level) const;
    
    UFUNCTION(BlueprintPure)
    FString GetRejoinSessionId();
    
    UFUNCTION(BlueprintPure)
    int32 GetPurchasableItemCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerRetirementRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPerkPoints() const;
    
    UFUNCTION(BlueprintPure)
    FString GetName();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxSaveSlots();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves);
    
    UFUNCTION(BlueprintPure)
    bool GetIsModded();
    
    UFUNCTION(BlueprintPure)
    int32 GetIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasSentSteamInfo();
    
    UFUNCTION(BlueprintCallable)
    bool GetHasClaimedSteamGroupLoot();
    
    UFUNCTION(BlueprintPure)
    EFSDFaction GetFaction();
    
    UFUNCTION(BlueprintPure)
    UItemID* GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCredits() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetClassXP(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetClassLevel(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCharacterRetirementCount(const FGuid& PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoscoAllowed() const;
    
    UFUNCTION(BlueprintPure)
    static int32 GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFSDSaveGame*> GetAllSavesFromDisk(UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetIsModded(bool modded);
    
    UFUNCTION(BlueprintCallable)
    static void FixNamingOfMainSave(UFSDSaveGame* mainsave);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFromDisk(UFSDGameInstance* GameInstance, const FString& slotName, int32 NewUserIdx);
    
    UFUNCTION(BlueprintCallable)
    bool DeductPerkPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void CheckPromotionAchievementProgress(UObject* WorldContext, bool IsRetroactive);
    
    UFUNCTION(BlueprintPure)
    bool CanAfford(const TMap<UResourceData*, int32>& NewResources) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPerkPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddGamePlayed();
    
    UFUNCTION(BlueprintCallable)
    int32 AddCredits(int32 Amount);
    
    UFSDSaveGame();
};

