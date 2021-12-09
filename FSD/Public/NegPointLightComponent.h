#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PointLightComponent
#include "NegPointLightComponent.generated.h"

UCLASS(EditInlineNew)
class UNegPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UNegPointLightComponent();
};

