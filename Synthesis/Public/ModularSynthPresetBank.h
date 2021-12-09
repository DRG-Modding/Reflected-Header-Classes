#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ModularSynthPresetBankEntry.h"
#include "ModularSynthPresetBank.generated.h"

UCLASS(BlueprintType)
class SYNTHESIS_API UModularSynthPresetBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FModularSynthPresetBankEntry> Presets;
    
    UModularSynthPresetBank();
};

