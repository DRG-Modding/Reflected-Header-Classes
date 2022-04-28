#pragma once
#include "CoreMinimal.h"
#include "DatasmithCameraLookatTrackingSettingsTemplate.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithCameraLookatTrackingSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableLookAtTracking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowRoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorToTrack;
    
    FDatasmithCameraLookatTrackingSettingsTemplate();
};

