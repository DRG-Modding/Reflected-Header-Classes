#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseVec2ParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoVec2ParameterChange.h"
#include "GizmoLocalVec2ParameterSource.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoVec2ParameterChange LastChange;
    
    UGizmoLocalVec2ParameterSource();
};

