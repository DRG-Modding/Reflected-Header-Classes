#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingAdditiveInstance.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UAnimSharingAdditiveInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAnimSequence> AdditiveAnimation;
    
    UPROPERTY(EditAnywhere, Transient)
    float alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStateBool;
    
public:
    UAnimSharingAdditiveInstance();
};

