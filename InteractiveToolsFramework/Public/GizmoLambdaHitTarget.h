#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoClickTarget.h"
#include "GizmoLambdaHitTarget.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLambdaHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UGizmoLambdaHitTarget();
};

