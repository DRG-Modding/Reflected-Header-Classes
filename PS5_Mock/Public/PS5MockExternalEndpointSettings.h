#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioExtensions AudioEndpointSettingsBase
#include "PS5MockExternalEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UPS5MockExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPS5MockExternalEndpointSettings();
};

