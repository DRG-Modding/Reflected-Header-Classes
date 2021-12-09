#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "RecoilImpulse.generated.h"

USTRUCT()
struct FRecoilImpulse {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Rotation;
    
    UPROPERTY()
    FVector2D Impulse;
    
    FSD_API FRecoilImpulse();
};

