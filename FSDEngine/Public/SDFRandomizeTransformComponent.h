#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFRandomizeTransformProperties.h"
#include "SDFRandomizeTransformComponent.generated.h"

UCLASS(BlueprintType)
class USDFRandomizeTransformComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDFRandomizeTransformProperties Properties;
    
    USDFRandomizeTransformComponent();
};

