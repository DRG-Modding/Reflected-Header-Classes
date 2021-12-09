#pragma once
#include "CoreMinimal.h"
#include "BTNode.h"
#include "BTTaskNode.generated.h"

class UBTService;

UCLASS(Abstract)
class AIMODULE_API UBTTaskNode : public UBTNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UBTService*> Services;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreRestartSelf: 1;
    
public:
    UBTTaskNode();
};

