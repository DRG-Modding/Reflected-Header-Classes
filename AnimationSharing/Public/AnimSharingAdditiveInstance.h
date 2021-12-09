#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "AnimSharingAdditiveInstance.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(NonTransient)
class UAnimSharingAdditiveInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    TWeakObjectPtr<UAnimSequence> AdditiveAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float alpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bStateBool;
    
public:
    UAnimSharingAdditiveInstance();
};

