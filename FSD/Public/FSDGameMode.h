#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AllReadySignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "MatchStartedSignatureDelegate.h"
#include "PlayerLoggedInDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "CallDonkeyDelegate.h"
#include "EPauseReason.h"
#include "FSDGameMode.generated.h"

class AFSDPlayerController;
class AFSDGameMode;
class UPheromoneSpawnerComponent;
class UObjectivesManager;
class UEnemySpawnManager;
class UKeepInsideWorld;
class UMissionManager;
class UEncounterManager;
class UCritterManager;
class UFormationsManagerComponent;
class AMiningPod;
class AMolly;
class ABosco;
class UWidget;
class UEnemyDescriptor;
class UEnemyWaveManager;
class AActor;
class UDifficultyManager;
class APlayerController;
class APlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class FSD_API AFSDGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchStartedSignature OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllReadySignature OnAllControllersReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLoggedIn OnPlayerLoggedIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCallDonkey OnDonkeyCalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GenerationStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPheromoneSpawnerComponent* PheromoneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* EnemySpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObjectivesManager* ObjectivesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeepInsideWorld* KeepInsideWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMissionManager* MissionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEncounterManager* EncounterManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCritterManager* CritterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFSDPlayerController*> PlayerControllers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFormationsManagerComponent* FormationsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMiningPod> DropPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMolly> MuleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMiningPod> DropodEscapeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABosco> droneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidget> CheatUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinueCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PreventAllLatejoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PreventLateJoinOnMissionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyDescriptor*> ForcedEnemyPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseNormalEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStationaryEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSpecialEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEnemyWaveManager* CachedWaveManager;
    
public:
    AFSDGameMode();
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMissionCriticalItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SignalEndLevelToClients();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDeaths();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveEndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveAllDwarvesDown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_ContinueTimerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelGenerationComplete(int32 pass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerDestroyed(AActor* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadSpaceRig();
    
    UFUNCTION(BlueprintCallable)
    void LoadMission(const FString& MapName, TSoftClassPtr<AFSDGameMode> optionalGameMode);
    
    UFUNCTION(BlueprintCallable)
    void HostAbortMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnemyWaveManager* GetWaveManager() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMolly> GetMuleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEncounterManager* GetEncounterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDropPodPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDropPodEscapePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodEscapeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetDronePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABosco> GetDroneClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool FSDSetPause(APlayerController* PC, EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    bool FSDKickPlayer(APlayerController* KickedPlayer, const FText& KickReason);
    
    UFUNCTION(BlueprintCallable)
    bool FSDClearPause(EPauseReason pauseReason);
    
    UFUNCTION(BlueprintCallable)
    void EndLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DonkeyButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNonLocalPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_ShowPlayerSpheres();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AllPlayersHaveSelectedCharacter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AllPlayersHaveGeneratedLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddControllerForGracePeriod(APlayerCharacter* APlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void AboutMission();
    
};

