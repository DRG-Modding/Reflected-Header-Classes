#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "BTTask_RotateToFaceBBEntry.generated.h"

UCLASS()
class AIMODULE_API UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float Precision;
    
public:
    UBTTask_RotateToFaceBBEntry();
};

