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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MinParameter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MaxParameter;
    
    UGizmoAxisIntervalParameterSource();
};

