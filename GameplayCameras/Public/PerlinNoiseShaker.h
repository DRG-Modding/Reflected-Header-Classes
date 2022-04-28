#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseShaker.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FPerlinNoiseShaker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    FPerlinNoiseShaker();
};

