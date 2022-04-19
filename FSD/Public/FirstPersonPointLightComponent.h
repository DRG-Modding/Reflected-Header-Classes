#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "FirstPersonPointLightComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UFirstPersonPointLightComponent();
};

