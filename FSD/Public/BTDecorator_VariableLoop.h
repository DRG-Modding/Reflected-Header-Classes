#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BTDecorator_VariableLoop.generated.h"

UCLASS()
class UBTDecorator_VariableLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange NumLoops;
    
    UBTDecorator_VariableLoop();
};

