#pragma once
#include "CoreMinimal.h"
#include "PerSkeletonAnimationSharingSetup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationSharingScalability.h"
#include "AnimationSharingSetup.generated.h"

UCLASS(Blueprintable)
class ANIMATIONSHARING_API UAnimationSharingSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationSharingScalability ScalabilitySettings;
    
    UAnimationSharingSetup();
};

