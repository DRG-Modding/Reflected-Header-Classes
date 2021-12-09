#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
#include "RawInputDeviceConfiguration.h"
#include "RawInputSettings.generated.h"

UCLASS(DefaultConfig, Config=Input)
class URawInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRegisterDefaultDevice;
    
    URawInputSettings();
};

