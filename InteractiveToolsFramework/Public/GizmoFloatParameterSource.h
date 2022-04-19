#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GizmoFloatParameterSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoFloatParameterSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoFloatParameterSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetParameter(float NewValue) PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetParameter() const PURE_VIRTUAL(GetParameter, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual void EndModify() PURE_VIRTUAL(EndModify,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BeginModify() PURE_VIRTUAL(BeginModify,);
    
};

