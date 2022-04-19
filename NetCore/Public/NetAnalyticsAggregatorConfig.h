#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetAnalyticsDataConfig.h"
#include "NetAnalyticsAggregatorConfig.generated.h"

UCLASS(PerObjectConfig)
class UNetAnalyticsAggregatorConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;
    
    UNetAnalyticsAggregatorConfig();
};

