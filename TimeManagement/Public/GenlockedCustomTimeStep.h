#pragma once
#include "CoreMinimal.h"
#include "FixedFrameRateCustomTimeStep.h"
#include "GenlockedCustomTimeStep.generated.h"

UCLASS(Abstract)
class TIMEMANAGEMENT_API UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep {
    GENERATED_BODY()
public:
    UGenlockedCustomTimeStep();
};

