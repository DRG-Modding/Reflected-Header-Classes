#pragma once
#include "CoreMinimal.h"
#include "EPhaserLFOType.h"
#include "SourceEffectPhaserSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectPhaserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Feedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhaserLFOType LFOType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseQuadraturePhase;
    
    FSourceEffectPhaserSettings();
};

