#pragma once
#include "CoreMinimal.h"
#include "EFSDInputSource.h"
#include "FSDUserWidget.h"
#include "MouseCursorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UMouseCursorWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFSDInputSource TargetInput;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsHovering;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnhover();
    
    UFUNCTION()
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHover();
    
public:
    UMouseCursorWidget();
};

