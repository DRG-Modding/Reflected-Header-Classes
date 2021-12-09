#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "BoolBinding.generated.h"

UCLASS()
class UMG_API UBoolBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    bool GetValue() const;
    
    UBoolBinding();
};

