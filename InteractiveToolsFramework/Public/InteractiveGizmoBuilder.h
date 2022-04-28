#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveGizmoBuilder.generated.h"

UCLASS(Abstract, Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoBuilder : public UObject {
    GENERATED_BODY()
public:
    UInteractiveGizmoBuilder();
};

