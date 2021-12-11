#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BTService_SetStance.generated.h"

UCLASS(BlueprintType)
class UBTService_SetStance : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Distance;
    
public:
    UBTService_SetStance();
};

