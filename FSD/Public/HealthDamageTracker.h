#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "HealthDamageTracker.generated.h"

class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthDamageTrackerOnTrackedPercentageReachedEvent, float, Amount);

UCLASS(BlueprintType)
class UHealthDamageTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthDamageTrackerOnTrackedPercentageReachedEvent OnTrackedPercentageReachedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float TiggerOnPercentage;
    
    UPROPERTY(Export, Transient)
    UHealthComponentBase* Health;
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTrackedDamage();
    
protected:
    UFUNCTION()
    void OnDamageTaken(float Amount);
    
public:
    UHealthDamageTracker();
};
