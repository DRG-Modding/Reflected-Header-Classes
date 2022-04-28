#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "DatasmithPointLightComponentTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightUnits IntensityUnits;
    
    UPROPERTY(EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(EditAnywhere)
    float SourceLength;
    
    UPROPERTY(EditAnywhere)
    float AttenuationRadius;
    
    UDatasmithPointLightComponentTemplate();
};

