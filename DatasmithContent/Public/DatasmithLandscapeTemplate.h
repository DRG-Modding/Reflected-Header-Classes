#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithLandscapeTemplate.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LandscapeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticLightingLOD;
    
    UDatasmithLandscapeTemplate();
};

