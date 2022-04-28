#pragma once
#include "CoreMinimal.h"
#include "EBTDecoratorLogic.h"
#include "BTDecoratorLogic.generated.h"

USTRUCT(BlueprintType)
struct FBTDecoratorLogic {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTDecoratorLogic::Type> Operation;
    
    UPROPERTY(EditAnywhere)
    uint16 Number;
    
    AIMODULE_API FBTDecoratorLogic();
};

