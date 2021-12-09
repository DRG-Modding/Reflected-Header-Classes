#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: Engine PlayerState
#include "RewardTexts.h"
#include "XPReward.h"
#include "CharacterProgress.h"
#include "EGameOwnerStatus.h"
#include "CreditsReward.h"
#include "EChatSenderType.h"
#include "FSDPlayerState.generated.h"

class UPlayerStatsComponent;
class UPlayerResourceComponent;
class APlayerCharacter;
class UDamageClass;
class UPlayerCharacterID;
class AActor;
class UPlayerRejoinState;
class UVanityItem;
class USaveGameStateComponent;
class AFSDPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerCharacterSpawned, APlayerCharacter*, PlayerCharacter);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnFractionLevelGenerated, float, Fraction);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerTalkingChanged, bool, IsTalking);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnSelectedCharacterChanged, TSubclassOf<APlayerCharacter>, NewCharacter);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDPlayerStateOnSupplyStatusChangedEvent, float, ammoStatus01, float, healthStatus01);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnLevelGenerationStateChanged, const FString&, NewState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFSDPlayerStateOnEnemyKilledEvent, const FGameplayTagContainer&, enemyTags, AActor*, enemy, UDamageClass*, DamageClass);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDPlayerStateOnPlayerNameChanged, const FString&, NewName);

UCLASS()
class AFSDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerCharacterSpawned OnPlayerCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerTalkingChanged OnPlayerTalkingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnSelectedCharacterChanged OnSelectedCharacterChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FractionLevelGenerated)
    float FractionLevelGenerated;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_LevelGenerationState)
    FString LevelGenerationState;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnSupplyStatusChangedEvent OnSupplyStatusChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnEnemyKilledEvent OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TArray<UVanityItem*> LatestEquipedVanity;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_SelectedCharacter)
    TSubclassOf<APlayerCharacter> SelectedCharacter;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsServer;
    
    UPROPERTY(EditAnywhere)
    bool ShouldCopyProperties;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GameOwnerStatus)
    uint8 gameOwnerStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerStatsComponent* PlayerStatsComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPlayerRejoinState* RejoinState;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USaveGameStateComponent* SaveGameStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerCharacter)
    APlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInMission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsTalking;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool HasGeneratedLevel;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool HasSelectedCharacter;
    
    UPROPERTY(Replicated, Transient)
    int32 PlayerSortId;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnPlayerNameChanged OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnFractionLevelGenerated OnFractionLevelGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FFSDPlayerStateOnLevelGenerationStateChanged OnLevelGenerationStateChanged;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPlayerResourceComponent* PlayerResources;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SupplyAmmoStatus)
    uint8 SupplyAmmoStatus;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SupplyHealthStatus)
    uint8 SupplyHealthStatus;
    
    UPROPERTY(EditAnywhere)
    FRewardTexts RewardTexts;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacterID(UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedCharacter(TSubclassOf<APlayerCharacter> NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetHasGeneratedLevel(bool hasgenerated);
    
    UFUNCTION(BlueprintCallable)
    void SetCanOnlySpectate(bool canOnlySpectate);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetSelectedCharacter(TSubclassOf<APlayerCharacter> NewCharacter);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSupplyStatus(uint8 StatusHealth, uint8 StatusAmmo);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetGameOwnerStatus(int32 NewGameOwnerStatus);
    
protected:
    UFUNCTION()
    void OnRep_SupplyHealthStatus();
    
    UFUNCTION()
    void OnRep_SupplyAmmoStatus();
    
    UFUNCTION()
    void OnRep_SelectedCharacter();
    
    UFUNCTION()
    void OnRep_PlayerCharacter();
    
    UFUNCTION()
    void OnRep_LevelGenerationState();
    
    UFUNCTION()
    void OnRep_GameOwnerStatus();
    
    UFUNCTION()
    void OnRep_FractionLevelGenerated();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLateJoinFinished();
    
    UFUNCTION(BlueprintPure)
    bool HasNormalOwnerStatus() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetXPRewardsSum();
    
    UFUNCTION(BlueprintPure)
    TArray<FXPReward> GetXPRewards();
    
    UFUNCTION(BlueprintPure)
    TArray<FXPReward> GetXPRewardDeepDive(int32 StagesCompleted);
    
    UFUNCTION(BlueprintPure)
    int32 GetUIPing();
    
    UFUNCTION(BlueprintPure)
    float GetSupplyHealthStatus() const;
    
    UFUNCTION(BlueprintPure)
    float GetSupplyAmmoStatus() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedCharacterLevel() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerCharacterID* GetSelectedCharacterID() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<APlayerCharacter> GetSelectedCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FCharacterProgress GetSelectCharacterProgress();
    
    UFUNCTION(BlueprintPure)
    UPlayerResourceComponent* GetPlayerResourceComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerRank() const;
    
    UFUNCTION(BlueprintPure)
    AFSDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasGeneratedLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGameOwnerStatus(EGameOwnerStatus Status) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 goldCollected);
    
    UFUNCTION(BlueprintPure)
    EChatSenderType GetChatSenderType() const;
    
    UFUNCTION(BlueprintPure)
    FCharacterProgress GetCharacterProgress(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCharacterLevel(UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterSelected();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDPlayerState();
};

