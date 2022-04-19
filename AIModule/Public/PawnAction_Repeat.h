#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Repeat.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Repeat : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UPawnAction* ActionToRepeat;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* RecentActionCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPawnAction_Repeat();
};

