#pragma once
#include "CoreMinimal.h"
#include "ESlateSizeRule.h"
#include "SlateChildSize.generated.h"

USTRUCT(BlueprintType)
struct FSlateChildSize {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESlateSizeRule::Type> SizeRule;
    
    UMG_API FSlateChildSize();
};

