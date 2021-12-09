#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "FloatBinding.generated.h"

UCLASS()
class UMG_API UFloatBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    float GetValue() const;
    
    UFloatBinding();
};

