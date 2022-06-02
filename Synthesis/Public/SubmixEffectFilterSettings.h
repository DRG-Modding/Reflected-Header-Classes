#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterType.h"
#include "ESubmixFilterAlgorithm.h"
#include "SubmixEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterQ;
    
    FSubmixEffectFilterSettings();
};

