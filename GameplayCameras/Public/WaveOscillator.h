#pragma once
#include "CoreMinimal.h"
#include "EInitialWaveOscillatorOffsetType.h"
#include "WaveOscillator.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FWaveOscillator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialWaveOscillatorOffsetType InitialOffsetType;
    
    FWaveOscillator();
};

