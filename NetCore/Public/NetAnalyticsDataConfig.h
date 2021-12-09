#pragma once
#include "CoreMinimal.h"
#include "NetAnalyticsDataConfig.generated.h"

USTRUCT(BlueprintType)
struct FNetAnalyticsDataConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FName DataName;
    
    UPROPERTY(Config)
    bool bEnabled;
    
    NETCORE_API FNetAnalyticsDataConfig();
};

