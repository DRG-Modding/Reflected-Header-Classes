#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundModulationDestinationSettings -FallbackName=SoundModulationDestinationSettings
#include "SourceEffectChorusSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectChorusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Feedback;
    
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(EditAnywhere)
    float DryLevel;
    
    UPROPERTY(EditAnywhere)
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings DepthModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings FrequencyModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings FeedbackModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings WetModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings DryModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings SpreadModulation;
    
    FSourceEffectChorusSettings();
};

