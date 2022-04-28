#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_MoveToSlot.generated.h"

UCLASS(Blueprintable)
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

