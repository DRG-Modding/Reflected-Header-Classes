#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=AudioEndpointSettingsBase -FallbackName=AudioEndpointSettingsBase
#include "PS5MockExternalEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPS5MockExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPS5MockExternalEndpointSettings();
};

