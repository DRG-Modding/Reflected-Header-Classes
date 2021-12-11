#pragma once
#include "CoreMinimal.h"
#include "Synth1PatchCable.h"
#include "ESynth1PatchSource.h"
#include "EpicSynth1Patch.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FEpicSynth1Patch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynth1PatchSource PatchSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSynth1PatchCable> PatchCables;
    
    FEpicSynth1Patch();
};

