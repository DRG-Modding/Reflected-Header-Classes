#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DynamicReverbComponent.generated.h"

class UAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TunnelSoundInstance;
    
public:
    UDynamicReverbComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TunnelTimerTriggered();
    
    UFUNCTION(BlueprintCallable)
    void TimerTriggered();
    
};

