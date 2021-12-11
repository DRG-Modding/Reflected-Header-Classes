#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
#include "TreeView.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FTreeViewBP_OnGetItemChildren, UObject*, Item, TArray<UObject*>&, Children);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTreeViewBP_OnItemExpansionChanged, UObject*, Item, bool, bIsExpanded);

UCLASS()
class UMG_API UTreeView : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTreeViewBP_OnGetItemChildren BP_OnGetItemChildren;
    
    UPROPERTY(BlueprintAssignable)
    FTreeViewBP_OnItemExpansionChanged BP_OnItemExpansionChanged;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemExpansion(UObject* Item, bool bExpandItem);
    
    UFUNCTION(BlueprintCallable)
    void ExpandAll();
    
    UFUNCTION(BlueprintCallable)
    void CollapseAll();
    
    UTreeView();
};

