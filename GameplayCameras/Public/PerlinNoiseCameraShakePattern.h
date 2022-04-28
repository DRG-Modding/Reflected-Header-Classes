#pragma once
#include "CoreMinimal.h"
#include "SimpleCameraShakePattern.h"
#include "PerlinNoiseShaker.h"
#include "PerlinNoiseCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LocationAmplitudeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LocationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker Z;
    
    UPROPERTY(EditAnywhere)
    float RotationAmplitudeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float RotationFrequencyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseShaker FOV;
    
    UPerlinNoiseCameraShakePattern();
};

