#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoVec2ParameterChange.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoVec2ParameterChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentValue;
    
    FGizmoVec2ParameterChange();
};

