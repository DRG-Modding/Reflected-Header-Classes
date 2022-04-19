#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NavTestRenderingComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UNavTestRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavTestRenderingComponent();
};

