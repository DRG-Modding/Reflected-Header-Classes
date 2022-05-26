#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingTransitionInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class UAnimSharingTransitionInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> FromComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> ToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlendBool;
    
public:
    UAnimSharingTransitionInstance();
};

