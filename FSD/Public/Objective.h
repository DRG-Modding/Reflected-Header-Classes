#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ObjectiveMissionIcon.h"
#include "MissionShouts.h"
#include "CreditsReward.h"
#include "Objective.generated.h"

class UOptionalObjectiveWidget;
class UObjective;
class UObjectiveWidget;
class UTexture2D;
class UBiome;
class UMissionStat;
class UResourceData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectiveOnObjectiveUpdated, UObjective*, Objective);

UCLASS(Abstract, Blueprintable)
class UObjective : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObjectiveOnObjectiveUpdated OnObjectiveUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FMissionShouts MissionShouts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompletionRewardInCredits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompletionRewardInXP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScaleObjectiveToMission;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool RequiredReturnObjectiveCompleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* ObjectiveCompletedStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsPrimaryObjective)
    int32 IsPrimaryObjective;
    
    UPROPERTY(Transient)
    float MissionScale;
    
    UPROPERTY(EditAnywhere)
    TArray<UBiome*> BannedInBiomes;
    
    UFUNCTION(BlueprintCallable)
    void SignalObjectiveUpdated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_StartTracking();
    
    UFUNCTION()
    void OnRep_IsPrimaryObjective();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsTutorialObjective() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPrimary() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsObjectiveResource(UResourceData* InResource) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinalBattle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasReplicated() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass);
    
    UFUNCTION(BlueprintPure)
    int32 GetRewardXP() const;
    
    UFUNCTION(BlueprintPure)
    FCreditsReward GetRewardCredits() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UOptionalObjectiveWidget> GetOptionalMissionWidget() const;
    
    UFUNCTION(BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintPure)
    static UTexture2D* GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    UTexture2D* GetObjectiveIcon() const;
    
    UFUNCTION(BlueprintPure)
    static FText GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintImplementableEvent)
    FText GetObjectiveDescription(float missionLength);
    
    UFUNCTION(BlueprintPure)
    static int32 GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetObjectiveAmount(float missionLength) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FObjectiveMissionIcon GetMissionIcon() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionText() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionCounterText() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetInMissionCounterIcon() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UObjective();
};

