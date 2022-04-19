#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "ESlateVisibility.h"
#include "VisibilityBinding.generated.h"

UCLASS()
class UMG_API UVisibilityBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UVisibilityBinding();
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetValue() const;
    
};

