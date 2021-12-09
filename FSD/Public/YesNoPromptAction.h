#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "YesNoPromptSettings.h"
#include "YesNoPromptAction.generated.h"

class UYesNoPromptWidget;
class UYesNoPromptAction;
class UObject;
class UResourceData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYesNoPromptActionYes);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FYesNoPromptActionYesNoDelegate, bool, Yes);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYesNoPromptActionNo);

UCLASS()
class UYesNoPromptAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FYesNoPromptActionYes Yes;
    
    UPROPERTY(BlueprintAssignable)
    FYesNoPromptActionNo No;
    
    UPROPERTY()
    FYesNoPromptActionYesNoDelegate YesNoDelegate;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UYesNoPromptWidget> ActivePrompt;
    
public:
    UFUNCTION(BlueprintCallable)
    static UYesNoPromptAction* PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt);
    
    UFUNCTION(BlueprintCallable)
    static UYesNoPromptAction* PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources);
    
protected:
    UFUNCTION()
    void PromptCallback(bool YesClicked);
    
public:
    UYesNoPromptAction();
};
