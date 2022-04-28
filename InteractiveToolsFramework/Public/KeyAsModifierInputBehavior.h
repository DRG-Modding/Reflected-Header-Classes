#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "KeyAsModifierInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UKeyAsModifierInputBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UKeyAsModifierInputBehavior();
};

