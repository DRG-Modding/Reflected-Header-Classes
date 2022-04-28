#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraFilmbackSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFilmbackSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SensorWidth;
    
    UPROPERTY(EditAnywhere)
    float SensorHeight;
    
    DATASMITHCONTENT_API FDatasmithCameraFilmbackSettingsTemplate();
};

