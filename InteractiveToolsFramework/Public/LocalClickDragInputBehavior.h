#pragma once
#include "CoreMinimal.h"
#include "ClickDragInputBehavior.h"
#include "LocalClickDragInputBehavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ULocalClickDragInputBehavior : public UClickDragInputBehavior {
    GENERATED_BODY()
public:
    ULocalClickDragInputBehavior();
};

