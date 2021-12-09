#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "UseAnimationSetting.generated.h"

class UAnimMontage;

UCLASS()
class UUseAnimationSetting : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAnimMontage* BeginFP;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> LoopsFP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* EndFP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* BeginTP;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> LoopsTP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* EndTP;
    
    UPROPERTY(EditAnywhere)
    bool IsManuallyControlled;
    
public:
    UUseAnimationSetting();
};

