#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
#include "RichTextBlock.generated.h"

class UDataTable;
class URichTextBlockDecorator;

UCLASS()
class UMG_API URichTextBlock : public UTextLayoutWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    UDataTable* TextStyleSet;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDefaultStyle;
    
    UPROPERTY(EditAnywhere)
    FTextBlockStyle DefaultTextStyleOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(Transient)
    TArray<URichTextBlockDecorator*> InstanceDecorators;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTextStyleSet(UDataTable* NewTextStyleSet);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredWidth(float InMinDesiredWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultShadowOffset(FVector2D InShadowOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFont(FSlateFontInfo InFontInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoWrapText(bool InAutoTextWrap);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass);
    
    UFUNCTION()
    void ClearAllDefaultStyleOverrides();
    
    URichTextBlock();
};

