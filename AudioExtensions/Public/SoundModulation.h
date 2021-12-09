#pragma once
#include "CoreMinimal.h"
#include "SoundModulation.generated.h"

class USoundModulationPluginSourceSettingsBase;

USTRUCT(BlueprintType)
struct AUDIOEXTENSIONS_API FSoundModulation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundModulationPluginSourceSettingsBase*> Settings;
    
    FSoundModulation();
};

