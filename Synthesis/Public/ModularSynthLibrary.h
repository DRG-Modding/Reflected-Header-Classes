#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModularSynthPreset.h"
#include "ModularSynthLibrary.generated.h"

class UModularSynthPresetBank;

UCLASS(BlueprintType)
class SYNTHESIS_API UModularSynthLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UFUNCTION(BlueprintCallable)
    static void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, const FModularSynthPreset& Preset, const FString& PresetName);
    
public:
    UModularSynthLibrary();
};

