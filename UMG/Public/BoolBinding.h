#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "BoolBinding.generated.h"

UCLASS()
class UMG_API UBoolBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool GetValue() const;
    
    UBoolBinding();
};

