#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG TextBlock
//CROSS-MODULE INCLUDE: Slate ETextWrappingPolicy
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "FSDLabelWidget.generated.h"

UCLASS()
class UFSDLabelWidget : public UTextBlock {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetWrapTextAt(float WrapAt);
    
    UFUNCTION(BlueprintCallable)
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(FMargin NewMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFontSize() const;
    
    UFSDLabelWidget();
};

