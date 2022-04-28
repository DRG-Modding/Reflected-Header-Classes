#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator_BlackboardBase -FallbackName=BTDecorator_BlackboardBase
#include "BTDecorator_IsFacing.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_IsFacing : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
public:
    UBTDecorator_IsFacing();
};

