#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule FAIDistanceType
//CROSS-MODULE INCLUDE: AIModule BTDecorator_BlackboardBase
#include "BTDecorator_InRange.generated.h"

UCLASS()
class UBTDecorator_InRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRange();
};

