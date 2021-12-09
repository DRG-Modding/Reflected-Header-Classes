#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MissionStatCounter.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGuid PlayerClassID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid MissionStatID;
    
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
    FSD_API FMissionStatCounter();
};

