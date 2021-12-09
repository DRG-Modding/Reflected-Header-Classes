#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator_BlackboardBase
#include "BTDecorator_IsFacing.generated.h"

UCLASS()
class UBTDecorator_IsFacing : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
public:
    UBTDecorator_IsFacing();
};

