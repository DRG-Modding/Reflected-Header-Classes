#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PointLightComponent
#include "FirstPersonPointLightComponent.generated.h"

UCLASS(EditInlineNew)
class UFirstPersonPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UFirstPersonPointLightComponent();
};

