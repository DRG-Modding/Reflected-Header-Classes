#pragma once
#include "CoreMinimal.h"
#include "PawnAction.h"
#include "PawnAction_Wait.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Wait : public UPawnAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TimeToWait;
    
    UPawnAction_Wait();
};

