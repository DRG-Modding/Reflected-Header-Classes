#pragma once
#include "CoreMinimal.h"
#include "SDFSingleChildBase.h"
#include "SDFModifierProperties.h"
#include "SDFModifier.generated.h"

UCLASS()
class USDFModifier : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFModifierProperties Properties;
    
    USDFModifier();
};

