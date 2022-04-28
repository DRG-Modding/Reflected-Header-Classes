#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "GridPanel.generated.h"

class UWidget;
class UGridSlot;

UCLASS(Blueprintable)
class UMG_API UGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> ColumnFill;
    
    UPROPERTY(EditAnywhere)
    TArray<float> RowFill;
    
    UGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetRowFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnFill(int32 ColumnIndex, float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    UGridSlot* AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

