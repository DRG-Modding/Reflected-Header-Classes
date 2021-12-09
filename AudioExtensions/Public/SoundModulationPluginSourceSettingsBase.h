#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SoundModulationPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USoundModulationPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundModulationPluginSourceSettingsBase();
};

