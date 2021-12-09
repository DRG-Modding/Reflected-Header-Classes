#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "PawnActionStack.h"
#include "PawnActionEvent.h"
#include "EAIRequestPriority.h"
#include "EPawnActionAbortState.h"
#include "PawnActionsComponent.generated.h"

class UPawnAction;
class APawn;
class UObject;

UCLASS(BlueprintType)
class AIMODULE_API UPawnActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    APawn* ControlledPawn;
    
    UPROPERTY()
    TArray<FPawnActionStack> ActionStacks;
    
    UPROPERTY()
    TArray<FPawnActionEvent> ActionEvents;
    
    UPROPERTY(Transient)
    UPawnAction* CurrentAction;
    
public:
    UFUNCTION(BlueprintCallable)
    bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(UPawnAction* ActionToAbort);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(UPawnAction* ActionToAbort);
    
    UPawnActionsComponent();
};

