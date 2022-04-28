#pragma once
#include "CoreMinimal.h"
#include "DynamicsBandSettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicsBandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CrossoverTopFrequency;
    
    UPROPERTY(EditAnywhere)
    float AttackTimeMsec;
    
    UPROPERTY(EditAnywhere)
    float ReleaseTimeMsec;
    
    UPROPERTY(EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(EditAnywhere)
    float Ratio;
    
    UPROPERTY(EditAnywhere)
    float KneeBandwidthDb;
    
    UPROPERTY(EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(EditAnywhere)
    float OutputGainDb;
    
    SYNTHESIS_API FDynamicsBandSettings();
};

