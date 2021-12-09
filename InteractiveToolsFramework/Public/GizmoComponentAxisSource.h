#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoAxisSource.h"
#include "GizmoComponentAxisSource.generated.h"

class USceneComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY()
    int32 AxisIndex;
    
    UPROPERTY()
    bool bLocalAxes;
    
    UGizmoComponentAxisSource();
};

