#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "EditableTextBoxStyle.h"
#include "TextBlockStyle.h"
#include "InlineEditableTextBlockStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    FInlineEditableTextBlockStyle();
};

