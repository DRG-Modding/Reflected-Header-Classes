#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "SingleClickToolBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleClickToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    USingleClickToolBuilder();
};

