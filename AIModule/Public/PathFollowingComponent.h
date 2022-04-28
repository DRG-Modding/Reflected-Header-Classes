#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIResourceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PathFollowingAgentInterface -FallbackName=PathFollowingAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PathFollowingComponent.generated.h"

class AActor;
class UNavMovementComponent;
class ANavigationData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UNavMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

