#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "WindowWidget.generated.h"

class UWindowWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowWidgetOnWindowClosed, UWindowWidget*, Window);

UCLASS(EditInlineNew)
class UWindowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowWidgetOnWindowClosed OnWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHandleCloseCommand;
    
    UPROPERTY(EditAnywhere)
    bool bResolutionDownscaleWhenOpen;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSelectPreviousCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSelectNextCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSelectCharacterCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOkCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCloseCommand();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewTopWindow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClosed();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCommand();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseThisWindow();
    
    UWindowWidget();
};

