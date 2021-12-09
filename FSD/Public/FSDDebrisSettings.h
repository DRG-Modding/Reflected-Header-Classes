#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "FSDDebrisSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UFSDDebrisSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultInfluencerDensityCurve;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultInfluencerSizeCurve;
    
public:
    UFSDDebrisSettings();
};

