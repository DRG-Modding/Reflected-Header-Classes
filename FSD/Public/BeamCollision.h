#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BeamCollision.generated.h"

USTRUCT(BlueprintType)
struct FBeamCollision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBeamBlocked;
    
    UPROPERTY(EditAnywhere)
    float BeamHitDistance;
    
    UPROPERTY()
    FVector FinalTraceStart;
    
    UPROPERTY()
    FVector FinalTraceEnd;
    
    FSD_API FBeamCollision();
};

