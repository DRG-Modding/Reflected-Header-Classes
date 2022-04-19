#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=ECameraFocusMethod -FallbackName=ECameraFocusMethod
#include "DatasmithCameraFocusSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithCameraFocusSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ManualFocusDistance;
    
    DATASMITHCONTENT_API FDatasmithCameraFocusSettingsTemplate();
};

