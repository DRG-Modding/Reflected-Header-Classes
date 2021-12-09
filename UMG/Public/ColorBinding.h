#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ColorBinding.generated.h"

UCLASS()
class UMG_API UColorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    FSlateColor GetSlateValue() const;
    
    UFUNCTION()
    FLinearColor GetLinearValue() const;
    
    UColorBinding();
};

