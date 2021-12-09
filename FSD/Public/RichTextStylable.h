#pragma once
#include "CoreMinimal.h"
#include "TextStyleOverride.h"
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: UMG RichTextBlock
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "RichTextStylable.generated.h"

UCLASS()
class URichTextStylable : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FontColor;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FTextStyleOverride> Styles;
    
public:
    URichTextStylable();
};
