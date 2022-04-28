#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "OptionalUIWidget.generated.h"

class UOptionalUICategory;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UOptionalUIWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionalUICategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HiddenFlag;
    
public:
    UOptionalUIWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible);
    
};

