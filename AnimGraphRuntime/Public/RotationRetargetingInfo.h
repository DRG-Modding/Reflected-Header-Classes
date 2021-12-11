#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EEasingFuncType.h"
#include "ERotationComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "RotationRetargetingInfo.generated.h"

USTRUCT(BlueprintType)
struct FRotationRetargetingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FTransform Source;
    
    UPROPERTY(EditAnywhere)
    FTransform Target;
    
    UPROPERTY(EditAnywhere)
    ERotationComponent RotationComponent;
    
    UPROPERTY(EditAnywhere)
    FVector TwistAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUseAbsoluteAngle;
    
    UPROPERTY(EditAnywhere)
    float SourceMinimum;
    
    UPROPERTY(EditAnywhere)
    float SourceMaximum;
    
    UPROPERTY(EditAnywhere)
    float TargetMinimum;
    
    UPROPERTY(EditAnywhere)
    float TargetMaximum;
    
    UPROPERTY(EditAnywhere)
    EEasingFuncType EasingType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    bool bFlipEasing;
    
    UPROPERTY(EditAnywhere)
    float EasingWeight;
    
    UPROPERTY(EditAnywhere)
    bool bClamp;
    
    ANIMGRAPHRUNTIME_API FRotationRetargetingInfo();
};

