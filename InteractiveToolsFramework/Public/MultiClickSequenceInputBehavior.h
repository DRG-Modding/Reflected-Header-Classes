#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MultiClickSequenceInputBehavior.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMultiClickSequenceInputBehavior();
};

