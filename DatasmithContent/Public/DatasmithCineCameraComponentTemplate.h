#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCameraLensSettingsTemplate.h"
#include "DatasmithCameraFilmbackSettingsTemplate.h"
#include "DatasmithCameraFocusSettingsTemplate.h"
#include "DatasmithPostProcessSettingsTemplate.h"
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
    
    UPROPERTY(EditAnywhere)
    float CurrentFocalLength;
    
    UPROPERTY(EditAnywhere)
    float CurrentAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;
    
    UDatasmithCineCameraComponentTemplate();
};

