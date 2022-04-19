#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "InputTranslationTable.h"
#include "ActionIconMapping.h"
#include "ControllerIconSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UControllerIconSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTranslationTable InputTranslationTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Xbox_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Playstation_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;
    
public:
    UControllerIconSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
};

