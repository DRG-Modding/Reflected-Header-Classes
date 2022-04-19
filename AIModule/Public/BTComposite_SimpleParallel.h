#pragma once
#include "CoreMinimal.h"
#include "EBTParallelMode.h"
#include "BTCompositeNode.h"
#include "BTComposite_SimpleParallel.generated.h"

UCLASS()
class AIMODULE_API UBTComposite_SimpleParallel : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTParallelMode::Type> FinishMode;
    
    UBTComposite_SimpleParallel();
};

