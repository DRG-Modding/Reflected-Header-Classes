#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTask_BlackboardBase
#include "BTTask_MoveToSlot.generated.h"

UCLASS()
class UBTTask_MoveToSlot : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    float UpdateRate;
    
public:
    UBTTask_MoveToSlot();
};

