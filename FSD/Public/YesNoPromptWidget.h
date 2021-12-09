#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "YesNoPromptWidget.generated.h"

class UResourceData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FYesNoPromptWidgetOnClickedCallback, bool, Yes);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FYesNoPromptWidgetOnYesNoClicked, bool, Yes);

UCLASS(EditInlineNew)
class UYesNoPromptWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDestroyOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCloseAllWindows;
    
    UPROPERTY(Transient)
    FYesNoPromptWidgetOnClickedCallback OnClickedCallback;
    
public:
    UFUNCTION(BlueprintCallable)
    void Show(FText Title, FText Message, const FYesNoPromptWidgetOnYesNoClicked& OnYesNoClicked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMappedResources(const TMap<UResourceData*, int32>& Resources);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow(const FText& Title, const FText& Message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClicked(bool Yes);
    
    UFUNCTION(BlueprintCallable)
    void Clicked(bool YesClicked);
    
public:
    UYesNoPromptWidget();
};

