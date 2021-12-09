#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraLookatTrackingSettingsTemplate.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithCameraLookatTrackingSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bEnableLookAtTracking: 1;
    
    UPROPERTY()
    uint8 bAllowRoll: 1;
    
    UPROPERTY()
    TSoftObjectPtr<AActor> ActorToTrack;
    
    FDatasmithCameraLookatTrackingSettingsTemplate();
};

