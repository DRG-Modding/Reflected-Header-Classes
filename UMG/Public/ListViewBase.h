#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Widget.h"
#include "UserWidgetPool.h"
#include "ESlateVisibility.h"
#include "ListViewBase.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListViewBaseBP_OnEntryGenerated, UUserWidget*, Widget);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListViewBaseBP_OnEntryReleased, UUserWidget*, Widget);

UCLASS(Abstract, HideDropdown)
class UMG_API UListViewBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableScrollAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableFixedLineOffset;
    
    UPROPERTY(EditAnywhere)
    float FixedLineScrollOffset;
    
private:
    UPROPERTY(BlueprintAssignable)
    FListViewBaseBP_OnEntryGenerated BP_OnEntryGenerated;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBaseBP_OnEntryReleased BP_OnEntryReleased;
    
    UPROPERTY(Transient)
    FUserWidgetPool EntryWidgetPool;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(const float InScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToTop();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToBottom();
    
    UFUNCTION(BlueprintCallable)
    void RequestRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateAllEntries();
    
    UFUNCTION(BlueprintPure)
    TArray<UUserWidget*> GetDisplayedEntryWidgets() const;
    
    UListViewBase();
};

