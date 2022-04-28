#pragma once
#include "CoreMinimal.h"
#include "TextBlockStyle.h"
#include "SlateWidgetStyle.h"
#include "EditableTextBoxStyle.h"
#include "InlineEditableTextBlockStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    FInlineEditableTextBlockStyle();
};

