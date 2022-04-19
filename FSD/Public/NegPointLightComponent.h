#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "NegPointLightComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UNegPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UNegPointLightComponent();
};

