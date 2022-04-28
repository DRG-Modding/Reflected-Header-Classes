#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
#include "StaticMeshSimulationComponent.generated.h"

class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UStaticMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> SimulatedComponents;
    
public:
    UStaticMeshSimulationComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    UFUNCTION(BlueprintCallable)
    void ForceRecreatePhysicsState();
    
    
    // Fix for true pure virtual functions not being implemented
};

