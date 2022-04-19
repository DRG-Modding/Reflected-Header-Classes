#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "FirstPersonWidgetComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UFirstPersonWidgetComponent();
};

