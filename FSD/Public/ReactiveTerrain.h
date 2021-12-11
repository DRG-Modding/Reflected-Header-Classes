#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ReactiveTerrain.generated.h"

class UStatusEffectsComponent;

UCLASS(Abstract, Blueprintable)
class UReactiveTerrain : public UObject {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActorLeft(UStatusEffectsComponent* StatusEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActorEntered(UStatusEffectsComponent* StatusEffects);
    
public:
    UReactiveTerrain();
};

