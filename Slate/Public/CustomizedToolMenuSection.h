#pragma once
#include "CoreMinimal.h"
#include "ECustomizedToolMenuVisibility.h"
#include "CustomizedToolMenuSection.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedToolMenuSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECustomizedToolMenuVisibility Visibility;
    
    SLATE_API FCustomizedToolMenuSection();
};

