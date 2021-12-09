#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "GrenadeAnimationSet.generated.h"

class UAnimMontage;

UCLASS()
class UGrenadeAnimationSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_ThrowAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_ThrowAnimation;
    
    UGrenadeAnimationSet();
};

