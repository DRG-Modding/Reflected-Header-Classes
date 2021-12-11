#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SolverIterations
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "ESimulationSpace.h"
#include "AnimNode_RigidBody_Chaos.generated.h"

class UPhysicsAsset;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FVector OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearAccScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearVelScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentAppliedLinearAccClamp;
    
    UPROPERTY(EditAnywhere)
    float CachedBoundsScale;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseBoneRef;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> OverlapChannel;
    
    UPROPERTY(EditAnywhere)
    ESimulationSpace SimulationSpace;
    
    UPROPERTY(EditAnywhere)
    bool bForceDisableCollisionBetweenConstraintBodies;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableWorldGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideWorldGravity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTransferBoneVelocities: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFreezeIncomingPoseOnStart: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClampLinearTranslationLimitToRefPose: 1;
    
    UPROPERTY(EditAnywhere)
    FSolverIterations OverrideSolverIterations;
    
    FAnimNode_RigidBody_Chaos();
};

