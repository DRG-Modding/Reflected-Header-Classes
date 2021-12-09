#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AudioEndpointSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API UAudioEndpointSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UAudioEndpointSettingsBase();
};

