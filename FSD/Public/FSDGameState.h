#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine GameState
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "FSDLocalizedChatMessage.h"
#include "ScaledEffect.h"
#include "GeneratedMissionSeed.h"
#include "ReplicatedObjectives.h"
#include "CreditsReward.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "FSDChatMessage.h"
#include "FSDGameState.generated.h"

class AFSDPlayerState;
class UObjective;
class UPlayerCharacterID;
class UDifficultyManager;
class AActor;
class UGemProximityTracker;
class APlayerCharacter;
class UDifficultySetting;
class AMiningPod;
class USpawnEffectsComponent;
class ADeepCSGWorld;
class USeasonReplicatorComponent;
class AProceduralSetup;
class UPrimitiveComponent;
class UDynamicMeshScaler;
class UFlareController;
class UAttackerManagerComponent;
class USoundMixManagerComponent;
class UGeneratedMission;
class UTeamResourcesComponent;
class UPlayerProximityTracker;
class UShowroomManager;
class AGameStats;
class APlayerState;
class UResourceData;
class UFSDEvent;
class USoundCue;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnMissionTimeUpdated, int32, Value);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerLeave, AFSDPlayerState*, PlayerState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnCountdownStarted, const FText&, countdownText);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerJoined, AFSDPlayerState*, PlayerState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTerrainGenerated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTerrainGenerationStarting);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnMatchStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnMatchEnded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnCountdownFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnGameEventCompletedEvent, FText, GameEventName);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnContinueActive);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnContinueCountdownChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnAllDwarvesDown);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnTeamMemberCampaignMissionChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameStateOnEnemyKilledEvent, const FGameplayTagContainer&, enemyTags, AActor*, killedEnemy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnPlayerCharacterRegistered, APlayerCharacter*, PlayerCharacter);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnBoscoReviveCounterChanged, int32, RevivesLeft);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnTeamDown, bool, boolValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameStateOnObjectivesCompleted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnObjectiveAdded, UObjective*, Objective);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnDifficultyChanged, UDifficultySetting*, Setting);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateSessionLeaderChanged, const APlayerState*, PlayerState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameStateOnCountdownTimeChanged, int32, SecondsLeft);

UCLASS()
class FSD_API AFSDGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMissionTimeUpdated OnMissionTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDGameStateOnTerrainGenerated OnTerrainGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTerrainGenerationStarting OnTerrainGenerationStarting;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMatchStarted OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnMatchEnded OnMatchEnded;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnGameEventCompletedEvent OnGameEventCompletedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerJoined OnPlayerJoined;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerLeave OnPlayerLeave;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnContinueActive OnContinueActive;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnContinueCountdownChanged OnContinueCountdownChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnAllDwarvesDown OnAllDwarvesDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTeamMemberCampaignMissionChanged OnTeamMemberCampaignMissionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnEnemyKilledEvent OnEnemyKilledEvent;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnPlayerCharacterRegistered OnPlayerCharacterRegistered;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AMiningPod* EscapePod;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_FSDSessionID)
    FString FSDSessionID;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnBoscoReviveCounterChanged OnBoscoReviveCounterChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTeamDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnTeamDown OnTeamDown;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnObjectivesCompleted OnObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnObjectiveAdded OnObjectiveAdded;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnDifficultyChanged OnDifficultyChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownStarted OnCountdownStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownTimeChanged OnCountdownTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateOnCountdownFinished OnCountdownFinished;
    
    UPROPERTY(BlueprintReadOnly)
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(Transient)
    int32 LastSupplyPodTimeStamp;
    
    UPROPERTY(BlueprintReadOnly)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool DelayLateJoin;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* FakeMovementBase;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PlayerSurvivalCreditBonus;
    
    UPROPERTY(EditAnywhere)
    float ResourceAmountPenalty;
    
    UPROPERTY(EditAnywhere)
    float ObjectivesCreditPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ObjectivesXPPenaltyNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ObjectivesXPPenaltyDeepDives;
    
    UPROPERTY(EditAnywhere)
    FText TextMissionCompleted;
    
    UPROPERTY(EditAnywhere)
    FText TextSecondaryObjective;
    
    UPROPERTY(EditAnywhere)
    FText TextSurvivalBonus;
    
    UPROPERTY(EditAnywhere)
    FText TextMined;
    
    UPROPERTY(EditAnywhere)
    FText TextCollected;
    
    UPROPERTY(EditAnywhere)
    FText TextBonus;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_BoscoReviveCounter)
    int32 BoscoReviveCounter;
    
    UPROPERTY(Export, VisibleAnywhere)
    USpawnEffectsComponent* SpawnEffects;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDynamicMeshScaler* MeshScaler;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFlareController* FlareController;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGemProximityTracker* GemProximityTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAttackerManagerComponent* AttackerManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDifficultyManager* DifficultyManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USoundMixManagerComponent* SoundMixManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USeasonReplicatorComponent* SeasonReplicatorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamResourcesComponent* TeamResources;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsOnSpaceRig;
    
    UPROPERTY(BlueprintReadOnly)
    bool PlayerMadeItToDropPod;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TArray<APlayerCharacter*> ActivePlayerCharacters;
    
    UPROPERTY(Replicated, Transient)
    FReplicatedObjectives Objectives;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CompletedGameEvent)
    FText CompletedGameEventName;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GeneratedMissionSeed)
    FGeneratedMissionSeed GeneratedMissionSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ObjectivesCompleted)
    bool objectivesCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_CurrentDifficultySetting)
    UDifficultySetting* CurrentDifficultySetting;
    
    UPROPERTY(EditAnywhere)
    bool RememberDifficulty;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerProximityTracker* ProximityTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UShowroomManager* ShowroomManager;
    
    UPROPERTY(Transient)
    AGameStats* GameStats;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MissionTime)
    uint32 MissionTime;
    
    UPROPERTY(Transient)
    uint32 MissionStartTime;
    
    UPROPERTY(Transient)
    uint32 MissionHaz;
    
    UPROPERTY(Replicated, Transient)
    bool PreventLatejoinCharacterDuplication;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_StartPressed)
    bool StartPressed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ContinuePressed)
    bool ContinuePressed;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ContinueCountdown)
    int32 ContinuesCountdown;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AllDwarvesDown)
    bool AllDwarvesDown;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool MissionAborted;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CountdownRemaining)
    int32 CountdownRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CountdownText)
    FText countdownText;
    
    UPROPERTY(EditAnywhere)
    bool CanCarryOverResources;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameStateSessionLeaderChanged SessionLeaderChanged;
    
    UPROPERTY(BlueprintReadOnly)
    APlayerState* CurrentPlayerSessionLeader;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCountdown(int32 Duration, const FText& countdownName);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayersHaveReachedDroppod(bool newHasPlayerReached);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneratedMissionParameters(UGeneratedMission* mission);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDifficulty(UDifficultySetting* Setting, bool updateSessionSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetCompletionData(bool NewObjectivesCompleted, int32 playersInPod);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGeneratedMissionReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void PostLocalizedGameMessage(const FText& Msg, const TArray<FText>& Arguments);
    
    UFUNCTION(BlueprintCallable)
    void PostGameMessage(const FString& Msg);
    
    UFUNCTION()
    void OnRep_StartPressed(bool oldStartPressed);
    
protected:
    UFUNCTION()
    void OnRep_ObjectivesCompleted();
    
    UFUNCTION()
    void OnRep_MissionTime();
    
    UFUNCTION()
    void OnRep_GeneratedMissionSeed();
    
    UFUNCTION()
    void OnRep_FSDSessionID();
    
    UFUNCTION()
    void OnRep_CurrentDifficultySetting();
    
    UFUNCTION()
    void OnRep_CountdownText();
    
    UFUNCTION()
    void OnRep_CountdownRemaining(int32 prevTime);
    
    UFUNCTION()
    void OnRep_ContinuePressed();
    
    UFUNCTION()
    void OnRep_ContinueCountdown();
    
    UFUNCTION()
    void OnRep_CompletedGameEvent();
    
    UFUNCTION()
    void OnRep_BoscoReviveCounter();
    
    UFUNCTION()
    void OnRep_AllDwarvesDown();
    
public:
    UFUNCTION(BlueprintPure)
    int32 MissionEndscreenSeed();
    
    UFUNCTION(BlueprintPure)
    bool IsTutorialMission() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCountingDown() const;
    
    UFUNCTION(BlueprintCallable)
    void InitObjectives();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HostDisbandedTeam();
    
    UFUNCTION(BlueprintPure)
    bool HasObjectivesReplicated() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSeamlessTravelEvent();
    
public:
    UFUNCTION(BlueprintPure)
    AFSDPlayerState* GetServerPlayerState();
    
    UFUNCTION(BlueprintPure)
    UObjective* GetSecondaryObjective() const;
    
    UFUNCTION(BlueprintPure)
    AProceduralSetup* GetProceduralSetup();
    
    UFUNCTION(BlueprintPure)
    UObjective* GetPrimaryObjective() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPreventLatejoinCharacterDuplication() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayersHaveReachedDroppod() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<TSubclassOf<APlayerCharacter>> GetPlayableCharacters();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
    
    UFUNCTION(BlueprintPure)
    TArray<UObjective*> GetObjectives() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AFSDPlayerState*> GetNetworkSortedPlayerArray();
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMissionSuccessful() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionStartTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionRewardCreditSum() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCreditsReward> GetMissionRewardCredits() const;
    
    UFUNCTION(BlueprintPure)
    bool GetMissionCompletedCreditReward(bool primary, int32& OutReward) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGlobalMissionSeed() const;
    
    UFUNCTION(BlueprintPure)
    AGameStats* GetGameStats() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UResourceData*, float> GetEndscreenResources() const;
    
    UFUNCTION(BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UResourceData*, float> GetCollectedResources() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventsFromMission() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientNewMessage(const FFSDChatMessage& Msg);
    
    UFUNCTION(BlueprintCallable)
    void Client_StartPressed();
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_NewLocalizedMessage(const FFSDLocalizedChatMessage& Msg);
    
    UFUNCTION(BlueprintPure)
    bool AllMissionEndResultsReceived() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnScaledEffectAt(FScaledEffect effect, FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpawnScaledEffectAndCueAt(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFSDGameState();
};

