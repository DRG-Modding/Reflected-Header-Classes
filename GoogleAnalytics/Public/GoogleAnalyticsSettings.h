#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GoogleAnalyticsSettings.generated.h"

UCLASS(DefaultConfig)
class GOOGLEANALYTICS_API UGoogleAnalyticsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIDFACollection;
    
    UGoogleAnalyticsSettings();
};

