#pragma once
#include "CoreMinimal.h"
#include "ModularSynthPreset.h"
#include "ModularSynthPresetBankEntry.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FModularSynthPresetBankEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FModularSynthPreset Preset;
    
    FModularSynthPresetBankEntry();
};

