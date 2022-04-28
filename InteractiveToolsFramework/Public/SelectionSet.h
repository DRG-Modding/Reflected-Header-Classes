#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SelectionSet.generated.h"

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API USelectionSet : public UObject {
    GENERATED_BODY()
public:
    USelectionSet();
};

