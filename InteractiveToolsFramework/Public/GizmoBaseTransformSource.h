#pragma once
#include "CoreMinimal.h"
#include "GizmoTransformSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoBaseTransformSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseTransformSource : public UObject, public IGizmoTransformSource {
    GENERATED_BODY()
public:
    UGizmoBaseTransformSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetTransform(const FTransform& NewTransform) override PURE_VIRTUAL(SetTransform,);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform() const override PURE_VIRTUAL(GetTransform, return FTransform{};);
    
};

