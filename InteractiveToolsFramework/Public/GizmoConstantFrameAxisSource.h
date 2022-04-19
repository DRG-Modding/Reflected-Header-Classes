#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoAxisSource.h"
#include "GizmoConstantFrameAxisSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoConstantFrameAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector TangentX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector TangentY;
    
    UGizmoConstantFrameAxisSource();
    
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

