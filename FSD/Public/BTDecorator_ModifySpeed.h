#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_ModifySpeed.generated.h"

UCLASS()
class UBTDecorator_ModifySpeed : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
public:
    UBTDecorator_ModifySpeed();
};

