#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoAxisSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoConstantAxisSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoConstantAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    FVector Direction;
    
    UGizmoConstantAxisSource();
};

