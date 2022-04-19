#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEasingFunc -FallbackName=EEasingFunc
#include "MoveComponentToAction.generated.h"

class UMoveComponentToAction;
class USceneComponent;
class UObject;

UCLASS()
class UMoveComponentToAction : public UTickableActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedDelegate, USceneComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCompletedDelegate Completed;
    
public:
    UMoveComponentToAction();
protected:
    UFUNCTION(BlueprintCallable)
    static UMoveComponentToAction* EaseComponentTo(UObject* WorldContext, USceneComponent* InComponent, FTransform InEndTransform, TEnumAsByte<EEasingFunc::Type> InEasingMode, bool InWorldSpace, float InDuration);
    
};

