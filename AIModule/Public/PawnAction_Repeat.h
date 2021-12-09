#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Repeat.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Repeat : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPawnAction* ActionToRepeat;
    
    UPROPERTY(Transient)
    UPawnAction* RecentActionCopy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPawnAction_Repeat();
};

