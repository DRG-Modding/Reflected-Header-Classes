#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "BrushBinding.generated.h"

UCLASS()
class UMG_API UBrushBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    FSlateBrush GetValue() const;
    
    UBrushBinding();
};

