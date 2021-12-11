#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "EDrivenBoneModificationMode.h"
#include "EDrivenDestinationMode.h"
//CROSS-MODULE INCLUDE: Engine EComponentType
#include "AnimNode_BoneDrivenController.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DrivingCurve;
    
    UPROPERTY(EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    float RangeMin;
    
    UPROPERTY(EditAnywhere)
    float RangeMax;
    
    UPROPERTY(EditAnywhere)
    float RemappedMin;
    
    UPROPERTY(EditAnywhere)
    float RemappedMax;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    EDrivenDestinationMode DestinationMode;
    
    UPROPERTY(EditAnywhere)
    EDrivenBoneModificationMode ModificationMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EComponentType::Type> SourceComponent;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetTranslationX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetTranslationY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetTranslationZ: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetRotationX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetRotationY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetRotationZ: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetScaleX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetScaleY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectTargetScaleZ: 1;
    
    FAnimNode_BoneDrivenController();
};

