#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PathObstacle.generated.h"

USTRUCT(BlueprintType)
struct FPathObstacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite)
    float Radius;
    
    FSD_API FPathObstacle();
};

