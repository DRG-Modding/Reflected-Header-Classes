#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "GenerationComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UGenerationComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UGenerationComponent();
};

