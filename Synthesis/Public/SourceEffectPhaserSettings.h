#pragma once
#include "CoreMinimal.h"
#include "EPhaserLFOType.h"
#include "SourceEffectPhaserSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectPhaserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPhaserLFOType LFOType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseQuadraturePhase;
    
    FSourceEffectPhaserSettings();
};

