#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "Int32Binding.generated.h"

UCLASS()
class UMG_API UInt32Binding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    int32 GetValue() const;
    
    UInt32Binding();
};

