#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "TentacleAnimInstanceProxy.h"
#include "TentacleAnimInstance.generated.h"

UCLASS(NonTransient)
class UTentacleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FTentacleAnimInstanceProxy AnimInstanceProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseActorRotationDuringExtension;
    
public:
    UTentacleAnimInstance();
};

