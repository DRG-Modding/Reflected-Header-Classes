#pragma once
#include "CoreMinimal.h"
#include "EConstantQNormalizationEnum.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "EConstantQFFTSizeEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTWindowType -FallbackName=EFFTWindowType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumType -FallbackName=EAudioSpectrumType
#include "ConstantQNRTSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartingFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBands;
    
    UPROPERTY(EditAnywhere)
    float NumBandsPerOctave;
    
    UPROPERTY(EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownmixToMono;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstantQFFTSizeEnum FFTSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFFTWindowType WindowType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioSpectrumType SpectrumType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BandWidthStretch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConstantQNormalizationEnum CQTNormalization;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NoiseFloorDb;
    
    UConstantQNRTSettings();
};

