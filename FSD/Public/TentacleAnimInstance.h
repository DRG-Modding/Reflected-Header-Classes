#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "TentacleAnimInstanceProxy.h"
#include "TentacleAnimInstance.generated.h"

UCLASS(NonTransient)
class UTentacleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FTentacleAnimInstanceProxy AnimInstanceProxy;
    
    UPROPERTY(EditAnywhere)
    bool UseActorRotationDuringExtension;
    
public:
    UTentacleAnimInstance();
};

