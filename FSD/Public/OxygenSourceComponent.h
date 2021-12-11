#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "OxygenSourceComponent.generated.h"

class UNoOxygenMutator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOxygenSourceComponentOnOxygenActivationChanged, bool, IsActive);

UCLASS(Blueprintable)
class UOxygenSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(EditAnywhere)
    float CenterOffset;
    
    UPROPERTY(BlueprintAssignable)
    FOxygenSourceComponentOnOxygenActivationChanged OnOxygenActivationChanged;
    
    UPROPERTY(Transient)
    UNoOxygenMutator* Mutator;
    
    UFUNCTION(BlueprintCallable)
    void OnTimerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSourceActivated();
    
public:
    UOxygenSourceComponent();
};

