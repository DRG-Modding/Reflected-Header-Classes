#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_PlayAnimation.generated.h"

class UBehaviorTreeComponent;
class UAnimationAsset;
class USkeletalMeshComponent;

UCLASS()
class AIMODULE_API UBTTask_PlayAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNonBlocking: 1;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CachedSkelMesh;
    
    UBTTask_PlayAnimation();
};

