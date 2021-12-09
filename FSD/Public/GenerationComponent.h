#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "GenerationComponent.generated.h"

UCLASS(Abstract)
class UGenerationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGenerationComponent();
};

