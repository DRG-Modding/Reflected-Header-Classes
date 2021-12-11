#pragma once
#include "CoreMinimal.h"
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: SlateCore SlateColor
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "TextBlock.generated.h"

class UMaterialInstanceDynamic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FTextBlockTextDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateColor, FTextBlockColorAndOpacityDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FTextBlockShadowColorAndOpacityDelegate);

UCLASS()
class UMG_API UTextBlock : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    FTextBlockTextDelegate TextDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ColorAndOpacity;
    
    UPROPERTY()
    FTextBlockColorAndOpacityDelegate ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY()
    FTextBlockShadowColorAndOpacityDelegate ShadowColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bWrapWithInvalidationPanel;
    
    UPROPERTY()
    bool bAutoWrapText;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bSimpleTextMode;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetStrikeBrush(FSlateBrush InStrikeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoTextWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicFontMaterial();
    
    UTextBlock();
};

