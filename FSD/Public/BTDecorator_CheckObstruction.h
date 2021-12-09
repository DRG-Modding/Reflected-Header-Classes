#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTDecorator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BTDecorator_CheckObstruction.generated.h"

UCLASS()
class UBTDecorator_CheckObstruction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    bool UseOwnerCenterMass;
    
    UPROPERTY(EditAnywhere)
    FVector EyeLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FName RangedSocket;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UBTDecorator_CheckObstruction();
};

