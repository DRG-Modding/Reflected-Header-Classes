#pragma once
#include "CoreMinimal.h"
#include "InputBehavior.h"
#include "MouseHoverBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMouseHoverBehavior : public UInputBehavior {
    GENERATED_BODY()
public:
    UMouseHoverBehavior();
};

