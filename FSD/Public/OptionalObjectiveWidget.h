#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OptionalObjectiveWidget.generated.h"

class UOptionalObjectiveWidget;
class UObjective;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UOptionalObjectiveWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionalObjectiveWidgetDelegate, UOptionalObjectiveWidget*, InOptionalObjectiveWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionalObjectiveWidgetDelegate OnWidgetUpdated;
    
    UOptionalObjectiveWidget();
    UFUNCTION(BlueprintCallable)
    void SignalWidgetUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjective(UObjective* obj);
    
};

