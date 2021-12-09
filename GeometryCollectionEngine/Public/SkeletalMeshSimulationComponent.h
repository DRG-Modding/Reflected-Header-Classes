#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosPhysicsCollisionInfo
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EObjectStateTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore ECollisionTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SkeletalMeshSimulationComponent.generated.h"

class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPhysicsAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkeletalMeshSimulationComponentOnChaosPhysicsCollision, const FChaosPhysicsCollisionInfo&, CollisionInfo);

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API USkeletalMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSimulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImplicitShapeParticlesPerUnitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ImplicitShapeMinNumParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ImplicitShapeMaxNumParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintAssignable)
    FSkeletalMeshSimulationComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    USkeletalMeshSimulationComponent();
};

