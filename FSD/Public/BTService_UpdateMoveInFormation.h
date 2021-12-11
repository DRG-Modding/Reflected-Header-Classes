#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BTService_UpdateMoveInFormation.generated.h"

UCLASS()
class UBTService_UpdateMoveInFormation : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float AttackerRadius;
    
public:
    UBTService_UpdateMoveInFormation();
};

