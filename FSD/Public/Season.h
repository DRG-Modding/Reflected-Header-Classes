#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "SeasonLevel.h"
#include "UnassignedReward.h"
#include "SeasonalEventEntry.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "Season.generated.h"

class UTreeOfVanity;
class UGameDLC;
class UMissionStat;
class UReward;

UCLASS()
class FSD_API USeason : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SeasonName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SeasonNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSeasonLevel> Levels;
    
    UPROPERTY(EditAnywhere)
    FSeasonLevel RewardAfterAllLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUnassignedReward> UnassignedRewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTreeOfVanity* TreeOfVanity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameDLC* SeasonDLC;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpawnChanceByMissionLength;
    
    UPROPERTY(EditAnywhere)
    TArray<FSeasonalEventEntry> SeasonalEvents;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfScripChallenges;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionStat*> ScripChallenges;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddUnassignedReward(int32 Index, UReward* Reward);
    
    UFUNCTION(BlueprintCallable)
    void AddLevel(int32 Index, UReward* Reward, UReward* specialReward);
    
public:
    USeason();
};

