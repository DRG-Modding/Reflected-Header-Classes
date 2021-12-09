#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "AnimSharingTransitionInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class UAnimSharingTransitionInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> FromComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> ToComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float BlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bBlendBool;
    
public:
    UAnimSharingTransitionInstance();
};

