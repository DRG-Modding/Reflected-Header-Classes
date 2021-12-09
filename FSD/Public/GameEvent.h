#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GameEvent.generated.h"

class AEventStarterButton;
class UChildActorComponent;
class UDialogDataAsset;
class ARessuplyPod;
class AProceduralSetup;
class UDebrisPositioning;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventTimeProgressChanged, float, CurrentProgress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventStageCompleteDelegate, int32, stageCompleted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameEventEventTriggeredDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameEventEventFinishedDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventProgressChangedDelegate, float, CurrentProgress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventObjectivesPerStageChanged, int32, stageCompleted);

UCLASS()
class AGameEvent : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameEventEventTriggeredDelegate EventTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventEventFinishedDelegate EventFinishedDelegate;
    
    UPROPERTY()
    FGameEventStageCompleteDelegate StageCompleteDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventProgressChangedDelegate ProgressChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventTimeProgressChanged TimeProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameEventObjectivesPerStageChanged ObjectivesPerStageChanged;
    
protected:
    UPROPERTY()
    TArray<AEventStarterButton*> StarterObjects;
    
    UPROPERTY(Transient)
    bool bGameEventSetup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText EventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnalyticsName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UChildActorComponent* StartEventObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventTriggeredShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventFinishedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EventFailedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EventTriggeredShoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EventFinishedShoutDelay;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StageProgress)
    float StageProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayUITime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ObjectivesPerStage)
    int32 objectivesPerStage;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsEventStartersActive)
    bool EventStartersActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopScriptedWavesWhileActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StopNormalWavesWhileActive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EventStarted)
    bool EventStarted;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_FailedEvent)
    bool FailedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowRemainingTimeOnHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowScoreStatusOnHUD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SkipEventStarters;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_EventParticipants)
    TArray<AActor*> EventParticipants;
    
protected:
    UFUNCTION()
    void TrySetupGameEvent();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerEvent();
    
protected:
    UFUNCTION()
    void StartShout();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StageObjectiveCompleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ARessuplyPod* SpawnEventPod(TSubclassOf<ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* SpawnEventActor(TSubclassOf<AActor> eventActorClass, const FTransform& aSpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStageProgress(float Progress);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetObjectivesPerStage(int32 NewObjectivesPerStage);
    
protected:
    UFUNCTION()
    void RemoveParticipant(AActor* participant);
    
    UFUNCTION()
    void OnStarterObjectUsed(AEventStarterButton* eventStarter);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStageProgress(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStageComplete(int32 Stage);
    
protected:
    UFUNCTION()
    void OnRep_StageProgress();
    
public:
    UFUNCTION()
    void OnRep_ObjectivesPerStage();
    
protected:
    UFUNCTION()
    void OnRep_IsEventStartersActive();
    
    UFUNCTION()
    void OnRep_FailedEvent();
    
    UFUNCTION()
    void OnRep_EventStarted();
    
    UFUNCTION()
    void OnRep_EventParticipants();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventTriggered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventFinished(bool eventSuccess);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEventBooted();
    
    UFUNCTION(BlueprintPure)
    bool IsEventActive() const;
    
    UFUNCTION(BlueprintPure)
    float GetStageProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowTimeOnHUD() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowScoreOnHUD() const;
    
    UFUNCTION(BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetObjectivesPerStage() const;
    
    UFUNCTION(BlueprintPure)
    FText GetEventName() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEventFailed() const;
    
    UFUNCTION(BlueprintPure)
    float GetDelayUITime() const;
    
protected:
    UFUNCTION()
    void EndShout();
    
public:
    UFUNCTION(BlueprintCallable)
    FTransform DebreePositionPoint(AProceduralSetup* setup, const FVector& fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float maxPathLength);
    
    UFUNCTION(BlueprintCallable)
    void BootUpEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStageProgress(float progressToAdd);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGameEvent();
};

