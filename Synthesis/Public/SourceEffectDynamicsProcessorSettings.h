#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectDynamicsProcessorType.h"
#include "ESourceEffectDynamicsPeakMode.h"
#include "SourceEffectDynamicsProcessorSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectDynamicsProcessorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(EditAnywhere)
    float LookAheadMsec;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStereoLinked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnalogMode: 1;
    
    FSourceEffectDynamicsProcessorSettings();
};

