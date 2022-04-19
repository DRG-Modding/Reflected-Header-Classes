#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingTransitionInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class UAnimSharingTransitionInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> FromComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> ToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bBlendBool;
    
public:
    UAnimSharingTransitionInstance();
};

