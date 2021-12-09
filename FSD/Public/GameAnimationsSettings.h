#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "GameAnimationsSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class UGameAnimationsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath FootstepTestingSound;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath FootstepTestingParticles;
    
public:
    UGameAnimationsSettings();
};

