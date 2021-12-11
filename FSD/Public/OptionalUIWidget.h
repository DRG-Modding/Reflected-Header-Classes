#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "OptionalUIWidget.generated.h"

class UOptionalUICategory;

UCLASS(Abstract, EditInlineNew)
class UOptionalUIWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UOptionalUICategory* Category;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility VisibleFlag;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility HiddenFlag;
    
    UFUNCTION(BlueprintCallable)
    void OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible);
    
public:
    UOptionalUIWidget();
};

