#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "TransformProxy.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UTransformProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bRotatePerObject;
    
    UPROPERTY()
    bool bSetPivotMode;
    
protected:
    UPROPERTY()
    FTransform SharedTransform;
    
    UPROPERTY()
    FTransform InitialSharedTransform;
    
public:
    UTransformProxy();
};

