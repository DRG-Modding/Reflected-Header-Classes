#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EObjectStateTypeEnum
//CROSS-MODULE INCLUDE: ChaosSolverEngine EClusterConnectionTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EGeometryCollectionPhysicsTypeEnum
//CROSS-MODULE INCLUDE: GeometryCollectionSimulationCore EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GeomComponentCacheParameters.h"
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosBreakEvent
//CROSS-MODULE INCLUDE: ChaosSolverEngine ChaosPhysicsCollisionInfo
#include "GeometryCollectionComponent.generated.h"

class UChaosPhysicalMaterial;
class UGeometryCollection;
class AChaosSolverActor;
class AFieldSystemActor;
class UGeometryCollectionComponent;
class UBodySetup;
class UFieldSystemMetaData;
class UFieldNodeBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent*, FracturedComponent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent*, FracturedComponent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeometryCollectionComponentOnChaosBreakEvent, const FChaosBreakEvent&, BreakEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeometryCollectionComponentOnChaosPhysicsCollision, const FChaosPhysicsCollisionInfo&, CollisionInfo);

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionComponent : public UMeshComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    UGeometryCollection* RestCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TArray<AFieldSystemActor*> InitializationFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClustering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ClusterGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxClusterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EClusterConnectionTypeEnum ClusterConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionSampleFraction;
    
    UPROPERTY()
    float LinearEtherDrag;
    
    UPROPERTY()
    float AngularEtherDrag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(EditAnywhere)
    FGeomComponentCacheParameters CacheParameters;
    
    UPROPERTY(BlueprintAssignable)
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;
    
    UPROPERTY(BlueprintReadWrite, Interp, Transient, VisibleAnywhere)
    float DesiredCacheTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    bool CachePlayback;
    
    UPROPERTY(BlueprintAssignable)
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyBreaks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyCollisions;
    
private:
    UPROPERTY(Transient)
    UBodySetup* DummyBodySetup;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKinematicField(float Radius, FVector Position);
    
    UGeometryCollectionComponent();
    
    // Fix for true pure virtual functions not being implemented
};

