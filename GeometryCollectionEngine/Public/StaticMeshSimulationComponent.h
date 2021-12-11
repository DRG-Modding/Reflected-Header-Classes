#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore ECollisionTypeEnum
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EImplicitTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EObjectStateTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosPhysicsCollisionInfo
#include "StaticMeshSimulationComponent.generated.h"

class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStaticMeshSimulationComponentOnChaosPhysicsCollision, const FChaosPhysicsCollisionInfo&, CollisionInfo);

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API UStaticMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintAssignable)
    FStaticMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
private:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> SimulatedComponents;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    UFUNCTION(BlueprintCallable)
    void ForceRecreatePhysicsState();
    
    UStaticMeshSimulationComponent();
    
    // Fix for true pure virtual functions not being implemented
};

