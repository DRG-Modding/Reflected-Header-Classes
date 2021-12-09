#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.generated.h"

USTRUCT(BlueprintType)
struct FSoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    AUDIOEXTENSIONS_API FSoundModulationParameter();
};

