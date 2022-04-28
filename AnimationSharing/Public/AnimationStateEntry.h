#pragma once
#include "CoreMinimal.h"
#include "AnimationSetup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
#include "AnimationStateEntry.generated.h"

USTRUCT(BlueprintType)
struct FAnimationStateEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationSetup> AnimationSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnDemand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdditive;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToPreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetNextState;
    
    UPROPERTY(EditAnywhere)
    uint8 NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformInt MaximumNumberOfConcurrentInstances;
    
    UPROPERTY(EditAnywhere)
    float WiggleTimePercentage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresCurves;
    
    ANIMATIONSHARING_API FAnimationStateEntry();
};

