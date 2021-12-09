#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
#include "RichTextStyleRow.generated.h"

USTRUCT()
struct FRichTextStyleRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UMG_API FRichTextStyleRow();
};

