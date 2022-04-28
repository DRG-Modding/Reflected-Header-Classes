#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoVec2ParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoBaseVec2ParameterSource.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseVec2ParameterSource : public UObject, public IGizmoVec2ParameterSource {
    GENERATED_BODY()
public:
    UGizmoBaseVec2ParameterSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetParameter(const FVector2D& NewValue) override PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION()
    FVector2D GetParameter() const override PURE_VIRTUAL(GetParameter, return FVector2D{};);
    
    UFUNCTION()
    void EndModify() override PURE_VIRTUAL(EndModify,);
    
    UFUNCTION()
    void BeginModify() override PURE_VIRTUAL(BeginModify,);
    
};

