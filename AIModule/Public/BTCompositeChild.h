#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorLogic.h"
#include "BTCompositeChild.generated.h"

class UBTCompositeNode;
class UBTTaskNode;
class UBTDecorator;

USTRUCT(BlueprintType)
struct FBTCompositeChild {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBTCompositeNode* ChildComposite;
    
    UPROPERTY()
    UBTTaskNode* ChildTask;
    
    UPROPERTY()
    TArray<UBTDecorator*> Decorators;
    
    UPROPERTY()
    TArray<FBTDecoratorLogic> DecoratorOps;
    
    AIMODULE_API FBTCompositeChild();
};

