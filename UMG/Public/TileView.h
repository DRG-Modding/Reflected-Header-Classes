#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EListItemAlignment -FallbackName=EListItemAlignment
#include "TileView.generated.h"

UCLASS(Blueprintable)
class UMG_API UTileView : public UListView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float EntryHeight;
    
    UPROPERTY(EditAnywhere)
    float EntryWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EListItemAlignment TileAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapHorizontalNavigation;
    
public:
    UTileView();
    UFUNCTION(BlueprintCallable)
    void SetEntryWidth(float NewWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHeight(float NewHeight);
    
    UFUNCTION(BlueprintPure)
    float GetEntryWidth() const;
    
    UFUNCTION(BlueprintPure)
    float GetEntryHeight() const;
    
};

