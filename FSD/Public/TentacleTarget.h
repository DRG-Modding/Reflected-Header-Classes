#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "TentacleTarget.generated.h"

USTRUCT(BlueprintType)
struct FTentacleTarget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector_NetQuantize Location;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    float MovementDuration;
    
    UPROPERTY(Transient)
    bool UseSpring;
    
    FSD_API FTentacleTarget();
};

