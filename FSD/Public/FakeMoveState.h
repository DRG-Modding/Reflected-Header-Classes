#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FakeMoveState.generated.h"

USTRUCT(BlueprintType)
struct FFakeMoveState {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector Pos1;
    
    UPROPERTY(Transient)
    FVector Pos2;
    
    UPROPERTY(Transient)
    FVector Vel;
    
    FSD_API FFakeMoveState();
};

