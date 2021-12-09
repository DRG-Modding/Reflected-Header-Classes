#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "EventStarterAnimInstance.generated.h"

UCLASS(NonTransient)
class UEventStarterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float UseProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsOpenForUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsBooted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsEventActive;
    
public:
    UEventStarterAnimInstance();
};

