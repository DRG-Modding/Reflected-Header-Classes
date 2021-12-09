#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoAxisSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoConstantFrameAxisSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoConstantFrameAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    FVector TangentX;
    
    UPROPERTY()
    FVector TangentY;
    
    UGizmoConstantFrameAxisSource();
};

