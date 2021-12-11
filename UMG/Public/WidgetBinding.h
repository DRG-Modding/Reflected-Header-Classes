#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "WidgetBinding.generated.h"

class UWidget;

UCLASS()
class UMG_API UWidgetBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UWidget* GetValue() const;
    
    UWidgetBinding();
};

