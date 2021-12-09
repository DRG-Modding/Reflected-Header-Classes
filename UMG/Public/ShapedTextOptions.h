#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Slate ETextFlowDirection
//CROSS-MODULE INCLUDE: SlateCore ETextShapingMethod
#include "ShapedTextOptions.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FShapedTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_TextShapingMethod: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_TextFlowDirection: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextShapingMethod TextShapingMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextFlowDirection TextFlowDirection;
    
    FShapedTextOptions();
};

