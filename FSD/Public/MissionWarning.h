#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MissionWarning.generated.h"

class UMissionStat;
class UMutator;
class UTexture2D;
class URunningMissionBP;
class UObjective;
class UMissionMutator;

UCLASS(BlueprintType)
class UMissionWarning : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<URunningMissionBP> MissionBP;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionMutator*> BannedMutators;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(EditAnywhere)
    UMissionStat* MissionCompletedStat;
    
public:
    UMissionWarning();
};

