#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
#include "InputTranslationTable.h"
#include "ActionIconMapping.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "ControllerIconSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UControllerIconSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FInputTranslationTable InputTranslationTable;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Xbox_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Playstation_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;
    
public:
    UFUNCTION(BlueprintPure)
    static bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintPure)
    static bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintPure)
    static bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UControllerIconSettings();
};

