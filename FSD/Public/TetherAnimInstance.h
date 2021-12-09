#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "TetherAnimInstance.generated.h"

UCLASS(NonTransient)
class UTetherAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool SearchingForConnection;
    
public:
    UTetherAnimInstance();
};

