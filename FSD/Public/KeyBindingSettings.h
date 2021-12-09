#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "CustomKeySetting.h"
#include "KeyBindingSettings.generated.h"

UCLASS(BlueprintType)
class UKeyBindingSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCustomKeySetting> ControllerButtons;
    
public:
    UKeyBindingSettings();
};

