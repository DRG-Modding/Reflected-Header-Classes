#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoVec2ParameterSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GizmoBaseVec2ParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseVec2ParameterSource : public UObject, public IGizmoVec2ParameterSource {
    GENERATED_BODY()
public:
    UGizmoBaseVec2ParameterSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetParameter(const FVector2D& NewValue) override PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetParameter() const override PURE_VIRTUAL(GetParameter, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    void EndModify() override PURE_VIRTUAL(EndModify,);
    
    UFUNCTION(BlueprintCallable)
    void BeginModify() override PURE_VIRTUAL(BeginModify,);
    
};

