#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "CoreInfuserAnimInstance.generated.h"

UCLASS(NonTransient)
class UCoreInfuserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsRewardSelected;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRewardSelected();
    
public:
    UCoreInfuserAnimInstance();
};

