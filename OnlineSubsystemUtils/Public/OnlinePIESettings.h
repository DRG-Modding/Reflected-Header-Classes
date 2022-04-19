#pragma once
#include "CoreMinimal.h"
#include "PIELoginSettingsInternal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OnlinePIESettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class UOnlinePIESettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlinePIEEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPIELoginSettingsInternal> Logins;
    
    UOnlinePIESettings();
};

