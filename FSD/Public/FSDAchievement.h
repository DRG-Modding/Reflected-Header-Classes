#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "EFSDAchievementType.h"
#include "FSDAchievement.generated.h"

class UFSDAchievement;
class UObject;
class AFSDPlayerController;

UCLASS()
class UFSDAchievement : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString SteamAPIAchievementName;
    
    UPROPERTY(EditAnywhere)
    FString SteamAPIStatName;
    
    UPROPERTY(EditAnywhere)
    FString XboxAchievementID;
    
    UPROPERTY(EditAnywhere)
    float AchievementTargetValue;
    
    UPROPERTY(EditAnywhere)
    EFSDAchievementType AchievementType;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAchievementProgressForEntireServer(float Progress, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementProgress(float Progress, const AFSDPlayerController* Player, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStatForAchievement(UFSDAchievement* AchievementToReset, const AFSDPlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    float GetAchievementTargetValue();
    
    UFSDAchievement();
};

