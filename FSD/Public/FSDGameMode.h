#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine GameMode
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "EPauseReason.h"
#include "FSDGameMode.generated.h"

class UFormationsManagerComponent;
class AFSDPlayerController;
class APlayerCharacter;
class AMolly;
class UKeepInsideWorld;
class UPheromoneSpawnerComponent;
class UEnemySpawnManager;
class UObjectivesManager;
class UMissionManager;
class UEncounterManager;
class UCritterManager;
class AMiningPod;
class ABosco;
class UWidget;
class UEnemyDescriptor;
class UEnemyWaveManager;
class UDifficultyManager;
class AActor;
class AFSDGameMode;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameModeOnMatchStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDGameModeOnAllControllersReady);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDGameModeOnPlayerLoggedIn, AFSDPlayerController*, Controller);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDGameModeOnDonkeyCalled, FVector, Position, APlayerCharacter*, requester);

UCLASS(MinimalAPI, NonTransient)
class AFSDGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnMatchStarted OnMatchStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnAllControllersReady OnAllControllersReady;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnPlayerLoggedIn OnPlayerLoggedIn;
    
    UPROPERTY(BlueprintAssignable)
    FFSDGameModeOnDonkeyCalled OnDonkeyCalled;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool GenerationStarted;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPheromoneSpawnerComponent* PheromoneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemySpawnManager* EnemySpawnManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObjectivesManager* ObjectivesManager;
    
    UPROPERTY(Export, VisibleAnywhere)
    UKeepInsideWorld* KeepInsideWorld;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMissionManager* MissionManager;
    
    UPROPERTY(Export, Transient)
    UEncounterManager* EncounterManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCritterManager* CritterManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AFSDPlayerController*> PlayerControllers;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFormationsManagerComponent* FormationsManager;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AMiningPod> DropPodClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AMolly> MuleClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AMiningPod> DropodEscapeClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ABosco> droneClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UWidget> CheatUI;
    
    UPROPERTY(EditAnywhere)
    float ContinueCountdown;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PreventAllLatejoin;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PreventLateJoinOnMissionStart;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpawnHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FriendlyFireGracePeriod;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> ForcedEnemyPool;
    
    UPROPERTY(EditAnywhere)
    bool UseNormalEncounters;
    
    UPROPERTY(EditAnywhere)
    bool UseStationaryEncounter;
    
    UPROPERTY(EditAnywhere)
    bool AllowSpecialEncounters;
    
    UPROPERTY(Export, Transient)
    UEnemyWaveManager* CachedWaveManager;
    
public:
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveEndLevel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveAllDwarvesDown();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Recieve_ContinueTimerEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePostSeamlessTravel();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectivesInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelGenerationComplete(int32 pass);
    
protected:
    UFUNCTION()
    void OnControllerDestroyed(AActor* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadSpaceRig();
    
    UFUNCTION(BlueprintCallable)
    void LoadMission(const FString& MapName, TSoftClassPtr<AFSDGameMode> optionalGameMode);
    
    UFUNCTION(BlueprintCallable)
    void HostAbortMission();
    
    UFUNCTION(BlueprintPure)
    UEnemyWaveManager* GetWaveManager() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPlayerStart(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AMolly> GetMuleClass() const;
    
    UFUNCTION(BlueprintPure)
    UEncounterManager* GetEncounterManager() const;
    
    UFUNCTION(BlueprintPure)
    FSoftObjectPath GetDropPodPath() const;
    
    UFUNCTION(BlueprintPure)
    FSoftObjectPath GetDropPodEscapePath() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodEscapeClass() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AMiningPod> GetDropPodClass() const;
    
    UFUNCTION(BlueprintPure)
    FSoftObjectPath GetDronePath() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ABosco> GetDroneClass() const;
    
    UFUNCTION(BlueprintPure)
    UDifficultyManager* GetDifficultyManager() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(Exec)
    void Debug_ShowPlayerSpheres();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool AllPlayersHaveSelectedCharacter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool AllPlayersHaveGeneratedLevel() const;
    
protected:
    UFUNCTION()
    void AddControllerForGracePeriod(APlayerCharacter* APlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void AboutMission();
    
    AFSDGameMode();
};

