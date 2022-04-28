#pragma once
#include "CoreMinimal.h"
#include "BTCompositeNode.h"
#include "EBTParallelMode.h"
#include "BTComposite_SimpleParallel.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTComposite_SimpleParallel : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTParallelMode::Type> FinishMode;
    
    UBTComposite_SimpleParallel();
};

