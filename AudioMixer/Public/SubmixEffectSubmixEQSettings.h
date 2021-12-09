#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectEQBand.h"
#include "SubmixEffectSubmixEQSettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectSubmixEQSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSubmixEffectEQBand> EQBands;
    
    AUDIOMIXER_API FSubmixEffectSubmixEQSettings();
};

