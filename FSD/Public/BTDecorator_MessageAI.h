#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_MessageAI.generated.h"

UCLASS()
class UBTDecorator_MessageAI : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ActivationMessage;
    
    UPROPERTY(EditAnywhere)
    FName DeactivationMessage;
    
    UBTDecorator_MessageAI();
};

