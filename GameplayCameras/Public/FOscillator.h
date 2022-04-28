#pragma once
#include "CoreMinimal.h"
#include "EOscillatorWaveform.h"
#include "EInitialOscillatorOffset.h"
#include "FOscillator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FFOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EInitialOscillatorOffset> InitialOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOscillatorWaveform Waveform;
    
    FFOscillator();
};

