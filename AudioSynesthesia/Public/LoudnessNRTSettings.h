#pragma once
#include "CoreMinimal.h"
#include "ELoudnessNRTCurveTypeEnum.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "LoudnessNRTSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(EditAnywhere)
    float MaximumFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoudnessNRTCurveTypeEnum CurveType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NoiseFloorDb;
    
    ULoudnessNRTSettings();
};

