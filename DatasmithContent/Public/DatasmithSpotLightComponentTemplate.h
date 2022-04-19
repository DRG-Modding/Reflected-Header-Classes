#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithSpotLightComponentTemplate.generated.h"

UCLASS()
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float OuterConeAngle;
    
    UDatasmithSpotLightComponentTemplate();
};

