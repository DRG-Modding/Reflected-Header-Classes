#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolBuilder.generated.h"

UCLASS(Abstract, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolBuilder : public UObject {
    GENERATED_BODY()
public:
    UInteractiveToolBuilder();
};

