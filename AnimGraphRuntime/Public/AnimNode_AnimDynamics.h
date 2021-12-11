#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AnimPhysSimSpaceType.h"
#include "AnimPhysConstraintSetup.h"
#include "AnimPhysSphericalLimit.h"
#include "RotationRetargetingInfo.h"
#include "AnimPhysPlanarLimit.h"
//CROSS-MODULE INCLUDE: Engine AnimPhysCollisionType
#include "AnimNode_AnimDynamics.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float LinearDampingOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AngularDampingOverride;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RelativeSpaceBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoundBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ChainEnd;
    
    UPROPERTY(EditAnywhere)
    FVector BoxExtents;
    
    UPROPERTY(EditAnywhere)
    FVector LocalJointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GravityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearSpringConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularSpringConstant;
    
    UPROPERTY(EditAnywhere)
    float WindScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearAccScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentLinearVelScale;
    
    UPROPERTY(EditAnywhere)
    FVector ComponentAppliedLinearAccClamp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AngularBiasOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumSolverIterationsPreUpdate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 NumSolverIterationsPostUpdate;
    
    UPROPERTY(EditAnywhere)
    FAnimPhysConstraintSetup ConstraintSetup;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimPhysSphericalLimit> SphericalLimits;
    
    UPROPERTY(EditAnywhere)
    float SphereCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    FVector ExternalForce;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    
    UPROPERTY(EditAnywhere)
    AnimPhysCollisionType CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AnimPhysSimSpaceType SimulationSpace;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSphericalLimits: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsePlanarLimit: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDoUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDoEval: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bOverrideLinearDamping: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bOverrideAngularBias: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bOverrideAngularDamping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableWind: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseGravityOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLinearSpring: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAngularSpring: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bChain: 1;
    
    UPROPERTY(EditAnywhere)
    FRotationRetargetingInfo RetargetingSettings;
    
    FAnimNode_AnimDynamics();
};

