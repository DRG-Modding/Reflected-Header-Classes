#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraFilmbackSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFilmbackSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensorHeight;
    
    DATASMITHCONTENT_API FDatasmithCameraFilmbackSettingsTemplate();
};

