#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "Test.generated.h"

UCLASS(NonTransient)
class UTest : public UAnimInstance {
    GENERATED_BODY()
public:
    UTest();
};

