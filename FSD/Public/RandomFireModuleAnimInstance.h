#pragma once
#include "CoreMinimal.h"
#include "GunTowerModuleAnimInstance.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "RandomFireModuleAnimInstance.generated.h"

UCLASS(NonTransient)
class URandomFireModuleAnimInstance : public UGunTowerModuleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator OtherLookatRotation;
    
    URandomFireModuleAnimInstance();
};

