#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTDecorator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BTDecorator_CanSeeTarget.generated.h"

UCLASS()
class UBTDecorator_CanSeeTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseAsync;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    FVector EyeLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UBTDecorator_CanSeeTarget();
};

