#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "NetMontageAble.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;
class UAnimInstance;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UNetMontageAble : public UInterface {
    GENERATED_BODY()
};

class INetMontageAble : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual  return 0.0f; QueueMontage(UAnimMontage* Montage) PURE_VIRTUAL(QueueMontage,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetSkeletalMesh() const PURE_VIRTUAL(GetSkeletalMesh,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetAnimInstance() const PURE_VIRTUAL(GetAnimInstance,);
    
};

