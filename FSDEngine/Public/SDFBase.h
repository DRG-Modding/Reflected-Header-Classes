#pragma once
#include "CoreMinimal.h"
#include "BuilderBase.h"
#include "SDFBaseProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "SDFBase.generated.h"

UCLASS(Abstract)
class USDFBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFBaseProperties BaseProperties;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    USDFBase();
};

