#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraLensSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraLensSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MaxFStop;
    
    DATASMITHCONTENT_API FDatasmithCameraLensSettingsTemplate();
};

