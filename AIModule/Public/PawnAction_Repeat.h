#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Repeat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UPawnAction_Repeat : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAction* ActionToRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* RecentActionCopy;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPawnAction_Repeat();
};

