#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "VictoryPoseSave.generated.h"

USTRUCT(BlueprintType)
struct FVictoryPoseSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid EquippedVictoryPose;
    
    UPROPERTY()
    TArray<FGuid> UnlockedVictoryPoses;
    
protected:
    UPROPERTY()
    TArray<FGuid> EquippedVictoryPoses;
    
public:
    FSD_API FVictoryPoseSave();
};

