#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoAxisSource.h"
#include "GizmoComponentAxisSource.generated.h"

class USceneComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AxisIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bLocalAxes;
    
    UGizmoComponentAxisSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasTangentVectors() const override PURE_VIRTUAL(HasTangentVectors, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const override PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION(BlueprintCallable)
    FVector GetOrigin() const override PURE_VIRTUAL(GetOrigin, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetDirection() const override PURE_VIRTUAL(GetDirection, return FVector{};);
    
};

