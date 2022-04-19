#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ObjectiveUpdatedSignatureDelegate.h"
#include "ObjectiveMissionIcon.h"
#include "MissionShouts.h"
#include "CreditsReward.h"
#include "Objective.generated.h"

class UObjectiveWidget;
class UResourceData;
class UMissionStat;
class UBiome;
class UOptionalObjectiveWidget;
class UTexture2D;
class UObjective;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class FSD_API UObjective : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FObjectiveUpdatedSignature OnObjectiveUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionShouts MissionShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MissionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionRewardInCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionRewardInXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleObjectiveToMission;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool RequiredReturnObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* ObjectiveCompletedStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_IsPrimaryObjective, meta=(AllowPrivateAccess=true))
    int32 IsPrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float MissionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> BannedInBiomes;
    
public:
    UObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SignalObjectiveUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_StartTracking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPrimaryObjective();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsTutorialObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsObjectiveResource(UResourceData* InResource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMissionEnded(bool MissionSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreditsReward GetRewardCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSubclassOf<UOptionalObjectiveWidget> GetOptionalMissionWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetObjectiveIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetObjectiveDescription(float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetObjectiveAmount(float missionLength) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FObjectiveMissionIcon GetMissionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInMissionCounterText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetInMissionCounterIcon() const;
    
};

