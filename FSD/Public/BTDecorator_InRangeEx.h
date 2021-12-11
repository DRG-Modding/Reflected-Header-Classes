#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator_BlackboardBase
//CROSS-MODULE INCLUDE: AIModule FAIDistanceType
#include "BTDecorator_InRangeEx.generated.h"

UCLASS()
class UBTDecorator_InRangeEx : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRangeEx();
};

