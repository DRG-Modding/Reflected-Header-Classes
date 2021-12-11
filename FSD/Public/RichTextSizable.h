#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: UMG RichTextBlock
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "RichTextSizable.generated.h"

UCLASS()
class URichTextSizable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bOverrideDefaultSize;
    
    UPROPERTY(EditAnywhere)
    int32 OverrideDefaultFontSize;
    
    UPROPERTY()
    bool bOverrideDefaultColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor OverrideDefaultFontColor;
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(int32 inFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontColor(const FLinearColor& InColor);
    
public:
    URichTextSizable();
};

