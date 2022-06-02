#pragma once
#include "CoreMinimal.h"
#include "DatasmithPostProcessSettingsTemplate.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCameraFilmbackSettingsTemplate.h"
#include "DatasmithCameraLensSettingsTemplate.h"
#include "DatasmithCameraFocusSettingsTemplate.h"
#include "DatasmithCineCameraComponentTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithCameraLensSettingsTemplate LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithCameraFocusSettingsTemplate FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
    
    UDatasmithCineCameraComponentTemplate();
};

