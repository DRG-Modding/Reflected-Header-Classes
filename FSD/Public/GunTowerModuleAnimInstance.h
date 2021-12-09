#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "GunTowerModuleAnimInstance.generated.h"

UCLASS(NonTransient)
class UGunTowerModuleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator CurrentModuleRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator CurrentLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsModuleActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool AreWeakpointsExposed;
    
    UGunTowerModuleAnimInstance();
};

