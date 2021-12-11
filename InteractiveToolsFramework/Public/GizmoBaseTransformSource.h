#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GizmoTransformSource.h"
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

