#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "FuelCannisterAttachedAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFuelCannisterAttachedAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanBeTaken;
    
public:
    UFuelCannisterAttachedAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetCanBeTaken(bool canBeTakenValue);
    
};

