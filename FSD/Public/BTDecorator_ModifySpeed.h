#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_ModifySpeed.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_ModifySpeed : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SpeedModifier;
    
public:
    UBTDecorator_ModifySpeed();
};

