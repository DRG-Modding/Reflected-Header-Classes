#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: SlateCore Geometry
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
#include "EventReply.h"
#include "Border.generated.h"

class UTexture2D;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateBrush, FBorderBackgroundDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FBorderContentColorAndOpacityDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FBorderBrushColorDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FBorderOnMouseButtonDownEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FBorderOnMouseDoubleClickEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FBorderOnMouseButtonUpEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FBorderOnMouseMoveEvent, FGeometry, MyGeometry, const FPointerEvent&, MouseEvent);

UCLASS()
class UMG_API UBorder : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bShowEffectWhenDisabled: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ContentColorAndOpacity;
    
    UPROPERTY()
    FBorderContentColorAndOpacityDelegate ContentColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush Background;
    
    UPROPERTY()
    FBorderBackgroundDelegate BackgroundDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BrushColor;
    
    UPROPERTY()
    FBorderBrushColorDelegate BrushColorDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D DesiredSizeScale;
    
    UPROPERTY(EditAnywhere)
    bool bFlipForRightToLeftFlowDirection;
    
    UPROPERTY(EditAnywhere)
    FBorderOnMouseButtonDownEvent OnMouseButtonDownEvent;
    
    UPROPERTY(EditAnywhere)
    FBorderOnMouseButtonUpEvent OnMouseButtonUpEvent;
    
    UPROPERTY(EditAnywhere)
    FBorderOnMouseMoveEvent OnMouseMoveEvent;
    
    UPROPERTY(EditAnywhere)
    FBorderOnMouseDoubleClickEvent OnMouseDoubleClickEvent;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSizeScale(FVector2D InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushColor(FLinearColor InBrushColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
    UBorder();
};

