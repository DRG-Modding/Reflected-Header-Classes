#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine EngineCustomTimeStep
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "FixedFrameRateCustomTimeStep.generated.h"

UCLASS(Abstract)
class TIMEMANAGEMENT_API UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FFrameRate FixedFrameRate;
    
public:
    UFixedFrameRateCustomTimeStep();
};

