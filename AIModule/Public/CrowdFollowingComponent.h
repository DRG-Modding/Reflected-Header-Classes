#pragma once
#include "CoreMinimal.h"
#include "PathFollowingComponent.h"
#include "CrowdAgentInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CrowdFollowingComponent.generated.h"

class UCharacterMovementComponent;

UCLASS()
class AIMODULE_API UCrowdFollowingComponent : public UPathFollowingComponent, public ICrowdAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UCharacterMovementComponent* CharacterMovement;
    
public:
    UPROPERTY()
    FVector CrowdAgentMoveDirection;
    
    UFUNCTION(BlueprintCallable)
    void SuspendCrowdSteering(bool bSuspend);
    
    UCrowdFollowingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

