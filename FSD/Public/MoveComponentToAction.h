#pragma once
#include "CoreMinimal.h"
#include "TickableActionBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: Engine EEasingFunc
#include "MoveComponentToAction.generated.h"

class UObject;
class USceneComponent;
class UMoveComponentToAction;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveComponentToActionCompleted, USceneComponent*, Component);

UCLASS()
class UMoveComponentToAction : public UTickableActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintAssignable)
    FMoveComponentToActionCompleted Completed;
    
    UFUNCTION(BlueprintCallable)
    static UMoveComponentToAction* EaseComponentTo(UObject* WorldContext, USceneComponent* InComponent, FTransform InEndTransform, TEnumAsByte<EEasingFunc::Type> InEasingMode, bool InWorldSpace, float InDuration);
    
public:
    UMoveComponentToAction();
};

