#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
#include "PIELoginSettingsInternal.h"
#include "OnlinePIESettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class UOnlinePIESettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bOnlinePIEEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FPIELoginSettingsInternal> Logins;
    
    UOnlinePIESettings();
};

