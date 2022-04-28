#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineCustomTimeStep -FallbackName=EngineCustomTimeStep
#include "FixedFrameRateCustomTimeStep.generated.h"

UCLASS(Abstract, Blueprintable)
class TIMEMANAGEMENT_API UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {
    GENERATED_BODY()
public:
    UFixedFrameRateCustomTimeStep();
};

