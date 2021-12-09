#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioExtensions SoundfieldEncodingSettingsBase
#include "AmbisonicsEncodingSettings.generated.h"

UCLASS(EditInlineNew)
class SOUNDFIELDS_API UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 AmbisonicsOrder;
    
public:
    UAmbisonicsEncodingSettings();
};

