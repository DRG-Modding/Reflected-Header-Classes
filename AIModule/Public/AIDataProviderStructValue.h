#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "AIDataProviderStructValue.generated.h"

USTRUCT()
struct AIMODULE_API FAIDataProviderStructValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    FAIDataProviderStructValue();
};

