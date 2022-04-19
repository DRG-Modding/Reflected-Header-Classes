#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Sequence.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Sequence : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UPawnAction*> ActionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* RecentActionCopy;
    
    UPawnAction_Sequence();
};

