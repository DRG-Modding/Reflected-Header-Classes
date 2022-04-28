#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsPeakMode.h"
#include "ESubmixEffectDynamicsProcessorType.h"
#include "ESubmixEffectDynamicsKeySource.h"
#include "ESubmixEffectDynamicsChannelLinkMode.h"
#include "SubmixEffectDynamicProcessorFilterSettings.h"
#include "SubmixEffectDynamicsProcessorSettings.generated.h"

class UAudioBus;
class USoundSubmix;

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectDynamicsProcessorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsChannelLinkMode LinkMode;
    
    UPROPERTY(EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(EditAnywhere)
    float Ratio;
    
    UPROPERTY(EditAnywhere)
    float KneeBandwidthDb;
    
    UPROPERTY(EditAnywhere)
    float LookAheadMsec;
    
    UPROPERTY(EditAnywhere)
    float AttackTimeMsec;
    
    UPROPERTY(EditAnywhere)
    float ReleaseTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectDynamicsKeySource KeySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioBus* ExternalAudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ExternalSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bChannelLinked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnalogMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBypass: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKeyAudition: 1;
    
    UPROPERTY(EditAnywhere)
    float KeyGainDb;
    
    UPROPERTY(EditAnywhere)
    float OutputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;
    
    FSubmixEffectDynamicsProcessorSettings();
};

