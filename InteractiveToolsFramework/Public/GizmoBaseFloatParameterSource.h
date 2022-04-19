#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoFloatParameterSource.h"
#include "GizmoBaseFloatParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseFloatParameterSource : public UObject, public IGizmoFloatParameterSource {
    GENERATED_BODY()
public:
    UGizmoBaseFloatParameterSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetParameter(float NewValue) override PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION(BlueprintCallable)
    float GetParameter() const override PURE_VIRTUAL(GetParameter, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void EndModify() override PURE_VIRTUAL(EndModify,);
    
    UFUNCTION(BlueprintCallable)
    void BeginModify() override PURE_VIRTUAL(BeginModify,);
    
};

