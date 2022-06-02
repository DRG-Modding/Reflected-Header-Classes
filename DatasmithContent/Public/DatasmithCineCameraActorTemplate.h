#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraLookatTrackingSettingsTemplate.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCineCameraActorTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;
    
    UDatasmithCineCameraActorTemplate();
};

