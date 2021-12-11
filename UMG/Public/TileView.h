#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Slate EListItemAlignment
#include "ListView.h"
#include "TileView.generated.h"

UCLASS()
class UMG_API UTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EntryHeight;
    
    UPROPERTY(EditAnywhere)
    float EntryWidth;
    
    UPROPERTY(EditAnywhere)
    EListItemAlignment TileAlignment;
    
    UPROPERTY(EditAnywhere)
    bool bWrapHorizontalNavigation;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
    UTileView();
};

