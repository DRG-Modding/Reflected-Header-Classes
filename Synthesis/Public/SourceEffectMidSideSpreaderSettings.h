#pragma once
#include "CoreMinimal.h"
#include "EStereoChannelMode.h"
#include "SourceEffectMidSideSpreaderSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectMidSideSpreaderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStereoChannelMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpreadAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStereoChannelMode OutputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEqualPower;
    
    FSourceEffectMidSideSpreaderSettings();
};

