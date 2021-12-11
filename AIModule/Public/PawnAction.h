#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EAIRequestPriority.h"
#include "EPawnActionResult.h"
#include "PawnAction.generated.h"

class UPawnAction;
class UPawnActionsComponent;
class UBrainComponent;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class AIMODULE_API UPawnAction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPawnAction* ChildAction;
    
    UPROPERTY(Transient)
    UPawnAction* ParentAction;
    
    UPROPERTY(Export, Transient)
    UPawnActionsComponent* OwnerComponent;
    
    UPROPERTY(Transient)
    UObject* Instigator;
    
protected:
    UPROPERTY(Export, Transient)
    UBrainComponent* BrainComp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowNewSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bReplaceActiveSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bShouldPauseMovement: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAlwaysNotifyOnFinished: 1;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPawnAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UPawnAction> ActionClass);
    
    UPawnAction();
};

