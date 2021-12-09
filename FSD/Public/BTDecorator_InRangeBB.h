#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule FAIDistanceType
//CROSS-MODULE INCLUDE: AIModule BTDecorator_BlackboardBase
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTDecorator_InRangeBB.generated.h"

UCLASS()
class UBTDecorator_InRangeBB : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MinRangeKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector MaxRangeKey;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UBTDecorator_InRangeBB();
};

