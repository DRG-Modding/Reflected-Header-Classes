#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator_BlackboardBase
#include "BTDecorator_InRangeOfTarget.generated.h"

UCLASS()
class UBTDecorator_InRangeOfTarget : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UBTDecorator_InRangeOfTarget();
};

