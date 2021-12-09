#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoVec2ParameterSource.h"
#include "GizmoBaseVec2ParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseVec2ParameterSource : public UObject, public IGizmoVec2ParameterSource {
    GENERATED_BODY()
public:
    UGizmoBaseVec2ParameterSource();
};

