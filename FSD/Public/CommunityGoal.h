#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ECommunityGoalType.h"
#include "ECommunityGoalTier.h"
#include "CommunityGoal.generated.h"

class UCommunityGoalCategory;
class UCommnuityRewardSetup;
class UObject;

UCLASS(BlueprintType)
class UCommunityGoal : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool TierValuesAreInitialized;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Active;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MetaDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommunityGoalCategory* Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECommunityGoalType CommunityGoalType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier2;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GoalPerMemberTier3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCommnuityRewardSetup* RewardSetup;
    
    UFUNCTION(BlueprintPure)
    float TotalTierProgress(float Value, int32 Members);
    
    UFUNCTION(BlueprintPure)
    float TierValue(ECommunityGoalTier Tier, float Value, int32 Members);
    
    UFUNCTION(BlueprintPure)
    float TierProgress(ECommunityGoalTier Tier, float Value, int32 Members);
    
    UFUNCTION(BlueprintPure)
    float TierGoal(ECommunityGoalTier Tier, int32 Members);
    
    UFUNCTION(BlueprintPure)
    int32 RewardTier(float Value, int32 Members);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IncrementGoal(UObject* WorldContext, float Value) const;
    
    UFUNCTION(BlueprintPure)
    static FText GoalToText(ECommunityGoalType StatType, float Value);
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryTitle() const;
    
    UFUNCTION(BlueprintPure)
    bool AreTiersInitialized() const;
    
    UCommunityGoal();
};

