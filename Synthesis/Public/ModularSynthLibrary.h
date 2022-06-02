#pragma once
#include "CoreMinimal.h"
#include "ModularSynthPreset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModularSynthLibrary.generated.h"

class UModularSynthPresetBank;

UCLASS(Blueprintable)
class SYNTHESIS_API UModularSynthLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModularSynthLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, const FModularSynthPreset& Preset, const FString& PresetName);
    
};

