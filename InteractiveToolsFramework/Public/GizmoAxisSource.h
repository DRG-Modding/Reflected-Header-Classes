#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoAxisSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoAxisSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual  return false; HasTangentVectors() const PURE_VIRTUAL(HasTangentVectors,);
    
    UFUNCTION()
    virtual void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION()
    virtual  return FVector{}; GetOrigin() const PURE_VIRTUAL(GetOrigin,);
    
    UFUNCTION()
    virtual  return FVector{}; GetDirection() const PURE_VIRTUAL(GetDirection,);
    
};

