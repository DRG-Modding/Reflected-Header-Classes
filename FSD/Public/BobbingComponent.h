#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "BobbingComponent.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBobbingComponentOnMovedIntoSomethingEvent, bool, Up);

UCLASS(BlueprintType)
class UBobbingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBobbingComponentOnMovedIntoSomethingEvent OnMovedIntoSomethingEvent;
    
protected:
    UPROPERTY(Transient)
    AActor* OwnerActor;
    
    UPROPERTY(EditAnywhere)
    bool DoOrientationChecks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BobSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BobSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OrentationChecksPerSecond;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOwner(AActor* AActor);
    
    UBobbingComponent();
};

