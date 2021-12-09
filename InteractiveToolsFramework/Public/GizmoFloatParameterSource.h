#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "GizmoFloatParameterSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoFloatParameterSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoFloatParameterSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetParameter(float NewValue) PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION()
    virtual  return 0.0f; GetParameter() const PURE_VIRTUAL(GetParameter,);
    
    UFUNCTION()
    virtual void EndModify() PURE_VIRTUAL(EndModify,);
    
    UFUNCTION()
    virtual void BeginModify() PURE_VIRTUAL(BeginModify,);
    
};

