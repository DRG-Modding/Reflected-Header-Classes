#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MultiClickSequenceInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMultiClickSequenceInputBehavior();
};

