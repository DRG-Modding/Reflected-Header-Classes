#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "FloatPerkComponent.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UFloatPerkComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float FloatValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* PlayerCharacter;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_OnInitialized();
    
public:
    UFloatPerkComponent();
};

