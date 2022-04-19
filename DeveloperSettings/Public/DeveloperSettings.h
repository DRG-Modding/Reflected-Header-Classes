#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeveloperSettings.generated.h"

UCLASS(Abstract)
class DEVELOPERSETTINGS_API UDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
    UDeveloperSettings();
};

