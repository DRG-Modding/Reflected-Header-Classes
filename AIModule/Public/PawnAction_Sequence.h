#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Sequence.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Sequence : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UPawnAction*> ActionSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPROPERTY(Transient)
    UPawnAction* RecentActionCopy;
    
    UPawnAction_Sequence();
};

