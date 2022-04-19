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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBTCompositeNode* ChildComposite;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBTTaskNode* ChildTask;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UBTDecorator*> Decorators;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBTDecoratorLogic> DecoratorOps;
    
    AIMODULE_API FBTCompositeChild();
};

