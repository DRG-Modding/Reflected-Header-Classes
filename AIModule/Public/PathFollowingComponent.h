#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine HitResult
#include "AIResourceInterface.h"
//CROSS-MODULE INCLUDE: Engine PathFollowingAgentInterface
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EPathFollowingAction.h"
#include "PathFollowingComponent.generated.h"

class UNavMovementComponent;
class ANavigationData;
class AActor;

UCLASS(BlueprintType)
class AIMODULE_API UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UNavMovementComponent* MovementComp;
    
    UPROPERTY(Transient)
    ANavigationData* MyNavData;
    
    UFUNCTION(BlueprintCallable)
    void OnNavDataRegistered(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType() const;
    
    UPathFollowingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

