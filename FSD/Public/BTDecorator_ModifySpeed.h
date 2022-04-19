#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_ModifySpeed.generated.h"

UCLASS()
class UBTDecorator_ModifySpeed : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier;
    
public:
    UBTDecorator_ModifySpeed();
};

