#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "JellyEggAnimInstance.generated.h"

UCLASS(NonTransient)
class UJellyEggAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector force;
    
public:
    UJellyEggAnimInstance();
};

