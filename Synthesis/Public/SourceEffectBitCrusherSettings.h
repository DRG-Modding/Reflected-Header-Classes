#pragma once
#include "CoreMinimal.h"
#include "SourceEffectBitCrusherSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectBitCrusherSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrushedSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrushedBits;
    
    FSourceEffectBitCrusherSettings();
};

