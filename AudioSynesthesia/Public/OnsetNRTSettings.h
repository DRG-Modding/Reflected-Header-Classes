#pragma once
#include "CoreMinimal.h"
#include "AudioSynesthesiaNRTSettings.h"
#include "OnsetNRTSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDownmixToMono;
    
    UPROPERTY(EditAnywhere)
    float GranularityInSeconds;
    
    UPROPERTY(EditAnywhere)
    float Sensitivity;
    
    UPROPERTY(EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(EditAnywhere)
    float MaximumFrequency;
    
    UOnsetNRTSettings();
};

