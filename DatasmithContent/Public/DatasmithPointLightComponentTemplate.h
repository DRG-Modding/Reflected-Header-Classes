#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "DatasmithPointLightComponentTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ELightUnits IntensityUnits;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SourceLength;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AttenuationRadius;
    
    UDatasmithPointLightComponentTemplate();
};

