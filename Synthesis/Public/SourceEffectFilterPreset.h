#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFilterSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectFilterPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectFilterPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectFilterSettings Settings;
    
    USourceEffectFilterPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectFilterSettings& InSettings);
    
};

