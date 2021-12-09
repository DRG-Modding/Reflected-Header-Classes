#pragma once
#include "CoreMinimal.h"
#include "ESynth1PatchDestination.h"
#include "Synth1PatchCable.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynth1PatchCable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynth1PatchDestination Destination;
    
    FSynth1PatchCable();
};

