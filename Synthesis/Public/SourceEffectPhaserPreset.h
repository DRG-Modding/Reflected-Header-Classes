#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectPhaserSettings.h"
#include "SourceEffectPhaserPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectPhaserPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectPhaserSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectPhaserSettings& InSettings);
    
    USourceEffectPhaserPreset();
};

