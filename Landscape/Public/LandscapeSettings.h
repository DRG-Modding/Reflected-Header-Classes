#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
#include "LandscapeSettings.generated.h"

UCLASS(DefaultConfig)
class LANDSCAPE_API ULandscapeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxNumberOfLayers;
    
    ULandscapeSettings();
};

