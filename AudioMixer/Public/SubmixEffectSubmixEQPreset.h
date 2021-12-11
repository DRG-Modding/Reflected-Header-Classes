#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectSubmixEQSettings.h"
#include "SubmixEffectSubmixEQPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectSubmixEQSettings Settings;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
    
    USubmixEffectSubmixEQPreset();
};

