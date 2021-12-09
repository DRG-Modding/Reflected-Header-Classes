#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AfflictionEffect.generated.h"

class UPawnAfflictionComponent;

UCLASS(Blueprintable)
class UAfflictionEffect : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldInstantiate() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndEffect(UPawnAfflictionComponent* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginEffect(UPawnAfflictionComponent* Target);
    
public:
    UAfflictionEffect();
};

