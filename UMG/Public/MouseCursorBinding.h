#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE: CoreUObject EMouseCursor
#include "MouseCursorBinding.generated.h"

UCLASS()
class UMG_API UMouseCursorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UFUNCTION()
    TEnumAsByte<EMouseCursor::Type> GetValue() const;
    
    UMouseCursorBinding();
};

