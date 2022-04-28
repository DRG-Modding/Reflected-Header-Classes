#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraLensSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraLensSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxFStop;
    
    DATASMITHCONTENT_API FDatasmithCameraLensSettingsTemplate();
};

