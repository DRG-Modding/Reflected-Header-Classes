#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithSpotLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    float InnerConeAngle;
    
    UPROPERTY()
    float OuterConeAngle;
    
    UDatasmithSpotLightComponentTemplate();
};

