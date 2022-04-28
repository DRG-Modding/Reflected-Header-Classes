#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnchorTurnerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAnchorTurnerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float ModuleRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float Percent;
    
    UPROPERTY(EditAnywhere, Transient)
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFinished;
    
    UAnchorTurnerAnimInstance();
};

