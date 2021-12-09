#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "SeasonMissionResult.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
#include "SeasonLevel.h"
#include "ChallengeInfo.h"
#include "EPickaxePartLocation.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SeasonsSubsystem.generated.h"

class UObject;
class UDataAsset;
class UMissionStat;
class AFSDPlayerState;
class USeasonChallenge;
class UTextureRenderTarget2D;
class UVanityItem;
class UPlayerCharacterID;
class USeasonEventData;
class UItemSkin;
class UPickaxePart;
class AFSDPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSeasonsSubsystemOnTokensChanged, int32, NumberOfTokens, int32, Change);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnXPChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnVanityTreeReset);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonsSubsystemOnScripChallengeUpdated);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeasonsSubsystemOnClaimStatusChanged, bool, AllClaimed);

UCLASS(BlueprintType)
class USeasonsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnXPChanged OnXPChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnTokensChanged OnTokensChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnVanityTreeReset OnVanityTreeReset;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnScripChallengeUpdated OnScripChallengeUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FSeasonsSubsystemOnClaimStatusChanged OnClaimStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 ForceSeasonEventIndex;
    
    UPROPERTY(Transient)
    FSeasonMissionResult TempSeasonMissionResult;
    
    UPROPERTY(Transient)
    FSeasonMissionResult LatestMissionSeasonResult;
    
public:
    UFUNCTION(BlueprintCallable)
    FTimespan TimeToNewChallenge();
    
    UFUNCTION(BlueprintCallable)
    void RerollChallenge(int32 Index);
    
protected:
    UFUNCTION()
    void OnStatChanged(UMissionStat* Stat, float Value);
    
    UFUNCTION()
    void OnScripChallengeCompleted(UMissionStat* Stat, float Value);
    
public:
    UFUNCTION(BlueprintPure)
    void IsRewardClaimed(int32 Level, bool& isNormalClaimed, bool& isSpecialClaimed);
    
    UFUNCTION(BlueprintPure)
    bool IsNodeUnlocked(int32 TreeOfVanityNodeID);
    
    UFUNCTION(BlueprintPure)
    bool IsNodeBought(int32 TreeOfVanityNodeID);
    
    UFUNCTION()
    void InitliazeStats();
    
    UFUNCTION(BlueprintCallable)
    bool HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels);
    
    UFUNCTION(BlueprintPure)
    bool HasClaimedAllRewards();
    
    UFUNCTION(BlueprintPure)
    int32 GetSeasonXPFromMissionXP(AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    int32 GetSeasonXP();
    
    UFUNCTION(BlueprintPure)
    int32 GetSeasonNumber() const;
    
    UFUNCTION(BlueprintPure)
    FText GetSeasonName() const;
    
    UFUNCTION(BlueprintPure)
    FSeasonMissionResult GetSeasonMissionResult();
    
    UFUNCTION(BlueprintPure)
    void GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintPure)
    void GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintPure)
    void GetSeasonBought(bool& isBought);
    
    UFUNCTION(BlueprintCallable)
    void GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfTokens(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSeasonLevels();
    
    UFUNCTION(BlueprintPure)
    FSeasonLevel GetNextReward();
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelXP(int32 Level);
    
    UFUNCTION(BlueprintPure)
    FSeasonLevel GetLevelReward(int32 Level);
    
    UFUNCTION(BlueprintPure)
    void GetLevelProgress(int32 Level, float& levelPercent, int32& levelXP, int32& levelXPTotal);
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataAsset*> GetAssetReferences(int32 challengeIndex, USeasonChallenge*& outChallenge);
    
    UFUNCTION(BlueprintCallable)
    TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GenerateVanityRewardIcon(UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GenerateSkinRewardIcon(UItemSkin* Skin, UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GeneratePickaxeRewardIcon(UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void CompleteSeasonEvent_Server(USeasonEventData* inEvent);
    
    UFUNCTION(BlueprintCallable)
    bool ClaimScripChallenge();
    
    UFUNCTION(BlueprintCallable)
    bool ClaimReward(UObject* WorldContext, AFSDPlayerController* Player, int32 Level, bool isNormalReward);
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_SetSeasonMissionResult(int32 XPFromMission, int32 numberOfChallenges, USeasonEventData* Event);
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_ResetTimeToNewChallenge();
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_ResetReroll();
    
    UFUNCTION(BlueprintCallable)
    void CHEAT_AddChallenge();
    
    UFUNCTION(BlueprintPure)
    bool CanRerollChallenge();
    
    UFUNCTION(BlueprintCallable)
    bool BuyTreeNode(UObject* WorldContextObject, AFSDPlayerController* Player, int32 TreeOfVanityNodeID);
    
    USeasonsSubsystem();
};

