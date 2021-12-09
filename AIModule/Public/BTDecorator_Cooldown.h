#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_Cooldown.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_Cooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CoolDownTime;
    
    UBTDecorator_Cooldown();
};

