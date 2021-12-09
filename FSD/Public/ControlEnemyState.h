#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ControlEnemyState.generated.h"

class ADeepPathfinderCharacter;

USTRUCT(BlueprintType)
struct FControlEnemyState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ADeepPathfinderCharacter* ControlledEnemy;
    
    UPROPERTY(Transient)
    FTransform InitialTargetTransform;
    
    UPROPERTY(Transient)
    float InitialTargetBlendTotalTime;
    
    UPROPERTY(Transient)
    FVector InitialCharacterVelocity;
    
    UPROPERTY(Transient)
    FVector InitialEnemyVelocity;
    
    FSD_API FControlEnemyState();
};

