#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectDynamicsPeakMode.h"
#include "ESourceEffectDynamicsProcessorType.h"
#include "SourceEffectDynamicsProcessorSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectDynamicsProcessorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESourceEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeBandwidthDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStereoLinked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAnalogMode: 1;
    
    FSourceEffectDynamicsProcessorSettings();
};

