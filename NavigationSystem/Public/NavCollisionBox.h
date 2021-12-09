#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NavCollisionBox.generated.h"

USTRUCT(BlueprintType)
struct FNavCollisionBox {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    UPROPERTY(EditAnywhere)
    FVector Extent;
    
    NAVIGATIONSYSTEM_API FNavCollisionBox();
};

