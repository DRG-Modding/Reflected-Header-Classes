#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "HudSettings.generated.h"

UCLASS(Config=Game)
class ENGINESETTINGS_API UHudSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bShowHUD: 1;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FName> DebugDisplay;
    
    UHudSettings();
};

