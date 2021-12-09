#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine AudioComponent
#include "ImpactAudioComponent.generated.h"

class USceneComponent;
class AActor;
class UHealthComponentBase;
class UImpactAudioComponent;

UCLASS()
class UImpactAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName AudioParameterSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecelerationThreshold;
    
    UPROPERTY(EditAnywhere)
    bool ListenForDeath;
    
public:
    UFUNCTION()
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    static UImpactAudioComponent* AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass);
    
    UImpactAudioComponent();
};

