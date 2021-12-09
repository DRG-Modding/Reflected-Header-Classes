#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioMixer SynthComponent
#include "VoipListenerSynthComponent.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UVoipListenerSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool IsIdling();
    
    UVoipListenerSynthComponent();
};

