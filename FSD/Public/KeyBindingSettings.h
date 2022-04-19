#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CustomKeySetting.h"
#include "KeyBindingSettings.generated.h"

UCLASS(BlueprintType)
class UKeyBindingSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeySetting> ControllerButtons;
    
public:
    UKeyBindingSettings();
};

