#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PositionHistory.generated.h"

USTRUCT(BlueprintType)
struct FPositionHistory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Positions;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    ANIMGRAPHRUNTIME_API FPositionHistory();
};

