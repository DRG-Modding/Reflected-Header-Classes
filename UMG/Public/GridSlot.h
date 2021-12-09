#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GridSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UGridSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Row;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RowSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Column;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ColumnSpan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Layer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Nudge;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetRowSpan(int32 InRowSpan);
    
    UFUNCTION(BlueprintCallable)
    void SetRow(int32 InRow);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetNudge(FVector2D InNudge);
    
    UFUNCTION(BlueprintCallable)
    void SetLayer(int32 InLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnSpan(int32 InColumnSpan);
    
    UFUNCTION(BlueprintCallable)
    void SetColumn(int32 InColumn);
    
    UGridSlot();
};

