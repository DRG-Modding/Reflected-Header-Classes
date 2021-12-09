#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoFloatParameterSource.h"
#include "GizmoBaseFloatParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseFloatParameterSource : public UObject, public IGizmoFloatParameterSource {
    GENERATED_BODY()
public:
    UGizmoBaseFloatParameterSource();
};

