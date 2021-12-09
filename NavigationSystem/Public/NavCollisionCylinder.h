#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NavCollisionCylinder.generated.h"

USTRUCT(BlueprintType)
struct FNavCollisionCylinder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Offset;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Height;
    
    NAVIGATIONSYSTEM_API FNavCollisionCylinder();
};

