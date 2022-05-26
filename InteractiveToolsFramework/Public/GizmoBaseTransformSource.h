#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoTransformSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoBaseTransformSource.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseTransformSource : public UObject, public IGizmoTransformSource {
    GENERATED_BODY()
public:
    UGizmoBaseTransformSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetTransform(const FTransform& NewTransform) override PURE_VIRTUAL(SetTransform,);
    
    UFUNCTION()
    FTransform GetTransform() const override PURE_VIRTUAL(GetTransform, return FTransform{};);
    
};

