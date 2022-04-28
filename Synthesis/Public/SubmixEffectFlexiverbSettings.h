#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectFlexiverbSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectFlexiverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PreDelay;
    
    UPROPERTY(EditAnywhere)
    float DecayTime;
    
    UPROPERTY(EditAnywhere)
    float RoomDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Complexity;
    
    FSubmixEffectFlexiverbSettings();
};

