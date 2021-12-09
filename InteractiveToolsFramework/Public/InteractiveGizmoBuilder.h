#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InteractiveGizmoBuilder.generated.h"

UCLASS(Abstract, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoBuilder : public UObject {
    GENERATED_BODY()
public:
    UInteractiveGizmoBuilder();
};

