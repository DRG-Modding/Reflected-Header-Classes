#pragma once
#include "CoreMinimal.h"
#include "AudioEndpointSettingsBase.h"
#include "DummyEndpointSettings.generated.h"

UCLASS(EditInlineNew)
class UDummyEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UDummyEndpointSettings();
};

