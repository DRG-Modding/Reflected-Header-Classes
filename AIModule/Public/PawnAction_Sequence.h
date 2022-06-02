#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "EPawnActionFailHandling.h"
#include "PawnAction_Sequence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UPawnAction_Sequence : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPawnAction*> ActionSequence;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* RecentActionCopy;
    
    UPawnAction_Sequence();
};

