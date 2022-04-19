#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ERefineryState.h"
#include "FSDRefineryAnimInstance.generated.h"

UCLASS(NonTransient)
class UFSDRefineryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERefineryState RefineryState;
    
public:
    UFSDRefineryAnimInstance();
};

