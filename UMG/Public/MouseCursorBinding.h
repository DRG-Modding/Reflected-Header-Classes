#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
#include "MouseCursorBinding.generated.h"

UCLASS()
class UMG_API UMouseCursorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UMouseCursorBinding();
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EMouseCursor::Type> GetValue() const;
    
};

