#pragma once
#include "CoreMinimal.h"
#include "ListViewBase.h"
//CROSS-MODULE INCLUDE: SlateCore EOrientation
//CROSS-MODULE INCLUDE: Slate ESelectionMode
//CROSS-MODULE INCLUDE: SlateCore EConsumeMouseWheel
#include "ListView.generated.h"

class UObject;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListViewBP_OnItemScrolledIntoView, UObject*, Item, UUserWidget*, Widget);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListViewBP_OnEntryInitialized, UObject*, Item, UUserWidget*, Widget);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListViewBP_OnItemIsHoveredChanged, UObject*, Item, bool, bIsHovered);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListViewBP_OnItemClicked, UObject*, Item);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListViewBP_OnItemSelectionChanged, UObject*, Item, bool, bIsSelected);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FListViewBP_OnItemDoubleClicked, UObject*, Item);

UCLASS()
class UMG_API UListView : public UListViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClearSelectionOnClick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UPROPERTY(EditAnywhere)
    float EntrySpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReturnFocusToSelection;
    
    UPROPERTY(Transient)
    TArray<UObject*> ListItems;
    
private:
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnEntryInitialized BP_OnEntryInitialized;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnItemClicked BP_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnItemDoubleClicked BP_OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnItemIsHoveredChanged BP_OnItemIsHoveredChanged;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnItemSelectionChanged BP_OnItemSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FListViewBP_OnItemScrolledIntoView BP_OnItemScrolledIntoView;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectionMode(TEnumAsByte<ESelectionMode::Type> NewSelectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ScrollIndexIntoView(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefreshPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetListItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetItemAt(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearListItems();
    
private:
    UFUNCTION(BlueprintCallable)
    void BP_SetSelectedItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetListItems(const TArray<UObject*>& InListItems);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetItemSelection(UObject* Item, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void BP_ScrollItemIntoView(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    void BP_NavigateToItem(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsItemVisible(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool BP_GetSelectedItems(TArray<UObject*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* BP_GetSelectedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetNumItemsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelScrollIntoView();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* Item);
    
    UListView();
};

