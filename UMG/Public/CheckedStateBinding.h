#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
#include "CheckedStateBinding.generated.h"

UCLASS()
class UMG_API UCheckedStateBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UCheckedStateBinding();
    UFUNCTION(BlueprintCallable)
    ECheckBoxState GetValue() const;
    
};

