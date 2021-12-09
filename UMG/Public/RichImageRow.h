#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "RichImageRow.generated.h"

USTRUCT()
struct UMG_API FRichImageRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    FRichImageRow();
};

