#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GoogleAnalyticsSettings.generated.h"

UCLASS(DefaultConfig)
class GOOGLEANALYTICS_API UGoogleAnalyticsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableIDFACollection;
    
    UGoogleAnalyticsSettings();
};

