#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectFlexiverbSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectFlexiverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PreDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RoomDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Complexity;
    
    FSubmixEffectFlexiverbSettings();
};

