#pragma once
#include "CoreMinimal.h"
#include "SDFBoxProperties.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFBoxComponent.generated.h"

UCLASS()
class FSDENGINE_API USDFBoxComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFBoxProperties Properties;
    
    USDFBoxComponent();
};

