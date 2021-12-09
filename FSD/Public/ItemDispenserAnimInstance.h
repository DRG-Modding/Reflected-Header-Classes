#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "ItemDispenserAnimInstance.generated.h"

UCLASS(NonTransient)
class UItemDispenserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool HasItem;
    
public:
    UItemDispenserAnimInstance();
};

