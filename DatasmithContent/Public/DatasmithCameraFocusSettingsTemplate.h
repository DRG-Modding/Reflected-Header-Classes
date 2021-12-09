#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CinematicCamera ECameraFocusMethod
#include "DatasmithCameraFocusSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFocusSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY()
    float ManualFocusDistance;
    
    DATASMITHCONTENT_API FDatasmithCameraFocusSettingsTemplate();
};

