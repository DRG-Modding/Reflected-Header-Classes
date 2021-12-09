#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "FuelCannisterAttachedAnimInstance.generated.h"

UCLASS(NonTransient)
class UFuelCannisterAttachedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool CanBeTaken;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanBeTaken(bool canBeTakenValue);
    
    UFuelCannisterAttachedAnimInstance();
};

