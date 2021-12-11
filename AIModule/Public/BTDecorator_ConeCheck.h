#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator_ConeCheck.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_ConeCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ConeHalfAngle;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ConeOrigin;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ConeDirection;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Observed;
    
    UBTDecorator_ConeCheck();
};

