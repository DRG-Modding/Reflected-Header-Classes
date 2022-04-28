#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterAlgorithm.h"
#include "ESubmixFilterType.h"
#include "SubmixEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(EditAnywhere)
    float FilterFrequency;
    
    UPROPERTY(EditAnywhere)
    float FilterQ;
    
    FSubmixEffectFilterSettings();
};

