#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator_KeepInCone.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_KeepInCone : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ConeHalfAngle;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ConeOrigin;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Observed;
    
    UPROPERTY()
    uint8 bUseSelfAsOrigin: 1;
    
    UPROPERTY()
    uint8 bUseSelfAsObserved: 1;
    
    UBTDecorator_KeepInCone();
};

