#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithLandscapeTemplate.generated.h"

class UMaterialInterface;

UCLASS()
class DATASMITHCONTENT_API UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LandscapeMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StaticLightingLOD;
    
    UDatasmithLandscapeTemplate();
};

