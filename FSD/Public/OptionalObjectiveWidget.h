#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "OptionalObjectiveWidget.generated.h"

class UObjective;
class UOptionalObjectiveWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionalObjectiveWidgetOnWidgetUpdated, UOptionalObjectiveWidget*, InOptionalObjectiveWidget);

UCLASS(Abstract, EditInlineNew)
class UOptionalObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOptionalObjectiveWidgetOnWidgetUpdated OnWidgetUpdated;
    
    UFUNCTION(BlueprintCallable)
    void SignalWidgetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(UObjective* obj);
    
    UOptionalObjectiveWidget();
};

