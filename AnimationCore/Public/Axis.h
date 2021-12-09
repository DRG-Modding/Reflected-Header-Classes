#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "Axis.generated.h"

USTRUCT()
struct FAxis {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Axis;
    
    UPROPERTY(EditAnywhere)
    bool bInLocalSpace;
    
    ANIMATIONCORE_API FAxis();
};

