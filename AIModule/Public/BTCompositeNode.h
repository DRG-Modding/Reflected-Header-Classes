#pragma once
#include "CoreMinimal.h"
#include "BTNode.h"
#include "BTCompositeChild.h"
#include "BTCompositeNode.generated.h"

class UBTService;

UCLASS(Abstract)
class AIMODULE_API UBTCompositeNode : public UBTNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBTCompositeChild> Children;
    
    UPROPERTY()
    TArray<UBTService*> Services;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bApplyDecoratorScope: 1;
    
public:
    UBTCompositeNode();
};

