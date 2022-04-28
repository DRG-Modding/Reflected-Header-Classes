#pragma once
#include "CoreMinimal.h"
#include "SimpleCameraShakePattern.h"
#include "WaveOscillator.h"
#include "WaveOscillatorCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LocationAmplitudeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LocationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator Z;
    
    UPROPERTY(EditAnywhere)
    float RotationAmplitudeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float RotationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveOscillator FOV;
    
    UWaveOscillatorCameraShakePattern();
};

