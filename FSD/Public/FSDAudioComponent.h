#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "FSDAudioComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFSDAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UFSDAudioComponent();
};

