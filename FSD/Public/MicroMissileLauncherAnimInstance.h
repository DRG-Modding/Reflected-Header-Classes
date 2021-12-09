#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "CopyBoneVisibilityCompleted.h"
#include "MicroMissileLauncherAnimInstance.generated.h"

class AMicroMissileLauncher;
class UAnimMontage;

UCLASS(NonTransient)
class UMicroMissileLauncherAnimInstance : public UAnimInstance, public ICopyBoneVisibilityCompleted {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AMicroMissileLauncher* Weapon;
    
    UFUNCTION()
    void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
    
public:
    UMicroMissileLauncherAnimInstance();
};

