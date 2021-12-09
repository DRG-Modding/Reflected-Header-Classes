#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_RandomLoop.generated.h"

UCLASS()
class UBTDecorator_RandomLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UBTDecorator_RandomLoop();
};

