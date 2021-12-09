#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSourcePreset
#include "SourceEffectChorusSettings.h"
#include "SourceEffectChorusPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectChorusPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSourceEffectChorusSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectChorusSettings& InSettings);
    
    USourceEffectChorusPreset();
};

