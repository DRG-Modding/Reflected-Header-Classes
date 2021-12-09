#pragma once
#include "CoreMinimal.h"
#include "FAIDistanceType.h"
#include "BTDecorator_BlackboardBase.h"
#include "AIDataProviderFloatValue.h"
#include "BTDecorator_IsAtLocation.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    FAIDistanceType GeometricDistanceType;
    
    UPROPERTY()
    uint8 bUseParametrizedRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseNavAgentGoalLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPathFindingBasedTest: 1;
    
    UBTDecorator_IsAtLocation();
};

