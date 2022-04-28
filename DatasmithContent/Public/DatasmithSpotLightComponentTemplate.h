#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithSpotLightComponentTemplate.generated.h"

UCLASS(Blueprintable)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InnerConeAngle;
    
    UPROPERTY(EditAnywhere)
    float OuterConeAngle;
    
    UDatasmithSpotLightComponentTemplate();
};

