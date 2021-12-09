#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoAxisIntervalParameterSource.generated.h"

class UGizmoFloatParameterSource;
class IGizmoFloatParameterSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;
    
    UPROPERTY()
    float MinParameter;
    
    UPROPERTY()
    float MaxParameter;
    
    UGizmoAxisIntervalParameterSource();
};

