#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCameraFilmbackSettingsTemplate.h"
#include "DatasmithCameraLensSettingsTemplate.h"
#include "DatasmithPostProcessSettingsTemplate.h"
#include "DatasmithCameraFocusSettingsTemplate.h"
#include "DatasmithCineCameraComponentTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
    
    UPROPERTY()
    FDatasmithCameraLensSettingsTemplate LensSettings;
    
    UPROPERTY()
    FDatasmithCameraFocusSettingsTemplate FocusSettings;
    
    UPROPERTY()
    float CurrentFocalLength;
    
    UPROPERTY()
    float CurrentAperture;
    
    UPROPERTY()
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
    
    UDatasmithCineCameraComponentTemplate();
};

