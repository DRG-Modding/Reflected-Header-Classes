#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoAxisSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoAxisSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasTangentVectors() const PURE_VIRTUAL(HasTangentVectors, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetOrigin() const PURE_VIRTUAL(GetOrigin, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetDirection() const PURE_VIRTUAL(GetDirection, return FVector{};);
    
};

