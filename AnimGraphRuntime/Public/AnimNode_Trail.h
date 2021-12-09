#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: CoreUObject EAxis
#include "RotationLimit.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: Engine InputScaleBiasClamp
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AnimPhysPlanarLimit.h"
#include "AnimNode_Trail.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_Trail : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TrailBone;
    
    UPROPERTY(EditAnywhere)
    int32 ChainLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> ChainBoneAxis;
    
    UPROPERTY(EditAnywhere)
    uint8 bInvertChainBoneAxis: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitStretch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitRotation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsePlanarLimit: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bActorSpaceFakeVel: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReorientParentToChild: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelaxationSpeedScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TrailRelaxationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FRotationLimit> RotationLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector> RotationOffsets;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimPhysPlanarLimit> PlanarLimits;
    
    UPROPERTY(EditAnywhere)
    float StretchLimit;
    
    UPROPERTY(EditAnywhere)
    FVector FakeVelocity;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BaseJoint;
    
    UPROPERTY(EditAnywhere)
    float LastBoneRotationAnimAlphaBlend;
    
    FAnimNode_Trail();
};

