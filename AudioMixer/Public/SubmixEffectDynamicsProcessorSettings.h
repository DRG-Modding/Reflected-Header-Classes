#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsChannelLinkMode.h"
#include "ESubmixEffectDynamicsProcessorType.h"
#include "ESubmixEffectDynamicsPeakMode.h"
#include "SubmixEffectDynamicProcessorFilterSettings.h"
#include "SubmixEffectDynamicsProcessorSettings.generated.h"

class USoundSubmix;

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectDynamicsProcessorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsChannelLinkMode LinkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeBandwidthDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmix* ExternalSubmix;
    
    UPROPERTY()
    uint8 bChannelLinked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAnalogMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bKeyAudition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KeyGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;
    
    FSubmixEffectDynamicsProcessorSettings();
};

