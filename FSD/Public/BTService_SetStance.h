#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
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

