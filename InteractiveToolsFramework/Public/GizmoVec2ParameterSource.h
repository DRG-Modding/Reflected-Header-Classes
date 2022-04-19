#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoVec2ParameterSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoVec2ParameterSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoVec2ParameterSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetParameter(const FVector2D& NewValue) PURE_VIRTUAL(SetParameter,);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector2D GetParameter() const PURE_VIRTUAL(GetParameter, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void EndModify() PURE_VIRTUAL(EndModify,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BeginModify() PURE_VIRTUAL(BeginModify,);
    
};

