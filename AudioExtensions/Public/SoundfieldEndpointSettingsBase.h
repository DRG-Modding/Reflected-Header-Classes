#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SoundfieldEndpointSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEndpointSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEndpointSettingsBase();
};

