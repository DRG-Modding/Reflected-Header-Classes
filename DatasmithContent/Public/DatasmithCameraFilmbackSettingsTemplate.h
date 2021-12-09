#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraFilmbackSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFilmbackSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SensorWidth;
    
    UPROPERTY()
    float SensorHeight;
    
    DATASMITHCONTENT_API FDatasmithCameraFilmbackSettingsTemplate();
};

