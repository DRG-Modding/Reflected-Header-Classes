#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAIRequestPriority.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPawnActionResult.h"
#include "PawnAction.generated.h"

class UBrainComponent;
class UPawnAction;
class UPawnActionsComponent;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class AIMODULE_API UPawnAction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* ChildAction;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPawnAction* ParentAction;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPawnActionsComponent* OwnerComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* Instigator;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UBrainComponent* BrainComp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bAllowNewSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bReplaceActiveSameClassInstance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bShouldPauseMovement: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysNotifyOnFinished: 1;
    
public:
    UPawnAction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPawnAction* CreateActionInstance(UObject* WorldContextObject, TSubclassOf<UPawnAction> ActionClass);
    
};

