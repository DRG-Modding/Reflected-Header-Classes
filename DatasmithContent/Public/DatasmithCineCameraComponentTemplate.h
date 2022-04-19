#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCameraFilmbackSettingsTemplate.h"
#include "DatasmithCameraLensSettingsTemplate.h"
#include "DatasmithCameraFocusSettingsTemplate.h"
#include "DatasmithPostProcessSettingsTemplate.h"
#include "DatasmithCineCameraComponentTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithCameraLensSettingsTemplate LensSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithCameraFocusSettingsTemplate FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
    
    UDatasmithCineCameraComponentTemplate();
};

