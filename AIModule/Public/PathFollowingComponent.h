#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIResourceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PathFollowingAgentInterface -FallbackName=PathFollowingAgentInterface
#include "EPathFollowingAction.h"
#include "PathFollowingComponent.generated.h"

class UNavMovementComponent;
class AActor;
class ANavigationData;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UNavMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* MyNavData;
    
public:
    UPathFollowingComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNavDataRegistered(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

