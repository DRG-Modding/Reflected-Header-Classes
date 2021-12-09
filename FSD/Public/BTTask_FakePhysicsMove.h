#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTask_BlackboardBase
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BTTask_FakePhysicsMove.generated.h"

class UFakeMoverSettings;

UCLASS()
class UBTTask_FakePhysicsMove : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinTime;
    
    UPROPERTY(EditAnywhere)
    float EndMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector InitialLocalVelocity;
    
    UPROPERTY(EditAnywhere)
    FVector InitialGlobalVelocity;
    
    UPROPERTY(EditAnywhere)
    bool EndRequireSolidGround;
    
    UPROPERTY(EditAnywhere)
    UFakeMoverSettings* MoveSettings;
    
public:
    UBTTask_FakePhysicsMove();
};

