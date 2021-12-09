#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SaveGameStatePerkItem.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "CharacterProgress.h"
#include "PlayerProgress.h"
#include "ItemLoadout.h"
#include "ActiveCampaingMission.h"
#include "ItemUpgradeSelection.h"
#include "SaveGameStateComponent.generated.h"

class UVictoryPose;
class UPlayerCharacterID;
class AActor;
class UItemUpgrade;
class AFSDPlayerState;
class UGeneratedMission;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnCreditsChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnPlayerProgressChanged, AFSDPlayerState*, PlayerState, FPlayerProgress, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnItemUpgradeEquipped, TSubclassOf<AActor>, itemClass, UItemUpgrade*, Upgrade);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnEquippedPerksChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveGameStateComponentOnLoadoutChangedEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveGameStateComponentOnItemUpgradeCrafted, UItemUpgrade*, Upgrade);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveGameStateComponentOnItemUpgradeUnequipped, TSubclassOf<AActor>, itemClass, UItemUpgrade*, Upgrade);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveGameStateComponentOnCharacterStatsChanged, AFSDPlayerState*, PlayerState);

UCLASS(BlueprintType)
class USaveGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnEquippedPerksChanged OnEquippedPerksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeCrafted OnItemUpgradeCrafted;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeEquipped OnItemUpgradeEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnItemUpgradeUnequipped OnItemUpgradeUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnPlayerProgressChanged OnPlayerProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnLoadoutChangedEvent OnLoadoutChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnCharacterStatsChanged OnCharacterStatsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveGameStateComponentOnCreditsChanged OnCreditsChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Credits)
    int32 Credits;
    
    UPROPERTY(Transient)
    TArray<FSaveGameStatePerkItem> EquippedPerks;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    UVictoryPose* VictoryPose;
    
    UPROPERTY(Transient)
    FItemLoadout EquippedLoadout;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveCampaignMission)
    FActiveCampaingMission ActiveCampaignMission;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ItemUpgradeSelections)
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerProgress)
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CharacterStats)
    TArray<FCharacterProgress> CharacterStats;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCampaign();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetVictoryPose(UVictoryPose* pose);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetPlayerProgress(const FPlayerProgress& Progress);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetLoadout(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetEquippedPerks(const TArray<FSaveGameStatePerkItem>& perks);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCredits(const int32 Amount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCharacterStats(const TArray<FCharacterProgress>& Stats);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshLoadoutFromSave(UPlayerCharacterID* characterID);
    
protected:
    UFUNCTION()
    void OnRep_PlayerProgress();
    
    UFUNCTION()
    void OnRep_ItemUpgradeSelections();
    
    UFUNCTION()
    void OnRep_Credits();
    
    UFUNCTION()
    void OnRep_CharacterStats();
    
    UFUNCTION()
    void OnRep_ActiveCampaignMission();
    
public:
    UFUNCTION(BlueprintCallable)
    FCharacterProgress GetCharacterStat(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    UGeneratedMission* GetActiveCampaignMission() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USaveGameStateComponent();
};

