#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GizmoVec2ParameterSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoVec2ParameterSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoVec2ParameterSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetParameter(const FVector2D& NewValue) PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION()
    virtual  return FVector2D{}; GetParameter() const PURE_VIRTUAL(GetParameter,);
    
    UFUNCTION()
    virtual void EndModify() PURE_VIRTUAL(EndModify,);
    
    UFUNCTION()
    virtual void BeginModify() PURE_VIRTUAL(BeginModify,);
    
};

