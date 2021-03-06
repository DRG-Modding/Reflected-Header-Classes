#pragma once
#include "CoreMinimal.h"
#include "ECommunityGoalIndex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CommunityGoalSettings.generated.h"

class UCommunityGoal;
class UCommunityGoalFaction;

UCLASS(Blueprintable)
class UCommunityGoalSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommunityGoalFaction*> ActiveCommunityFactions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommunityGoal*> ActiveCommunityGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityGoal* DSMUGoal;
    
public:
    UCommunityGoalSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* GetGoal(ECommunityGoalIndex Goal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityGoal* FindGoal(const FString& Goal) const;
    
};

