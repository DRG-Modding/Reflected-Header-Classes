#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "DrinkEffectComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class UDrinkEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float BeerEffectDurationSeconds;
    
    UPROPERTY(EditAnywhere)
    bool AutoDestroy;
    
    UPROPERTY(BlueprintReadOnly)
    bool EffectIsActive;
    
    UFUNCTION(BlueprintCallable)
    void StopEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartEffect(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void OnChangedCharacter(APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass);
    
public:
    UDrinkEffectComponent();
};
