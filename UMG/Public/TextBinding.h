#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "TextBinding.generated.h"

UCLASS()
class UMG_API UTextBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    FText GetTextValue() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetStringValue() const;
    
    UTextBinding();
};

