#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GamepadCursorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UGamepadCursorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(Config, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(Config, EditAnywhere)
    float StickySlowDown;
    
    UPROPERTY(Config, EditAnywhere)
    float DeadZone;
    
public:
    UGamepadCursorSettings();
};

