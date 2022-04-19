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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBTCompositeChild> Children;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UBTService*> Services;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDecoratorScope: 1;
    
public:
    UBTCompositeNode();
};

