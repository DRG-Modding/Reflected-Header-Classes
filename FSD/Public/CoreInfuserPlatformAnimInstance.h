#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "CoreInfuserPlatformAnimInstance.generated.h"

UCLASS(NonTransient)
class UCoreInfuserPlatformAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool keyInserted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool dispensRewards;
    
public:
    UCoreInfuserPlatformAnimInstance();
};

