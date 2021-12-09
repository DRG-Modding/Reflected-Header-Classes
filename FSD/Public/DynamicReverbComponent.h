#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "DynamicReverbComponent.generated.h"

class UAudioComponent;

UCLASS()
class UDynamicReverbComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LargeCaveValue;
    
    UPROPERTY(EditAnywhere)
    float MediumCaveValue;
    
    UPROPERTY(EditAnywhere)
    float SmallCaveValue;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float TunnelAmbienceFadeIn;
    
    UPROPERTY(EditAnywhere)
    float TunnelAmbienceFadeOut;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* TunnelSoundInstance;
    
    UFUNCTION()
    void TunnelTimerTriggered();
    
    UFUNCTION()
    void TimerTriggered();
    
public:
    UDynamicReverbComponent();
};

