#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithCameraLookatTrackingSettingsTemplate.h"
#include "DatasmithCineCameraActorTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;
    
    UDatasmithCineCameraActorTemplate();
};

