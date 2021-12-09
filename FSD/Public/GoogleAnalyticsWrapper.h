#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EFSDGoogleAnalyticsProperties.h"
#include "PartyAnalyticsInformation.h"
#include "DeepDiveAnalyticsInformation.h"
#include "GoogleAnalyticsWrapper.generated.h"

class AActor;
class USeasonChallenge;
class AFSDGameState;
class APlayerController;
class AFSDPlayerState;

UCLASS(BlueprintType)
class UGoogleAnalyticsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FString LastUnlockedWeapons;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FString LastKnownClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FString BoscoLoadOut;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WasCampaign;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString LastCampaignName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LastCampaignProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WasLastCampaignMission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LastCampaignSize;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString LastWeaponsLoadout;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString LastUpgradesLoadout;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString SchematicInformation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FPartyAnalyticsInformation PartyInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDeepDiveAnalyticsInformation DeepDiveInfo;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FString DiscordCommunityTrackingID;
    
    UPROPERTY(BlueprintReadOnly)
    FString CommunityGoalsTrackingID;
    
    UPROPERTY(Transient)
    bool ShouldUpdateSchematicTrackingInformation;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartMissionPartyInfo(AFSDGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUpdateSchematicInformation();
    
    UFUNCTION(BlueprintCallable)
    void ResetBoscoLoadout();
    
    UFUNCTION(BlueprintCallable)
    void RecordTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void RecordOpenScreen(const FString& Key, bool Rank);
    
    UFUNCTION(BlueprintCallable)
    void RecordMachineEventEnd(const FString& EventName, bool WasCompleted, float completionTime);
    
    UFUNCTION(BlueprintCallable)
    void RecordKickPlayer(const FString& reason, APlayerController* KickedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAUserTiming(const FString& TimingCategory, const int32 TimingValue, const FString& TimingName);
    
    UFUNCTION()
    void RecordGaTreeOfVanityClaim(int32 NodeID);
    
    UFUNCTION()
    void RecordGASeasonLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void RecordGAMissionTotalTimeHit(const FString& Key, const FString& Campaign, bool Rank, int32 totalTime, int32 Progress, int32 XP, int32 Credits);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAMissionTimeEvent(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void RecordGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, EFSDGoogleAnalyticsProperties Property);
    
    UFUNCTION(BlueprintCallable)
    void RecordGADeepDiveStageHit(const FString& Key, bool Rank, int32 stageTime, int32 timeSinceStartOfDive, int32 totalTime, int32 nitraLeft);
    
    UFUNCTION()
    void RecordGaChallengeReroll(int32 challengeIndex, USeasonChallenge* challenge);
    
    UFUNCTION(BlueprintCallable)
    void RecordExtraFailInfo(const FString& MissionName, const FString& Stage, const FString& ExtraText);
    
    UFUNCTION(BlueprintCallable)
    void RecordCustomGAEvent(const FString& EventCategory, const FString& EventAction, const FString& EventLabel, const int32 EventValue, const FString& TrackingId);
    
    UFUNCTION(BlueprintCallable)
    void RecordContinuousDamage(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void RecordBossFightEnd(const FString& BossName, bool WasBossKilled, int32 BossKills);
    
    UFUNCTION(BlueprintPure)
    FString ProcessCampaignName(UClass* Campaign);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLatejoin();
    
    UFUNCTION(BlueprintCallable)
    void PlayerDropout();
    
    UFUNCTION()
    void OnPlayerLeaveBind(AFSDPlayerState* PlayerState);
    
    UFUNCTION()
    void OnPlayerJoinBind(AFSDPlayerState* PlayerState);
    
    UFUNCTION()
    void HandleMatchStarted();
    
    UFUNCTION(BlueprintPure)
    FString GetAnalyticsFText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void EndMissionPartyInfo();
    
    UGoogleAnalyticsWrapper();
};

