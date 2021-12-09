#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoAxisSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoWorldAxisSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoWorldAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    int32 AxisIndex;
    
    UGizmoWorldAxisSource();
};

