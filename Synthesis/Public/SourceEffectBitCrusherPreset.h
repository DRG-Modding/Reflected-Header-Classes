#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectBitCrusherSettings.h"
#include "SourceEffectBitCrusherPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectBitCrusherSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectBitCrusherSettings& InSettings);
    
    USourceEffectBitCrusherPreset();
};

